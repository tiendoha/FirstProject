#include<iostream>
using namespace std;
void nhapmang(int a[], int n)
{
	cin>>n;
	for(int i=0; i < n; i++)
	{
		cin>>a[i];
	}
}
void xuatmang(int a[], int n)
{
	for(int i=0; i < n; i++)
	{
		cout<< a[i] <<" " ;
		cout<<endl;
	}
}
int main()
{
	int a[100], n;
	nhapmang(a, n);
	xuatmang(a, n);
	return 0;
}
