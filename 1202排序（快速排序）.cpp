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
1 2 3 4 
*/ 

#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int buf[100];
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%d",&buf[i]);
        }
        sort(buf,buf+n);
        for(int i=0;i<n;i++){
            printf("%d ",buf[i]);
        }
        printf("\n");
    }
    return 0;
}
