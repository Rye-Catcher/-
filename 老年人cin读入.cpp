#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	//ios::sync_with_stdio(false);
	freopen("test.in","r",stdin); 
	int start = clock();  
    int n;
	cin>>n;//read(n); 
	for(int i=1;i<=n;i++)
	{
	long long int  x;
	cin>>x;//read(x);
	cout<<x<<endl;
    }
    printf("%.3lf\n",double(clock()-start)/CLOCKS_PER_SEC);  
    fclose(stdin);
	return 0;
}
