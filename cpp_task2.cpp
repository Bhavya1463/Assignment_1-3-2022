/* Question: Create a class called 'Matrix' containing a constructor that initialises the number of rows and the number of columns of a new Matrix object. The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)
The Matrix class has functions for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at a given position (i,j)
4 - adding two matrices.
5 - multiplying the two matrices
You can assume that the dimensions are correct for the multiplication and addition.
*/

#include<iostream>
using namespace std; 

class Matrix
{
        int m1[10][10]; 
        int m2[10][10]; 
        int m3[10][10];
        int m4[10][10];
        int  i, j, r, c ,k;

        public :
        void get_row()
        {
            cout<<"Enter the no.of rows :";
            cin>>r; 
        }
        void get_col()
        {
            cout<<"Enter the no.of columns :";
            cin>>c;
        }
        
        void setij()
        {
            cout<<"\nfirst Matrix Input:\n";
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\nmatrix1["<<i+1<<"]["<<j+1<<"]=  ";
                    cin>>m1[i][j];
                }
            }
            
            cout<<"\nsecond Matrix Input:\n";
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\nmatrix2["<<i+1<<"]["<<j+1<<"]=  ";
                    cin>>m2[i][j];
                }
            } 
            
        }
        
        void add_matrix()
        {
            //Adding Matrices
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    m3[i][j]=m1[i][j]+m2[i][j];
                }
            } 
       
            cout<<"\nAddition of the Matrix : \n";
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<" "<<m3[i][j];
                }
            cout<<endl;
            } 
            
        }
        void multiplication_matrix()
        {
            cout<<"\nmultiplication of Matrix is: \n";
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                {    
                    m4[i][j]=0;    
                    for(k=0;k<c;k++)    
                    {    
                        m4[i][j]+=m1[i][k]*m2[k][j];    
                    }    
                }    
            }    
            //for printing result    
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                {    
                    cout<<" "<<m4[i][j];
                }    
                cout<<endl;    
            }
        }
    
};




int main() 
{  
    Matrix obj1;
    obj1.get_row();
    obj1.get_col();
    obj1.setij();
    obj1.add_matrix();
    obj1.multiplication_matrix();
    
}