#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime> 
#include <algorithm>
using namespace std;

template<class T>void read(T &x)
 {
     x=0;int f=0;char ch=getchar();
     while(ch<'0'||ch>'9')  {f|=(ch=='-');ch=getchar();}
     while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}
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
