/*��Ŀ������
    ��N��ѧ�������ݣ���ѧ�����ݰ��ɼ��ߵ���������ɼ���ͬ�������ַ�����ĸ�����������������ĸ��Ҳ��ͬ����ѧ�����������򣬲����N��ѧ����������Ϣ��
���룺
    ���������ж��飬ÿ�������һ����һ������N��N<=1000������������N�а���N��ѧ�������ݡ�
    ÿ��ѧ�������ݰ������������Ȳ�����100���ַ����������䣨�����������ɼ���С�ڵ���100����������
�����
    ��ѧ����Ϣ���ɼ��������򣬳ɼ���ͬ������������ĸ���������
    Ȼ�����ѧ����Ϣ���������¸�ʽ��
    ���� ���� �ɼ�

�������룺
3
abc 20 99
bcd 19 97
bed 20 97
���������
bcd 19 97
bed 20 97
abc 20 99
*/

#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

struct E{
    char name[101];
    int age;
    int score;
	
	bool operator < (const E &b) const{
    if(score!=b.score) return score<b.score;
    int tmp=strcmp(name,b.name);
    if(tmp!=0) return tmp<0;
    else return age<b.age;
    }
	 
}buf[1000];

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%s%d%d",&buf[i].name,&buf[i].age,&buf[i].score);
        }
        sort(buf,buf+n);
        for(int i=0;i<n;i++){
            printf("%s %d %d\n",buf[i].name,buf[i].age,buf[i].score);
        }
    }
    return 0;
}
