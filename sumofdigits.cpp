#include <iostream>
using namespace std;

int main() {
    int T,N;
    cin>>T;
    for(int i=1;i<=T;i++)
    { cin>>N;
       int s=0;
      while(N>0)
      {
      int a=N%10;
      s=s+a;
      N=N/10;
      }
      cout<<s<<endl;
    }
	// your code goes here
	return 0;
}
