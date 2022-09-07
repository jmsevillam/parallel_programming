#include <cstdlib>
#include <iostream>
#include <cmath>
#include <mpi.h>

int main(int argc, char *argv[]) {
  
  int my_rank;
  int ierr;
  int comm_size;
  
  ierr = MPI_Init ( &argc, &argv );
  ierr = MPI_Comm_size ( MPI_COMM_WORLD, &comm_size );
  ierr = MPI_Comm_rank ( MPI_COMM_WORLD, &my_rank );

    std::cout << "My rank is "<<my_rank<<std::endl;  
  MPI_Finalize();
  
  return 0;
}
