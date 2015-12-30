#include"iostream"
#include"merger.h"
using namespace std;
int main()
{
   int a[20]={2,4,1,5,3,6,7,5,9,8,0,3,4,5,6,7,11,23,45,67};
   int b[4]={2,5,1,4};
   int n=20;
   int m=4;
   int count=0;
   MergeSort(a,n);
   MergeSort(b,m);
  // array_common(a,n,b,m,count);
   for(int i=0;i<n;i++)
   {
	   cout<<"a[]:"<<a[i]<<"   ";
   }
   cout<<endl;
   for(int i=0;i<m;i++)
   {
	   cout<<"b[]:"<<b[i]<<"   ";
   }
   array_common(a,n,b,m,count);
   for(int i=0;i<=count+3;i++)
   {
	   cout<<"a[count]:"<<a[i]<<"   ";
   }
   return 0;
}		
