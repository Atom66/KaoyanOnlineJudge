/*
��Ŀ����: 
�����������������Ͷ���ķǸ�10��������A��B(<=231-1)�����A+B��m (1 < m <10)��������
��������:
�����ʽ����������������ɲ���������ÿ����������ռһ�У�����m��A��B��ֵ��
��mΪ0ʱ���������
�������:
�����ʽ��ÿ���������������ռһ�У����A+B��m��������

����
8 1300 48
2 1 7
0
���
2504
1000
*/

#include <stdio.h>
int main(){
    long long a,b;
    int m;
    while(scanf("%d",&m)!=EOF){
        if(m==0) break;
        scanf("%lld%lld",&a,&b);
        a=a+b;
        int ans[50],size=0;
        do{
            ans[size++]=a%m;
            a/=m;
        }while(a!=0);
        for(int i=size-1;i>=0;i--){
            printf("%d",ans[i]);
        }
        printf("\n");
    }
    return 0;
}
