from mpi4py import MPI 

my_rank = MPI.COMM_WORLD.Get_rank()
comm_size = MPI.COMM_WORLD.Get_size()

print('Number of ranks {}, rank {}'.format(comm_size,my_rank))
