#include <iostream>

using namespace std;

void print(double a1[4][4])
{

    cout<<"       "<<"1"<<"  "<<"   "<<"2"<<"   "<<"  "<<"3"<<"   "<<"  "<<"4"<<endl;
    cout<<"      "<<"----------------------"<<endl;
    for(int i=0 ; i<4 ; i++){
            cout<<i+1<<"  |";
    for(int j=0 ; j<4 ; j++){
            if(a1[i][j]==42){
        cout<<"   "<<"*"<<"  ";
            }
            else
                cout<<"   "<<a1[i][j]<<"  ";
    }
    cout<<endl;
    }
}
bool com(double a1[4][4],double a3[4][4])
{
    for(int i=0 ; i<4 ; i++){
    for(int j=0 ; j<4 ; j++){
            if(a1[i][j]!=a3[i][j])
            {
                return false;
                break;
            }
    }
    }
    return true;
}

int main()

{int a,b,c,d;
    cout<<"       "<<"1"<<"  "<<"   "<<"2"<<"   "<<"  "<<"3"<<"   "<<"  "<<"4"<<endl;
    cout<<"      "<<"----------------------"<<endl;
    double a1[4][4]={ {'*','*','*','*'},{'*','*','*','*'},{'*','*','*','*'},{'*','*','*','*'} };
    double a2[4][4]={{1,7,6,4},{5,8,3,2},{7,6,3,2},{1,5,4,8}};
    double a3[4][4]={{1,7,6,4},{5,8,3,2},{7,6,3,2},{1,5,4,8}};

    for(int i=0 ; i<4 ; i++){
            cout<<i+1<<"  |";
    for(int j=0 ; j<4 ; j++){
            if(a1[i][j]==42)
        cout<<"   "<<"*"<<"  ";
    }
    cout<<endl;
    }

    while(true){
    cout<<"\n Enter the Row and Col Numbers For the 1st Element \n";
    cin>>a>>b;
    swap(a1[a-1][b-1],a2[a-1][b-1]);
    print(a1);
    cout<<"\n Enter the Row and Col Numbers For the 2nd Element \n";
    cin>>c>>d;
    swap(a1[c-1][d-1],a2[c-1][d-1]);
    print(a1);
    if(a1[a-1][b-1]!=a1[c-1][d-1]){
    swap(a1[a-1][b-1],a2[a-1][b-1]);
    swap(a1[c-1][d-1],a2[c-1][d-1]);
    cout<<"Elements are not the same \n";
    print(a1);
    }
    else{
        cout<<"You Are Right ! \n\n";
        print(a1);
    }
    if (com(a1,a3)){
        cout<<"\n Well Done ! ^_^ \n";
        break;
    }
    }
return 0;
}
