#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("shell.in");
ofstream fout("shell.out");
int main()
{
    int n,a,b,g,c1=0,c2=0,c3=0,c=0,z[3]={0},y[3]={0},x[3]={0};
    fin>>n;
     z[0]=1;
        y[1]=1;
        x[2]=1;
    for(int i=0;i<n;i++)
    {
        fin>>a>>b>>g;
        swap(z[a-1],z[b-1]);
        if(z[g-1]==1)
            c1++;

        swap(y[a-1],y[b-1]);
        if(y[g-1]==1)
            c2++;

        swap(x[a-1],x[b-1]);
        if(x[g-1]==1)
            c3++;
    }
    c=max(c1,c2);
    c=max(c,c3);
    fout<<c;
}
