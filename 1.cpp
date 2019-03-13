#include <iostream>
using namespace std;
int main() {
 int a,d,n,i,nth;
 int sum=0;
 cout<<"Program to Calculate sum of A.P series \n";
 cout<<"\nEnter the first number of the series : ";
 cin>>a;
 cout<<"\nEnter the number of terms in series : ";
 cin>>n;
 cout<<"\nEnter the common difference of series : ";
 cin>>d;
 sum=(n*(2*a+(n-1)*d))/2;
 nth=a+(n-1)*d;
 cout<<"\nSum of the A.P. is :";
 for(i=a;i<=nth;i=i+d)
 {
  if(i!=nth)
  {
    cout<<i<<" + ";
  }
  else
  {
    cout<<i<<" = "<<sum;
  }
 }
}
