#include<stdio.h>
void fun1(int *a,int K);
void fun2(int*a,int K);
int main(){
	int K;
	scanf("%d",&K);
	int a[K];
	fun1(a,K);
	fun2(a,K); 

}
void fun1(int *a,int K){
	int i;
	for(i=0;i<K;i++){
		scanf("%d",&a[i]);
	}
}
void fun2(int *a,int K){
	int I,J,minium=a[0],maxium=a[0];
	int temp=0,max=a[0];
	for(I=0;I<K;I++){
		temp=0;
		for(J=I;J<K;J++){
			temp+=a[J];
			if(max<temp){
			max=temp;
			minium=a[I];
			maxium=a[J] ;
			}
		}
	}
//判断数列是否为负及输出 

	if(max<0){
		printf("0 %d %d",a[0],a[K-1]);
	}
	else{
		printf("%d %d %d",max,minium,maxium);
	}
} 
