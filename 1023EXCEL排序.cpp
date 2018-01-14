/*��Ŀ������
    Excel���Զ�һ���¼������ָ���������������д����ʵ�����ƹ��ܡ�
    ��ÿ�������������������1�С�Case i:�������� i �ǲ��������ı�ţ���1��ʼ��������� N ���������Ҫ�������Ľ���������� C=1 ʱ����ѧ�ŵ������򣻵� C=2ʱ���������ķǵݼ��ֵ������򣻵� C=3 
ʱ�����ɼ��ķǵݼ����򡣵�����ѧ��������ͬ����������ͬ�ɼ�ʱ�������ǵ�ѧ�ŵ�������
���룺
    ��������������ɲ���������ÿ�����������ĵ�1�а����������� N (N<=100000) �� C������ N �Ǽ�¼��������C ��ָ��������кš�������N�У�ÿ�а���һ��ѧ����¼��ÿ��ѧ����¼��ѧ�ţ�6λ���֣�ͬ�������û���ظ���ѧ�ţ���������������8λ�Ҳ������ո���ַ��������ɼ���������[0, 100]�ڵ���������ɣ�ÿ����Ŀ����1���ո������������ N=0 ʱ��ȫ�������������Ӧ�Ľ����Ҫ�����
�����
    ��ÿ�������������������1�С�Case i:�������� i �ǲ��������ı�ţ���1��ʼ��������� N ���������Ҫ�������Ľ���������� C=1 ʱ����ѧ�ŵ������򣻵� C=2ʱ���������ķǵݼ��ֵ������򣻵� C=3 
ʱ�����ɼ��ķǵݼ����򡣵�����ѧ��������ͬ����������ͬ�ɼ�ʱ�������ǵ�ѧ�ŵ�������

�������룺
3 1
000007 James 85
000010 Amy 90
000001 Zoe 60
4 2
000007 James 85
000010 Amy 90
000001 Zoe 60
000002 James 98
4 3
000007 James 85
000010 Amy 90
000001 Zoe 60
000002 James 90
0 0
���������
Case 1:
000001 Zoe 60
000007 James 85
000010 Amy 90
Case 2:
000010 Amy 90
000002 James 98
000007 James 85
000001 Zoe 60
Case 3:
000001 Zoe 60
000007 James 85
000002 James 90
000010 Amy 90
*/ 

#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

struct E{
    int id;
    char name[9];
    int score;
}; 

bool cmp1(E a,E b){
    return a.id<b.id;
}
bool cmp2(E a,E b){
    int tmp=strcmp(a.name,b.name);
    if(tmp!=0) return tmp<0;
    else return a.id<b.id;
}
bool cmp3(E a,E b){
    if(a.score!=b.score) return a.score<b.score;
    else return a.id<b.id;
    }

int main(){
    int n,c;
    int Case=1;
    while(scanf("%d",&n)!=EOF){
        if(n==0) break;
        scanf("%d",&c);
        E *buf=new E[n];
        for(int i=0;i<n;i++){
            scanf("%d%s%d",&buf[i].id,&buf[i].name,&buf[i].score);
        }
        switch(c){
            case 1:sort(buf,buf+n,cmp1);break;
            case 2:sort(buf,buf+n,cmp2);break;
            case 3:sort(buf,buf+n,cmp3);break;
        }
        printf("Case %d:\n",Case++);
        for(int i=0;i<n;i++){
            printf("%06d %s %d\n",buf[i].id,buf[i].name,buf[i].score);
        }
    }
    return 0;
}
