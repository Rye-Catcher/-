#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	int maxn;
	cin>>maxn;
	freopen("test.in","w",stdout);
	cout<<maxn<<endl; 
	for(int i=1;i<=maxn;i++)cout<<i<<endl;
	fclose(stdout);
	return 0;
}
