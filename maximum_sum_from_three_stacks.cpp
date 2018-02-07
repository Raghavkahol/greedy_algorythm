// C++ program to calculate maximum sum with equal 
// stack sum.
#include<bits/stdc++.h>
using namespace std;
 
// Returns maximum possible equal sum of three stacks
// with removal of top elements allowed
int maxSum(int stack1[], int stack2[], int stack3[], 
                             int n1, int n2, int n3)
{
	int i,s1,s2,s3;
	s1=0;
	s2=0;
	s3=0;
  for(i=0;i<n1;i++)
  	s1+=stack1[i];
   for(i=0;i<n2;i++)
  	s2+=stack2[i];
  	for(i=0;i<n3;i++)
  	s3+=stack3[i];
  	while(1){
  		if(s1==s2&&s2==s3)
  			return s1;
  		
  			if(n1==-1||n2==-1||n3==-1)
  				return 0;
  			if(s1>=s2&&s1>=s3){
  				s1-=stack1[n1-1];
  				n1;
			  }else if(s2>s1&&s2>s3){
			  	s2-=stack2[n2-1];
			  	n2--;
			  }else{
			  	s3-=stack3[n3-1];
			  	n3--;
			  }
		  }
}
 
// Driven Program
int main()
{
  int stack1[] = { 3, 2, 1, 1, 1 };
  int stack2[] = { 4, 3, 2 };
  int stack3[] = { 1, 1, 4, 1 };
 
  int n1 = sizeof(stack1)/sizeof(stack1[0]);
  int n2 = sizeof(stack2)/sizeof(stack2[0]);
  int n3 = sizeof(stack3)/sizeof(stack3[0]);
 
  cout << maxSum(stack1, stack2, stack3, n1, n2, n3) << endl;
  return 0;
} 
