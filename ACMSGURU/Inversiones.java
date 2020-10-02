import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Inversiones {

    static long ans = 0;
    static Scanner in = new Scanner(System.in); 

    public static void main(String[] args) {
        int n = in.nextInt();
        long ar[] = new long[n+1];
        for(int i = 1; i < n + 1; ++i) {
            ar[i] = in.nextLong();
            for(int j = i + 1; i < n + 1; ++j)
                if(i < j && ar[i] > ar[j])
                    ans++;
        }
            //ar[i] = in.nextLong();
        //for(int i = 1; i < n; ++i) {
            //for(int j = i + 1; j < n + 1; ++j) {
                //if(i < j && ar[i] > ar[j])
                    //ans++;
            //}
        //}
        out.println(ans);
    }
}
#include <bits/stdc++.h>
 
#define inf 0x3f3f3f3f
#define Inf 0x3FFFFFFFFFFFFFFFLL
#define eps 1e-9
#define pi acos(-1.0)
 
using namespace std;
 
typedef long long ll;
const int maxn=70000+10;
int num[maxn],tmp[maxn];
ll MergeSort(int s,int t) {
    if(s==t) return 0;
    ll sum=0;
    int m=(s+t)>>1;
    sum+=MergeSort(s,m);
    sum+=MergeSort(m+1,t);
    int i,k=m+1;
    for(i=s;i<=m;++i)
    {
        while(k<t&&num[i]>num[k]) k++;
        sum+=(k-(m+1))+(num[i]>num[k]?1:0);
    }
    i=0;
    int l=s,r=m+1;
    while(l<=m&&r<=t)
    {
        if(num[l]<num[r]) tmp[i++]=num[l++];
        else tmp[i++]=num[r++];
    }
    while(l<=m) tmp[i++]=num[l++];
    while(r<=m) tmp[i++]=num[r++];
    for(int j=0;j<i;++j) num[s+j]=tmp[j];
    return sum;
}
int main() {
 
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
      scanf("%d",&num[i]);
    ll ans=MergeSort(1,n);
    printf("%lld\n",ans);
    return 0;
}
