#CC=<path_to_afl_plusplus>/afl-clang-fast

test_call_http_RecvMessage:
	$(CC) -Wall -DAFL_FUZZING -I ../inc $@.c -L ../ -lupnp -lixml -lthreadutil -o $@

get_sdk_info_example:
	$(CC) -Wall -I ../inc $@.c -L ../ -lupnp -lixml -lthreadutil -o $@

clean:
	@rm -f test_call_http_RecvMessage
	@rm -f get_sdk_info_example