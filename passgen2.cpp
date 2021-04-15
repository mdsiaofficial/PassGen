#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int i;
    char c;
    cout<<"Random passcode:\n";
    for(int j=0;j<8;j++){
       srand(time(0)+rand());
       i=rand()%62;
       if(i<10){
          c=(char)('0'+i);
       }
       else if(10<=i && i<36){
          c=(char)('a'+i-10);
       }
       else if(i>=36){
          c=(char)('A'+i-36);
       }
       cout<<c;
    }
    cout<<endl;
    return 0;
}
