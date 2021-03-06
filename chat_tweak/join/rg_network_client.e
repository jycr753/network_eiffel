note
	description: "Description.."

class
	RG_NETWORK_CLIENT

inherit

	NETWORK_CLIENT
		redefine
			received
		end

create
	make_join

feature

	make_join
		local
			l_client_name: detachable like client_name
		do
			check_name
			l_client_name := client_name
			make (1337, "localhost")
			max_to_poll := in_out.descriptor + 1
			create connection.make (in_out)
			create poll.make_read_only
			poll.put_read_command (connection)
			send_name_to_server
			auto_scan_server
			processing
		end

feature {NONE} -- Implementation

	connection: RG_CONNECTION
	std_input: detachable RG_CONNECTION
	message_out: MESSAGE
	received: detachable MESSAGE
	client_name: STRING
	over: BOOLEAN
	poll: MEDIUM_POLLER
	input_poll: detachable MEDIUM_POLLER
	max_to_poll: INTEGER
	waiting:BOOLEAN

	send_name_to_server
		do
			create message_out.make
			message_out.set_client_name (client_name)
			message_out.set_new (True)
			message_out.set_over (False)
			-- attatch player-state etc.
			send (message_out)
		end

	processing
		do
			from
				over := False
			until
				over
			loop
				scan_from_server
				if not over then
					read_content
				end
			end
			cleanup
		end

	read_content
		local
			temp: detachable STRING
		do
			io.put_string ("Enter message: ")
			io.readline
			temp := io.laststring
			if temp /= Void and not temp.is_empty then
				if temp.is_equal ("bye") then
					over := True
				end
				create message_out.make
				message_out.extend (temp)
				message_out.extend ("%N")
				message_out.set_over (over)
				message_out.set_client_name (client_name)
				message_out.set_new (False)
				send (message_out)
				auto_scan_server
			end
		end

	check_name
		local
			l_name: detachable STRING
		do
			io.putstring ("Enter your name : ")
			io.readline
			l_name := io.laststring
			check
				l_name_attached: l_name /= Void
			end
			client_name := l_name.twin
		end

	scan_from_server
		local
			l_received: like received
		do
			connection.initialize
			poll.execute (max_to_poll, 1000)
			if connection.is_waiting then
				receive
				l_received := received
				if l_received /= Void then
					waiting := FALSE
					l_received.print_message
					if l_received.over then
						over := True
					end
				end
			end
		end

	auto_scan_server
		do
			waiting := TRUE
			from until not waiting
			loop
				scan_from_server
			end
		end

end
