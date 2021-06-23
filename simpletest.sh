gcc -Wall -Wextra -Werror -fsanitize=address -g -D BUFFER_SIZE="$1" get_next_line.c get_next_line_utils.c simplemain.c && \
./a.out