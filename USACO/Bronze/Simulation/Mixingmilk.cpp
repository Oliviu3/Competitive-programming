#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("mixmilk.in");
ofstream fout("mixmilk.out");
int main()
{
   int m[3],c[3];
      fin>>c[0]>>m[0]>>c[1]>>m[1]>>c[2]>>m[2];
    for(int i=0;i<100;i++)
    {
        m[(i+1)%3]=m[i%3]+m[(i+1)%3];
        m[i%3]=0;
        if(m[(i+1)%3]>c[(i+1)%3])
        {
            m[i%3]=m[(i+1)%3]-c[(i+1)%3];
            m[(i+1)%3]=c[(i+1)%3];
        }
    }
    fout<<m[0]<<endl<<m[1]<<endl<<m[2];
}
