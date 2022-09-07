from mpi4py import MPI 
import numpy as np
my_rank = MPI.COMM_WORLD.Get_rank()
comm_size = MPI.COMM_WORLD.Get_size()

print('Number of ranks {}, rank {}'.format(comm_size,my_rank))
N_points=1000000

data = np.random.rand(N_points)


N_bins = 1000
histo,_=np.histogram(data,bins=N_bins)

result = None

if my_rank==0:
	result =  np.zeros(N_bins) 

result=MPI.COMM_WORLD.reduce(histo,op = MPI.SUM,root = 0)

if my_rank==0:
	print(result/comm_size)
	print(len(histo),len(result))

