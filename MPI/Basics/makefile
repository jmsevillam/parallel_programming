CC=/sw/linux/mpi/gcc/openmpi/bin/mpic++
CC_RUN=/sw/linux/mpi/gcc/openmpi/bin/mpirun
target:
	${CC} -O3 --fast-math first.cpp -o first.out
	${CC} -O3 --fast-math vector_basic.cpp -o vector.out
run:
	${CC_RUN} -np 8 ./vector.out
first:
	${CC_RUN} -np 8 ./first.out
clean:
	rm *.out
