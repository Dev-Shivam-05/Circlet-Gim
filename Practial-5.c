 #include<stdio.h>
int main (){
int i,j,k,h;
	for(i=5;i>=1;i--){
		for(k=1;k<i;k++)
		printf("  ");
		for(j=i;j<=5;j++)
			printf("%d ",j);
			for(h=4;h>=i;h--)
			printf("%d ",h);
		printf("\n");
	}	
}
