#include <cstdlib>
#include <iostream>
#include <cmath>
#include <mpi.h>

void ones(double* x, const int size);

int main(int argc, char *argv[]) {

    int N_points = 100; 

    int my_rank;
    int ierr;
    int comm_size;

    ierr = MPI_Init ( &argc, &argv );
    ierr = MPI_Comm_size ( MPI_COMM_WORLD, &comm_size );
    ierr = MPI_Comm_rank ( MPI_COMM_WORLD, &my_rank );

    double* x;
    x= (double *) malloc(N_points*sizeof(double));

    std::cout<<my_rank<<' '<<x[1]<<std::endl;
    ones(x,N_points);
    std::cout<<my_rank<<' '<<x[1]<<std::endl;

    double* result;
    result= (double *) malloc(N_points*sizeof(double));

    ierr = MPI_Reduce(x,result,N_points,MPI_DOUBLE,MPI_SUM,0,MPI_COMM_WORLD);

    if (my_rank==0){
        std::cout<<my_rank<<' '<<result[1]<<std::endl;
    }
    MPI_Finalize();

    return 0;
}


void ones(double* x, const int size){
    for(int i = 0; i < size; i++){
        x[i]=1.0;
    }
}
