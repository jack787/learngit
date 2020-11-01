#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int inf= 0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
inline ll read();
//#define LOCAL
int n;
int a[N];
void quicksort(int a[],int l,int r)
{
    if(l>=r)return ;
    int i=l-1,j=r+1;
    int mid=l+r>>1;
    int t=a[mid];
    while(i<j)
    {
        do i++;while(a[i]<t);
        do j--;while(a[j]>t);
        if(i<j)swap(a[i],a[j]);

    }
    quicksort(a,l,j),quicksort(a,j+1,r);
}
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";




    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 