/*
Nama : Hafidh Akhdan N
NPM : 140810180061
Kelas : A
*/

#include <iostream>
#include <conio.h>

using namespace std;

int data[50],data2[50];
int n;

void tukar(int a, int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}
void selection_sort()
{
	int pos,i,j;
	for(i=1;i<=n-1;i++)
	{
	    pos = i;
	    for(j = i+1;j<=n;j++)
	    {
		   if(data[j] < data[pos]) pos = j;
		}
        if(pos != i) tukar(pos,i);
    }
}

int main(){
 	cout<<"Input Jumlah Data       : ";cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Input data ke-"<<i<<" : ";
		cin>>data[i];
		data2[i]=data[i];
	}
	
	selection_sort();
	cout<<"Data Setelah di Sorting : "<<endl;
	for(int i=1; i<=n; i++)
	{
	  	cout<<" "<<data[i];
	}
	
	getch();
}
