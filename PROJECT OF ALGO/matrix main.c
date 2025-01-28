#include <stdio.h>
#include <stdbool.h>





void initializeMatrix(int rows, int cols, int matrix[rows][cols], int value) {
   int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            matrix[i][j] = value;
        }
    }
}

void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
   int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
   int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    int i,j;
	for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]) {
  int i,j,k;
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void scalarMultiplication(int rows, int cols, int matrix[rows][cols], int scalar, int result[rows][cols]) {
   int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrix[i][j] * scalar;
        }
    }
}


//Check if Square Matrix 
bool isSquareMatrix(int rows, int cols){
  bool square= false;
  if (rows==cols){
    square=true;
  }return square;
}

	//Check if Identity Matrix
                  bool isIdentityMatrix(int size, int matrix[size][size]){
                  int i,j;
                   for ( i = 0; i < size; i++) {
                     for ( j = 0; j < size; j++) {
                     if (i == j && matrix[i][j] != 1) {
                         return false; // Diagonal elements should be 1
            }
            if (i != j && matrix[i][j] != 0) {
                return false; // Non-diagonal elements should be 0
            }
        }
    }
    return true;
}

//Check if Diagonal Matrix 
bool isDiagonalMatrix(int size, int matrix[size][size]){
  int i,j;
for ( i = 0; i < size; i++) {
      for ( j = 0; j < size; j++){ 
        if (i != j && matrix[i][j] != 0) {
             return false; // Non-diagonal elements should be 0
    }
 }
      return true;
 
}
}

bool isSymmetricMatrix(int size, int matrix[size][size]) {
   int i,j;
    for ( i = 0; i < size; i++) {           
        for ( j = i + 1; j < size; j++) {    // Loop above the diagonal to avoid repitition
            if (matrix[i][j] != matrix[j][i]) { // Check if the element at (i, j) is equal to (j, i)
                return false;                  // If not, return false (matrix is not symmetric)
            }
        }
    }
    return true; // If all corresponding elements are equal, matrix is symmetric
}


//Check if Upper Triangular Matrix
bool isUpperTriangular(int size, int matrix[size][size]){
  int i,j;
    for ( i = 1; i < size; i++) {  // Start from row 1 as row 0 has no elements below the diagonal
        for ( j = 0; j <= i-1; j++) { // Loop through elements below the diagonal (where i > j)
            if (matrix[i][j] != 0) {   // If any element below the diagonal is not zero
                return false;          // The matrix is not upper triangular
            }
        }
    }
    return true;  // If no elements below the diagonal are non-zero, the matrix is upper triangular
}


void transposeMatrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]){//the rows become columns and vice versa.
int i,j;
    for ( i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
         
            result[j][i] = matrix[i][j];
        }
    }
}


int traceMatrix(int size, int matrix[size][size]) {
    int trace = 0,i;
    for ( i = 0; i < size; i++) { //the fiagnoal elements induxs has same number
        trace += matrix[i][i]; // the sum of diagonal elements
    }
    return trace;
}








int main() {
    int choice2, rows,scalar,s,size,cols2, cols, value, num,rows2;
    int matrix[100][100], mat1[100][100], mat2[100][100], result[100][100];
    
    printf("******************* TEST THE MATRIX FUNCTIONS ***************************\n");
    printf("Choose which kind of matrix functions you want to test.\n");
    printf("Choose '1' if you want to test : Basic Matrix Functions. \n");
    printf("Choose '2' if you want to test : Matrix Arithmetic. \n");
    printf("Choose '3' if you want to test : Matrix Properties and Checks. \n");
    printf("Choose '4' if you want to test : Matrix Operations. \n");
    printf("Choose '5' if you want to test : Advanced Matrix Functions. \n");
    printf("Choose '6' if you want to test : Special Matrix Operations. \n");
    printf("Enter your choice: ");
    scanf("%d", &choice2);

    switch(choice2) {
        case 1:  // Basic Matrix Functions
            printf("What functions do you want to try?\n");
            printf("1_Initialize Matrix\n");
            printf("2_Print Matrix\n");
            printf("3_Input Matrix\n");
            printf("Enter your choice: ");
            scanf("%d", &num);

            switch(num) {
                case 1:  // Initialize Matrix
                    do {
                        printf("Enter the number of cols: ");
                        scanf("%d", &cols);
                        printf("Enter the number of rows: ");
                        scanf("%d", &rows);
                        if(rows < 0 || cols < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(rows < 0 || cols < 0);
                    printf("Enter the value to initialize: ");
                    scanf("%d", &value);
                    initializeMatrix(rows, cols, matrix, value);
                    printf("Matrix after initialization:\n");
                    printMatrix(rows, cols, matrix);
                    break;

                case 2:  // Print Matrix
                    do {
                        printf("Enter the number of cols: ");
                        scanf("%d", &cols);
                        printf("Enter the number of rows: ");
                        scanf("%d", &rows);
                        if(rows < 0 || cols < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(rows < 0 || cols < 0);
                    inputMatrix(rows, cols, matrix);
                    printMatrix(rows, cols, matrix);
                    break;

                case 3:  // Input Matrix
                    do {
                        printf("Enter the number of cols: ");
                        scanf("%d", &cols);
                        printf("Enter the number of rows: ");
                        scanf("%d", &rows);
                        if(rows < 0 || cols < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(rows < 0 || cols < 0);
                    inputMatrix(rows, cols, matrix);
                    printf("Matrix after initialization:\n");
                    printMatrix(rows, cols, matrix);
                    break;

                default:
                    printf("Invalid choice!\n");
            }
            break;

        case 2:  // Matrix Arithmetic
            printf("What functions do you want to try?\n");
            printf("1_Matrix Addition\n");
            printf("2_Matrix Subtraction\n");
            printf("3_Matrix Multiplication\n");
            printf("4_Scalar Multiplication\n");
            printf("Enter your choice: ");
            scanf("%d", &num);

            switch(num) {
                case 1:  // Matrix Addition
                    do {
                        printf("Enter the number of cols: ");
                        scanf("%d", &cols);
                        printf("Enter the number of rows: ");
                        scanf("%d", &rows);
                        if(rows < 0 || cols < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(rows < 0 || cols < 0);
                    inputMatrix(rows, cols, mat1);
                    inputMatrix(rows, cols, mat2);
                    addMatrices(rows, cols, mat1, mat2, result);
                    printMatrix(rows, cols, result);
                    break;

                case 3:  // Matrix Multiplication
                    do {
                        printf("Enter the number of cols for mat1: ");
                        scanf("%d", &cols);
                        printf("Enter the number of rows for mat1: ");
                        scanf("%d", &rows);
                        if(rows < 0 || cols < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(rows < 0 || cols < 0);
                
                    printf("Enter the number of cols for mat2: ");
                    scanf("%d", &cols2);
                    printf("Enter the number of rows for mat2: ");
                    scanf("%d", &rows2);
                    inputMatrix(rows, cols, mat2);

                    multiplyMatrices(rows, cols, mat1, rows, cols, mat2, result);
                    printMatrix(rows, cols, result);
                    break;

                case 4:  // Scalar Multiplication
                    do {
                        printf("Enter the number of cols: ");
                        scanf("%d", &cols);
                        printf("Enter the number of rows: ");
                        scanf("%d", &rows);
                        if(rows < 0 || cols < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(rows < 0 || cols < 0);
                    printf("Enter the scalar value: ");
                    scanf("%d", &scalar);
                    scalarMultiplication(rows, cols, mat1, scalar, result);
                    printMatrix(rows, cols, result);
                    break;

                default:
                    printf("Invalid choice!\n");
            }
            break;
        case 3:
          	printf("What functions do you want to try?\n");
            printf("1_Check if Square Matrix\n");
            printf("2_Check if Identity Matrix\n");
            printf("3_Check if Diagonal Matrix\n");
            printf("4_Check if Symmetric Matrix\n");
            printf("5_Check if Upper Triangular Matrix\n");
            printf("Enter your choice: ");
            scanf("%d", &num);
		 
            switch(num) {
            	case 1:
            		      
            	do {
                        printf("Enter the number of cols: ");
                        scanf("%d", &cols);
                        printf("Enter the number of rows: ");
                        scanf("%d", &rows);
                        if(rows < 0 || cols < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(rows < 0 || cols < 0);
						      
            		      inputMatrix(rows, cols, matrix);
                          printMatrix(rows, cols, matrix);
            		      if(isSquareMatrix(rows, cols)){
            		      	printf("the matrix is a square");
						  }else{ printf("the matrix is not a square");
						  }
            		     	break;
            		     	
            		     	
            	case 2:
            	
            	do {
                        printf("Enter the size of the squere matrix : ");
                        scanf("%d", &size);
                        if(size < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(size< 0);
                     inputMatrix(size, size, matrix);
                     printMatrix(size, size, matrix);
                     if(isIdentityMatrix(size, matrix)){
                     	printf("Its an identity matrix !");
					 } else {
					 	printf("Its not an identity matrix !");
					 }
            		break;
            		
            			
            	case 3:
				do {
                        printf("Enter the size of the squere matrix : ");
                        scanf("%d", &size);
                        if(size < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(size< 0);
                     inputMatrix(size, size, matrix);
                     printMatrix(size, size, matrix);
                     if(isDiagonalMatrix(size, matrix)){
                     	printf("Its a diagonal matrix !");
					 } else {
					 	printf("Its not a diagnoal matrix !");
					 } 
			        break;
			        
			        
			        
			        
				case 4:
				   	do {
                        printf("Enter the size of the squere matrix : ");
                        scanf("%d", &size);
                        if(size < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(size< 0);
                     inputMatrix(size, size, matrix);
                     printMatrix(size, size, matrix);
                     if(isSymmetricMatrix(size, matrix)){
                     	printf("Its a symmetric matrix !");
					 } else {
					 	printf("Its not a symmtric matrix !");
					 } 
					break;
					
					
					
					
					
					
					
            	case 5:
            			do {
                        printf("Enter the size of the squere matrix : ");
                        scanf("%d", &size);
                        if(size < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(size< 0);
                     inputMatrix(size, size, matrix);
                     printMatrix(size, size, matrix);
                     if(isUpperTriangular(size, matrix)){
                     	printf("Its a upper triangular matrix !");
					 } else {
					 	printf("Its not a upper triangular matrix !");
					 }   
            		break;
            		
            		
            		
   	
            		
            	default:
            	printf("Invalid choice!!!");
				}
			break;	
        case 4:
        	printf("What functions do you want to try?\n");
            printf("1_Transpose Matrix\n");
            printf("2_Determinant of a Matrix\n");
            printf("3_Inverse of a Matrix\n");
            printf("4_Matrix Power\n");
            printf("Enter your choice: ");
            scanf("%d", &num);
            
            switch(num){
            	case 1:
            			do {
                        printf("Enter the number of cols: ");
                        scanf("%d", &cols);
                        printf("Enter the number of rows: ");
                        scanf("%d", &rows);
                        if(rows < 0 || cols < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(rows < 0 || cols < 0);
						      
            		      inputMatrix(rows, cols, matrix);
                          printMatrix(rows, cols, matrix);
                          transposeMatrix(rows, cols, matrix, result);
                          printf("Here is the transpose matrix :\n");
                          printMatrix(rows, cols, result);
                          	break;
                          	
                          	
                          	
                          	
            	case 2:
            		printf("its hard pls its hard !");
            		break;
            	case 3:
            		printf("its hard pls its hard !");
            		break;
            	case 4:
            	
				
				
				
				
				
				
					
            		break;
            	default:
            		printf("Invalid choice !!!");
		        	}
		        break;
		case 5:
			printf("What functions do you want to try?\n");
            printf("1_Cofactor Matrix\n");
            printf("2_Adjoint Matrix\n");
            printf("3_LU Decomposition\n");
            printf("4_Matrix Rank\n");
            printf("Enter your choice: ");
            scanf("%d", &num);
            
            switch(num){
            	case 1:
            		printf("its hard !");
            		break;
            	case 2:
            		printf("its hard !");
            		break;
            	case 3:
            		printf("its hard !");
            		break;
            	case 4:
            		printf("its hard !");
            		break;
            	default:
            		printf("Invalid choice!!!");
		        	}
		      	break;
		case 6:
            printf("What functions do you want to try?\n");
            printf("1_Find Trace of a Matrix\n");
            printf("2_Rotate Matrix 90 Degrees\n");
            printf("3_Find Eigenvalues\n");
            printf("Enter your choice: ");
            scanf("%d", &num);	
			
			switch(num){
				case 1:
					printf("its hard !");
					break;
				case 2:	
					do {
                        printf("Enter the size of the squere matrix : ");
                        scanf("%d", &size);
                        if(size < 0) {
                            printf("Invalid dimensions! Try again.\n");
                        }
                    } while(size< 0);
                     inputMatrix(size, size, matrix);
                     printMatrix(size, size, matrix);
					s=traceMatrix( size, matrix);
					 printf("the sum of diagnoal elements is :%d", s);
					break;
				case 3:
					printf("its hard !");
					break;
				default:
				    printf("Invalid choice!!!");
				     	}	
            	default:
		     printf("Invalid choice!!!");		
            				
			}
		 
	   return 0;
}
	   
    

 

