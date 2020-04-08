#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,i,j;
	    cin>>n;
	    int mat[n][n];
	    for(i=0;i<n;i++)
	        for(j=0;j<n;j++)
	            cin>>mat[i][j];
	    for(int k=0;k<2;k++)
	    {
	        
		    for(i=0;i<n;i++)
		    {
		       	    for(j=i+1;j<n;j++)
	                    {
				    int temp=mat[i][j];
				    mat[i][j]=mat[j][i];
				    mat[j][i]=temp;
			    }
		    }
		    
		    for(j=0;j<n;j++)
	       		 {
	        	    int low=0,high=n-1;
	       		     while(low<high)
	           		 {
	               		  int temp=mat[low][j];
				    mat[low][j]=mat[high][j];
				    mat[high][j]=temp;
	              		    low++,high--;
	          		  }
	       		 }
	   
	    }
	        for(i=0;i<n;i++)
	       {
	           for(j=0;j<n;j++)
	            cout<<mat[i][j]<<" ";
	            cout<<endl;
	       }
	
	}   
	return 0;
}
