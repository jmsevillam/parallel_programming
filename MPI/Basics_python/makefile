CC=/sw/linux/mpi/gcc/openmpi/bin/mpic++
CC_RUN=mpiexec -n 4 python
target:
	echo 'make run'
run:
	${CC_RUN} first.py
first:
	${CC_RUN} -np 8 ./first.out
clean:
	rm *.out
