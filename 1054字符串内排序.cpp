/*��Ŀ����
����һ���ַ���������С�ڵ���200��Ȼ��������ַ�˳�������������ַ�����
��������:
���������ж��飬�����ַ�����
�������:
����ÿ������,��������Ľ����

ʾ��1
����
bacd
���
abcd
*/

#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

int main(){
    char buf[201];
    while(gets(buf)){
        int l=strlen(buf);
        sort(buf,buf+l);
            printf("%s\n",buf);
    }
    return 0;
}
