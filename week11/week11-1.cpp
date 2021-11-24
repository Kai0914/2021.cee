///week11-1 step01-1
#include <stdio.h>
int a[10000000]={};
int main()
{
	int x;
	scanf("%d",&x);
	for(int i=2;i<x;i++){
		if(a[i]==0){
			printf("%d ",i);
			for(int k=i+i;k<x;k=k+i){
				a[k]=1;
			}
		}
	}
	///printf("%d\n",ans);
}
