#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    string p1,p2; int n1,n2,a[11][11],i,j,r,x,y;
	cout<<"***********Welcome to the game of Tic-Tac-Toe***************"<<endl;
    cout<<">>>>>The players have to submit their names and their desired digit (Enter first , Play First) <<<<<<<<"<<endl;
    cout<<"Player 1: ";
    cin>>p1;
    cout<<" Your digit: ";
    cin>>n1; //cout<<endl;
    cout<<"Player 2: ";
    cin>>p2;
    cout<<" Your digit: ";
    cin>>n2; //cout<<endl;
    cin>>n;
    r=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>x>>y;
            if(r%2!=0) a[x][y]=n1;
            else a[x][y]=n2;
            sumr=0,sumc=0;
            for(c=1;c<=n;c++){
                for(b=1;b<=n;b++){
                    sumr+=a[c][b];
                    sumc+=a[b][c];
                }
                if(sumr==0||sumc==){ cout<<"Winner : "<<p1; return 0;}
                if(sumr==n){ cout<<"Winner : "<<p2; return 0;}
            }
            for(b=1;b<=n;b++)
        }
    }

	return 0;
}
