all: vector stack map set

vector:
	make test -C vector-tests

stack:
	make test -C stack-tests

map:
	make test -C map-tests

set:
	make test -C set-tests

clean: clean_vector clean_stack clean_map clean_set

clean_vector:
	$(MAKE) clean -C vector-tests

clean_stack:
	$(MAKE) clean -C stack-tests

clean_map:
	$(MAKE) clean -C map-tests

clean_set:
	$(MAKE) clean -C set-tests

fclean: fclean_vector fclean_stack fclean_map fclean_set

fclean_vector: clean_vector
	$(MAKE) fclean -C vector-tests

fclean_stack: clean_stack
	$(MAKE) fclean -C stack-tests

fclean_map: clean_map
	$(MAKE) fclean -C map-tests

fclean_set: clean_set
	$(MAKE) fclean -C set-tests

re: fclean all

re_vector: fclean_vector vector

re_stack: fclean_stack stack

re_map: fclean_set map

re_set: fclean_set set

.PHONY:		all vector stack map set re re_vector re_stack re_map re_set clean clean_vector clean_stack clean_map clean_set fclean fclean_vector fclean_stack fclean_map fclean_set
