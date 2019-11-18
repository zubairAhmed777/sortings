c:=gcc


all: sort
	@echo 'Done..'

sort:*.o
	${c} $? -o $@

%.o:%.c
	${c} -c $?

clean:
	@rm -rf *.o sort
