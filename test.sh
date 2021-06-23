gcc -Wall -Wextra -Werror -g -D BUFFER_SIZE="$1" get_next_line.c get_next_line_utils.c main.c && \
./a.out 1 && ./a.out 2 && ./a.out 3 && ./a.out 4 && ./a.out 5 && ./a.out 6 && ./a.out 7 && \
diff sample1.txt sample1_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "test1:[OK]"
else
	echo "test1:[KO]"
fi
diff sample2.txt sample2_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "test2:[OK]"
else
	echo "test2:[KO]"
fi
diff sample3.txt sample3_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "test3:[OK]"
else
	echo "test3:[KO]"
fi
diff sample4.txt sample4_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "test4:[OK]"
else
	echo "test4[KO]"
fi
diff sample5.txt sample5_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "test5:[OK]"
else
	echo "test5:[KO]"
fi
diff sample6.txt sample6_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "test6:[OK]"
else
	echo "test6:[KO]"
fi
diff sample7.txt sample7_ans.txt > /dev/null 2> /dev/null;
if [ $? = 0 ]; then
	echo "test7:[OK]"
else
	echo "test7:[KO]"
fi