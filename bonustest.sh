gcc -Wall -Wextra -Werror -fsanitize=address -g -D BUFFER_SIZE="$1" get_next_line_bonus.c get_next_line_utils_bonus.c mainbonus.c && \
./a.out