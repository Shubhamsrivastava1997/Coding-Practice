#include <iostream>
using namespace std;

int fun(int n)
{
    if(n==0)
    return 0;
    fun(n-1);
    cout<<n<<" ";
    return 0;
}

int main() {
    int T,n;
	cin>>T;
	while(T--)
	{
	    cin>>n;
	    fun(n);
	    cout<<endl;
	}
	return 0;
}