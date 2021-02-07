/*Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.

Output
For each test case, display the second largest among A, B and C, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B,C ≤ 1000000
Example
Input
3 
120 11 400
10213 312 10
10 3 450

Output

120
312
10

My solution: */
#include <iostream>
using namespace std;


int main() {
	// your code goes here
	
	int t,a[3];
	cin>>t;
	while(t--){
	    for(int i=0;i<3;i++)
	    {
	        cin>>a[i];
	    }
	   int sl=-1,l=0;
	   for(int i=1;i<3;i++)
	   {
	       if(a[i]>a[l])
	       {
	           sl=l;
	           l=i;
	       }
	       else if(a[i]!=a[l])
	       {
	           if(sl==-1||a[i]>a[sl])
	           {
	               sl=i;
	           }
	       }
	       
	       
	   }
	   cout<<a[sl]<<endl;
	   
	   
	}
	return 0;
}


