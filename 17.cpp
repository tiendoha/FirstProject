#include<iostream>
using namespace std;
int chiadetri(int a[] ,int l, int h)
{
	int i=l;
	int j=h;
	int pivot = a[l];
	while ( i < j)
	{
		do
		{
			i++;
		}
		while (a[i] <= pivot);
		do
		{
			j--;
		}
		while (a[j] > pivot);
		if(i < j)
		{
			swap(a[i], a[j]);
		}
	}
	swap(a[l], a[j]);
	return j;
}
int quicksort(int l, int h)
{
	int j, i, a;
	if(i < j)
	{
		j=chiadetri(a , l, h);
		quicksort(i, j);
		quicksort(i+1, j);
	}
}
int main()
{
	int l, h;
	cout<<quicksort(l, h);
	return 0;
}
