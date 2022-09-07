from mpi4py import MPI 
import numpy as np
my_rank = MPI.COMM_WORLD.Get_rank()
comm_size = MPI.COMM_WORLD.Get_size()

print('Number of ranks {}, rank {}'.format(comm_size,my_rank))


data = np.random.rand(10)

result = np.zeros(10) 
print(data[0])

MPI.COMM_WORLD.Reduce([data,MPI.DOUBLE],[result,MPI.DOUBLE],op = MPI.SUM,root = 0)
if my_rank==0:
	print(result)


