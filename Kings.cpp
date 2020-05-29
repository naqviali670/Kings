#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<limits>
using namespace std;

typedef struct{
	char name[20];
	int count;
}Kings;
int main()
{
	int start,end,N,M,k,count=0,j=0,dumCount=0;
	char name[20],parent[20],child[20];
	cin>>N;
	Kings kings[N];
	for(int i=0; i<N; i++)
	{
		cin>>start;
		cin>>end;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
		cin.getline(kings[i].name,20);
		kings[i].count=0;
	}
	cin>>M;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for(int i=0; i<M; i++)
	{
		cin.getline(parent,20);
		cin.getline(child,20);
		
		for(j=0; j<N; j++)
		{
		
			if(strcmp(parent,kings[j].name)==0)
			{
				if(kings[j].count!=1)
				{
					for(k=0; k<N; k++)
				{
					
					if(strcmp(child,kings[k].name)==0)
					{
						kings[j].count=1;
						
						break;
					}
				}
				if(k==N)
				{
					kings[j].count=-1;
					
				}
				}
				break;
			}
		}
		
		
	}
	for(int i=0; i<N; i++)
	{
		
		
		if(kings[i].count==-1)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
