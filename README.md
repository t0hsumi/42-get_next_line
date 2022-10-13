# get_next_line

This project aims to code a function that returns a line, read from a file descriptor.

## The Project

This project purposed to code `char *get_next_line(int fd)` function.
- This function returns the line that has just been read. If there is nothing else
  to read or if an error has occurred it should return NULL.
- This program must compile with the flag **-D BUFFER_SIZE=xx** which will be used
  as the buffer size for the read calls in get_next_line.
- `read()` must use the BUFFER_SIZE defined during compilation to read from a file or stdin.

I also have done the bonus part, so if compiling `*_bonus.[c\h]` handling multiple file descriptors is available. For example, if the file descriptors 3, 4, and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5, etc. without losing the reading thread on each of the descriptors.

### misc
- I can use `malloc`, `free`, and `read`,
  and other normal libc functions are forbidden.
- In no way can it quit abruptly.
  (segmentation fault, bus error, double free, etc).
- All heap allocated memory space must be properly freed when necessary.
  No leaks will be tolerated.
- Global variables are forbidden.
- All code must conform to the [42 Norm](https://github.com/42School/norminette).

## Usage

See [main.c](./main.c) and [bonusmain.c](./bonusmain.c) for use.

## Author

[Twitter](https://twitter.com/t76_1205)

## Licence

[MIT](./LICENSE)