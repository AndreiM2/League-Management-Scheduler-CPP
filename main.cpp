#include <iostream>
#include <string.h>

using namespace std;
int a[100][100],v[200],i,j,n,k,clasament[100][100],copie[100][100];
char vectorechipe[100][100];

void sortare()
{
    for(int i=1;i<=n;i++)
    {
        for(j=0;j<5;j++)
        {
            copie[i][j]=clasament[i][j];
        }
    }
    int ok=0;
    while(ok!=1)
    {
        ok=1;
       for(i=1;i<n;i++)
       {
            for(j=i+1;j<=n;j++)
            {
                if(copie[i][1]<copie[j][1])
                {
                    for(int q=0;q<5;q++)
                    {
                        int aux=copie[i][q];
                        copie[i][q]=copie[j][q];
                        copie[j][q]=aux;
                    }
                }
                else if(copie[i][1]==copie[j][1] && copie[i][4]<copie[j][4])
                    {
                        for(int q=0;q<5;q++)
                        {
                            int aux=copie[i][q];
                            copie[i][q]=copie[j][q];
                            copie[j][q]=aux;
                        }
                    }
                    else if(copie[i][1]==copie[j][1] && copie[i][4]==copie[j][4] && copie[i][2]<copie[j][2])
                        {
                            for(int q=0;q<5;q++)
                            {
                                int aux=copie[i][q];
                                copie[i][q]=copie[j][q];
                                copie[j][q]=aux;
                            }
                        }
            }
        }
    }

}

void lista()
{
    cout<<"Clasament"<<endl;;
    for(int i=1;i<=n;i++)
    {
       cout<<i<<")"<<vectorechipe[copie[i][0]]<<" "<<copie[i][1]<<"pct"<<" "<<copie[i][2]<<" "<<copie[i][3]<<" "<<copie[i][4]<<endl;
    }
    cout<<endl;
}
void citireechipe()
{
    cin.get();
    for(int i=1;i<=n;i++)
    {
        char cuvant[100];
        cout<<i<<")";
        cin.getline(cuvant,25);
        strcpy(vectorechipe[i],cuvant);
    }
    cout<<endl;
}
void generarematrice()
{
    for(i=1;i<=n/2;i++)
        {
            a[1][i]=i;
        }
    int jum=n/2+1;
    for(i=n/2;i>=1;i--)
        {
            a[2][i]=jum;
            jum++;
        }
}
void afisare()
{
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=n/2;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
void rezultate1()
{
    int e1,e2;
    cin>>e1>>e2;
    clasament[a[1][j]][2]=clasament[a[1][j]][2]+e1;
    clasament[a[1][j]][3]=clasament[a[1][j]][3]+e2;
    clasament[a[2][j]][2]=clasament[a[2][j]][2]+e2;
    clasament[a[2][j]][3]=clasament[a[2][j]][3]+e1;
    clasament[a[1][j]][4]=clasament[a[1][j]][2]-clasament[a[1][j]][3];
    clasament[a[2][j]][4]=clasament[a[2][j]][2]-clasament[a[2][j]][3];

    if(e1>e2) clasament[a[1][j]][1]=clasament[a[1][j]][1]+3;
    else if(e2>e1) clasament[a[2][j]][1]=clasament[a[2][j]][1]+3;
        else
        {
           clasament[a[1][j]][1]=clasament[a[1][j]][1]+1;
           clasament[a[2][j]][1]=clasament[a[2][j]][1]+1;
        }
}
void rezultate2()
{
    int e1,e2;
    cin>>e2>>e1;
    clasament[a[1][j]][2]=clasament[a[1][j]][2]+e1;
    clasament[a[1][j]][3]=clasament[a[1][j]][3]+e2;
    clasament[a[2][j]][2]=clasament[a[2][j]][2]+e2;
    clasament[a[2][j]][3]=clasament[a[2][j]][3]+e1;
    clasament[a[1][j]][4]=clasament[a[1][j]][2]-clasament[a[1][j]][3];
    clasament[a[2][j]][4]=clasament[a[2][j]][2]-clasament[a[2][j]][3];
    if(e1>e2) clasament[a[1][j]][1]=clasament[a[1][j]][1]+3;
    else if(e2>e1) clasament[a[2][j]][1]=clasament[a[2][j]][1]+3;
        else
        {
           clasament[a[1][j]][1]=clasament[a[1][j]][1]+1;
           clasament[a[2][j]][1]=clasament[a[2][j]][1]+1;
        }
}
void afisareretur()
{
        cout<<"ETAPA"<<" "<<k<<endl;
        if(k%2==1)
        {
        j=1;
        cout<<vectorechipe[a[1][j]]<<"-"<<vectorechipe[a[2][j]]<<" ";
        rezultate1();
        for(j=2;j<=n/2;j++)
            {
                if(j%2==0)
                {
                    cout<<vectorechipe[a[2][j]]<<"-"<<vectorechipe[a[1][j]]<<" ";
                    rezultate2();
                }
                else
                {
                    cout<<vectorechipe[a[1][j]]<<"-"<<vectorechipe[a[2][j]]<<" ";
                    rezultate1();
                }
            }
            cout<<endl;
        }
        if(k%2==0)
        {
        j=1;
        cout<<vectorechipe[a[2][j]]<<"-"<<vectorechipe[a[1][j]]<<" ";
        rezultate2();
        for(j=2;j<=n/2;j++)
            {
                if(j%2==0)
                {
                    cout<<vectorechipe[a[2][j]]<<"-"<<vectorechipe[a[1][j]]<<" ";
                    rezultate2();
                }
                else
                {
                    cout<<vectorechipe[a[1][j]]<<"-"<<vectorechipe[a[2][j]]<<" ";
                    rezultate1();
                }
            }
        cout<<endl;
        }
        sortare();
        lista();
}
void afisaretur()
{
        cout<<"ETAPA"<<" "<<k<<endl;
        if(k%2==1)
        {
        j=1;
        cout<<vectorechipe[a[1][j]]<<"-"<<vectorechipe[a[2][j]]<<" ";
        rezultate1();
        for(j=2;j<=n/2;j++)
            {
                if(j%2==1)
                {
                    cout<<vectorechipe[a[2][j]]<<"-"<<vectorechipe[a[1][j]]<<" ";
                    rezultate2();
                }
                else
                {
                    cout<<vectorechipe[a[1][j]]<<"-"<<vectorechipe[a[2][j]]<<" ";
                    rezultate1();
                }
            }
            cout<<endl;
        }
        if(k%2==0)
        {
        j=1;
        cout<<vectorechipe[a[2][j]]<<"-"<<vectorechipe[a[1][j]]<<" ";
        rezultate2();
        for(j=2;j<=n/2;j++)
            {
                if(j%2==1)
                {
                    cout<<vectorechipe[a[2][j]]<<"-"<<vectorechipe[a[1][j]]<<" ";
                    rezultate2();
                }
                else
                {
                    cout<<vectorechipe[a[1][j]]<<"-"<<vectorechipe[a[2][j]]<<" ";
                    rezultate1();
                }
            }
        cout<<endl;
        }
        sortare();
        lista();
}
void amestecare()
{
    for(int i=2;i<=n;i++) v[i]=i;
    k=1;
    while(k<n)
        {
            afisaretur();
            for(int i=2;i<=n;i++)
            {
                v[i]=v[i]-1;
                if(v[i]==1) v[i]=n;
            }
            for(i=2;i<=n/2;i++)
                {
                    a[1][i]=v[i];
                }
            int jum=n/2+1;
            for(i=n/2;i>=1;i--)
                {
                    a[2][i]=v[jum];
                    jum++;
                }
            k++;
        }
    while(k<2*n-1)
    {
            afisareretur();
            for(int i=2;i<=n;i++)
            {
                v[i]=v[i]-1;
                if(v[i]==1) v[i]=n;
            }
            for(i=2;i<=n/2;i++)
                {
                    a[1][i]=v[i];
                }
            int jum=n/2+1;
            for(i=n/2;i>=1;i--)
                {
                    a[2][i]=v[jum];
                    jum++;
                }
            k++;
    }
}
int main()
{
    cout<<"Numarul echipelor din competitie: ";
    cin>>n;
    citireechipe();
    generarematrice();
    for(int i=1;i<=n;i++)
    {
        clasament[i][0]=i;
    }
    amestecare();
    return 0;
}
