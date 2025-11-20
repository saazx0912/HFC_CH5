p220.o: p220.c
	cl -c p220.c
p220.exe: p220.obj
	cl p220.obj /link /out:p220.exe