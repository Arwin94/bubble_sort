#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	int a[10];
	cout<<"Enter the number of elements ";
	cin>>n;
	cout<<" Enter elements ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"elements are ";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i]<<"  ";
	}
	
    cout<<endl;
  
  for(int k=0;k<n-1;k++)
  {
  	 cout<<"Pass "<<k+1<<endl;
   		for(int i=0;i<n-k-1;i++)
		{
			if(a[i]>a[i+1])
			{
				int temp;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
	
		   
		    for(int i=0;i<n;i++)
      	   {
	         	cout<<" "<<a[i]<<"  ";
	        }
	        cout<<endl;
	       
		}
    }
    cout<<endl;
    cout<<"sorted list is  ";
    for(int i=0;i<n;i++)
    {
	    cout<<" "<<a[i]<<"  ";
	}
	cout<<endl;
	       

	
  return(0);	
}

