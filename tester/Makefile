TESTS_PATH			= ./tests/

MANDATORY_HEADER	= ../get_next_line.h
MANDATORY_FILES		= ../get_next_line.c ../get_next_line_utils.c
MANDATORY_OBJS		= $(MANDATORY_FILES:../%.c:=%.o)

BONUS_HEADER		= ../get_next_line_bonus.h
BONUS_FILES			= ../get_next_line_bonus.c ../get_next_line_utils_bonus.c
BONUS_OBJS			= $(BONUS_FILES:../$.c=%.o)

CC					= gcc
CFLAGS				= -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean fclean:
	rm -rf $(MANDATORY_OBJS) $(BONUS_OBJS)


