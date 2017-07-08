#include <iostream>

using namespace std;

int main()
{
    int t,n,m,i;

    cin>>t;
    while(t>0){
        cin>>n;
        int u[n];
        int v[n];
        cin>>m;
        for(i=0;i<m;i++){
            cin>>u[i];
            cin>>v[i];
        }
        if(n%2==0){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }

        t--;
    }
    return 0;
}
