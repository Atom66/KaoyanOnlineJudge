/*
��Ŀ������
��һ�����������ϣ������±�Ϊi��������������������������ڵ������� ����С�����������ڵ����������Ϊ������Ϊһ����ֵ�㣬��ֵ����±����i�� 
��������:
��һ���Ǵ������Ԫ�ظ���k(4<k<80)���ڶ�����k��������ÿ��������֮���ÿո�ָ���
�������:
ÿ���������Ϊn�У�ÿ�ж�Ӧ����Ӧ��������м�ֵ���±�ֵ���±�ֵ֮���ÿո�ָ���

����
10
10 12 12 11 11 12 23 24 12 12
���
0 7
*/ 

#include <stdio.h>
int main(){
    int k,j;
    int buf[82];
    int point[82];
    while(scanf("%d",&k)!=EOF){
        if(k<=4) break;
        j=0;
        for(int i=0;i<k;i++){
            scanf("%d",&buf[i]);
        }
        for(int i=0;i<k;i++){
            int left=i-1,right=i+1;
            if(left<0 && buf[right]!=buf[i]){
                point[j++]=i;
            }
            else if(buf[left]<buf[i] && buf[right]<buf[i] || buf[left]>buf[i] && buf[right]>buf[i]){
                point[j++]=i;
            }
            else if(right>k-1 && buf[left]!=buf[i]){
                point[j++]=i;
            }
        }
        for(int i=0;i<j;i++){
        	printf("%d",point[i]);
        	if(i!=j-1)
				printf(" ");
			else
			    printf("\n");
		}
    }
    return 0;
}
