/*��Ŀ������
    �������n�������н������������
���룺
    ����ĵ�һ�а���һ������n(1<=n<=100)��
    ��������һ�а���n��������
�����
    �����ж���������ݣ�����ÿ�����ݣ���������n�����������ÿ�������涼��һ���ո�
    ÿ��������ݵĽ��ռһ�С�

�������룺
4
1 4 3 2
���������
4 3 2 1 
*/ 

#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	int n;
	int buf[100];
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&buf[i]);
		}
		sort(buf,buf+n,cmp);
		for(int i=0;i<n;i++){
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
} 
