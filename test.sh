gcc -Wall -Wextra -Werror -fsanitize=address -g -D BUFFER_SIZE="$1" get_next_line.c get_next_line_utils.c main.c && \
./a.out 1 && ./a.out 2 && ./a.out 3 && ./a.out 4 && ./a.out 5 && ./a.out 6 && \
echo -n "test1: " && diff sample1.txt sample1_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "[OK]"
else
	echo "[KO]"
fi
echo -n "test2: " && diff sample2.txt sample2_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "[OK]"
else
	echo "[KO]"
fi
echo -n "test3: " && diff sample3.txt sample3_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "[OK]"
else
	echo "[KO]"
fi
echo -n "test4: " && diff sample4.txt sample4_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "[OK]"
else
	echo "[KO]"
fi
echo -n "test5: " && diff sample5.txt sample5_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "[OK]"
else
	echo "[KO]"
fi
echo -n "test6: " && diff sample6.txt sample6_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "[OK]"
else
	echo "[KO]"
fi