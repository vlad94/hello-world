#include<iostream>
#include<string.h>

using namespace std;

const int MAX = 1000;

int lakes(char* x){
int d = 0;
int volume = 0;

for(int i=0; i<strlen(x); i++){
    if(x[i] == 'd' && d>=0){
        volume += d*1000;
        d++;
    }
    else if(x[i] == 'd' && d<0){
        d++;
    }
    else if(x[i] == 'u' && d<0){
        d--;
    }
    else if(x[i] == 'u' && d>=0){
        volume += d*1000;
        d--;
    }
    else if(x[i] == 'h' && d>=0)
        volume += d*1000;


}
cout<<volume;

delete [] x;
}

int main()
{
char* x;
x = new char[MAX];
cin.getline(x,MAX);
lakes(x);

    return 0;
}
