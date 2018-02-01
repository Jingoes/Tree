#include<stdio.h>
int v[10]={15,98,20,30,40,6,45,60,70,10};
int l[10]={1,2,3,-1,-1,6,-1,8,-1,-1};
int r[10]={5,9,4,-1,-1,-1,7,-1,-1,-1};
void main()
{
	int root=0;
	int i,j,k,x,t;
	int sq[100];
	int s[100];
	int ll,rr,top;
	ll=0;rr=0;sq[0]=root;
	printf("\n一次输出所有叶子节点:\n");
	while(ll<=rr)
	{
		if((l[sq[l]]==-1)&&((r[sq[l])==-1))
			printf("%d",v[sq[l]]);
		x=sq[ll];ll++;
		if(l[x]!=-1)  sq[++rr]=l[x];
		if(r[x]!=-1)  sq[++rr]=r[x];
	}
	return 0;
}
