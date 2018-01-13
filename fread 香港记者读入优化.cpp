#include <cstdio>
#include <cstring>
#include <cstdlib> 
#include <ctime>
#include <iostream>
#include <algorithm>
#include <vector>
#define maxn 1000000

using namespace std;
inline char GET_CHAR(){
      static char buf[maxn],*p1=buf,*p2=buf;
      return p1==p2&&(p2=(p1=buf)+fread(buf,1,maxn,stdin),p1==p2)?EOF:*p1++;
}
template<class T>void read(T &x)
{
      x=0;int f=0;char ch=GET_CHAR();
      while(ch<'0'||ch>'9')  {f|=(ch=='-');ch=GET_CHAR();}
      while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=GET_CHAR();}
     x=f?-x:x;
     return;
}
int main()
{ 
	ios::sync_with_stdio(false);
	freopen("test.in","r",stdin); 
	int start = clock();  
    int n;
	read(n); 
	for(int i=1;i<=n;i++)
	{
	long long int  x;
	read(x);cout<<x<<endl;
    }
    printf("%.3lf\n",double(clock()-start)/CLOCKS_PER_SEC);  
    fclose(stdin);
	return 0;
}
