///week11-2 step02-1
#include <stdio.h>
int a[10000000]={};
int main()
{
    printf("請問你想要幾個質數? (最大的質數不超過100000000請給小一點) ");
	int x;
	scanf("%d",&x);

	int ans=0;
	for(int i=2;ans<x;i++){
		if(a[i]==0){
        ans++;
        printf("%d ",i);
        for(int k=i+i;k<10000000;k=k+i){
				a[k]=1;
			}
		}
	}
	///printf("%d\n",ans);
}
