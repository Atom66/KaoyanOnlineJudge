/*
��Ŀ����:
�������鳤�� n ��������      a[1...n] ������Ҹ���m �����������b[1...m]   ��� YES or NO  ��������YES ����NO ��
��������:
�����ж������ݡ�
ÿ������n��Ȼ������n��������������m��Ȼ��������m��������1<=m,n<=100����
�������:
�����n�����������YES�������NO��

����
5
1 5 2 4 3
3
2 5 6
���
YES
YES
NO
*/

#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int m,n; 
    int a[102];
    int b[102];
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        scanf("%d",&m);
        for(int i=1;i<=m;i++){
            scanf("%d",&b[i]);
        }
        for(int i=1;i<=m;i++){
            bool YES=0;
            int base=0,top=n-1;
			while(base<=top){
			    int mid=(base+top)/2;
			    if(a[mid]==b[i]){
			    	printf("YES\n");
                    YES=1;
                    break;
				}
				else if(a[mid]>b[i]) top=mid-1;
				else base=mid+1;
			}
			if(YES==0) printf("NO\n");
        }
    }
    return 0;
}
