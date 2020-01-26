#include<bits/stdc++.h>
using namespace std;
#define N 4
void getCofactor(int mat[N][N], int temp[N][N], int p, int q, int n) 
{ 
	int i = 0, j = 0; 
	for (int row = 0; row < n; row++) 
	{ 
		for (int col = 0; col < n; col++) 
		{ 
			
			if (row != p && col != q) 
			{ 
				temp[i][j++] = mat[row][col]; 
				if (j == n - 1) 
				{ 
					j = 0; 
					i++; 
				} 
			} 
		} 
	} 
} 
int determinantOfMatrix(int mat[N][N], int n) 
{ 
    int D = 0; 
    if (n == 1) 
        return mat[0][0]; 
  
    int temp[N][N]; 
  
    int sign = 1;  
    for (int f = 0; f < n; f++) 
    { 
        
        getCofactor(mat, temp, 0, f, n); 
        D += sign * mat[0][f] * determinantOfMatrix(temp, n - 1); 
        sign = -sign; 
    } 
  
    return D; 
} 
void adjoint(int A[N][N],int adj[N][N]) 
{ 
    if (N == 1) 
    { 
        adj[0][0] = 1; 
        return; 
    } 
  
    
    int sign = 1, temp[N][N]; 
  
    for (int i=0; i<N; i++) 
    { 
        for (int j=0; j<N; j++) 
        { 
          
            getCofactor(A, temp, i, j, N); 
  
         
            sign = ((i+j)%2==0)? 1: -1; 
  
          
            adj[j][i] = (sign)*(determinantOfMatrix(temp, N-1)); 
        } 
    } 
} 
  

bool inverse(int A[N][N], float inverse[N][N]) 
{ 
    
    int det = determinantOfMatrix(A, N); 
    if (det == 0) 
    { 
        cout << "Singular matrix, can't find its inverse"; 
        return false; 
    } 

    int adj[N][N]; 
    adjoint(A, adj); 
   
    for (int i=0; i<N; i++) 
        for (int j=0; j<N; j++) 
            inverse[i][j] = adj[i][j]/float(det); 
  
    return true; 
} 
void transpose(int A[][N], int B[][N]) 
{ 
    int i, j; 
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++) 
            B[i][j] = A[j][i]; 
} 
  template<class T> 
void display(T mat[N][N]) 
{ 
    for (int i=0; i<N; i++) 
    { 
        for (int j=0; j<N; j++) 
            cout << mat[i][j] << " "; 
        cout << endl; 
    } 
} 
int main()
{
	
	int mat[N][N];
	for(int i=0;i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			cin>>mat[i][j];
		}
	}
	cout << "Input matrix is :\n"; 
    display(mat); 
	cout<<"Determinant of Matrix is: "<<determinantOfMatrix(mat, N)<<endl;
	 int adj[N][N];  
    float inv[N][N]; 
  
    
  
    cout << "\nThe Adjoint is :\n"; 
    adjoint(mat, adj); 
    display(adj); 
  
    cout << "\nThe Inverse is :\n"; 
    if (inverse(mat, inv)) 
        display(inv); 
  cout<<"\nThe Transpose of Matrix is:\n";
  int B[N][N]; 
  
    transpose(mat, B); 
    display(B);
    return 0; 

}
