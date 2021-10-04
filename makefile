
out: main.o add.o delete.o print.o
	cc  main.c add.c delete.c print.c -o out
main.o: main.c
	cc -c main.c 
add.o: add.c
	cc -c add.c
delete.o:delete.c
	cc -c delete.c
print.o:print.c
	cc -c print.c
clean:
	rm *.o
	rm out 
