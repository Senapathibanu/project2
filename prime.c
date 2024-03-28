#include<stdio.h>
int main(){
int num=10;
for(int i=2;i<num;i++){
if(num%i==0)
{
	printf("not primr");
	return 0;
}
}
printf("its prime");
return 0;

}
