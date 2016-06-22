all:
	flex expr.l
	bison expr.y -d
	gcc expr.c expr.tab.c com.c -o exe
	./exe