CC=/sw/linux/mpi/gcc/openmpi/bin/mpic++
CC_RUN=/sw/linux/mpi/gcc/openmpi/bin/mpirun
target:
	${CC} -O3 --fast-math first.cpp -o first.out
run:
	${CC_RUN} -np 8 ./first.out
first:
	${CC_RUN} -np 8 ./first.out
clean:
	rm *.out
