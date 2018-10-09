#include <iostream>
#include <string.h>
using namespace std;
int time(string t, int c ,int b[10] , char sb[10])
{
    if(t[t.length()-1] != 'M' ||  t[t.length()-5] != ':')//valedation
    {
        cout << "Error" << endl;
        return 0;
    }

    if(t[c-2] == 'A')// for ==> AM
    {
        if(t.length() == 7)
        {
            cout << t[0] << t[1] << t[3] << t[4]<<endl;
        }
        else{cout << "0" << t[0] << t[2] << t[3]<<endl;;}
    }
    else if(t[c-2] == 'P')
    {
        if(t.length() == 7)
        {
            int y,ti;
            if( (t[0] == '1' && t[1] == '0') ||(t[0] == '1' && t[1] == '1')||(t[0] == '1' && t[1] == '2'))
            {
                for(int i=0 ;i<10;i++)
                {
                    if(t[1]== sb[i]){y=b[i];}
                }
            }
            ti=y+10+12;
            cout << ti << t[3] << t[4] <<endl;
        }
        else
        {
            int y,ti;
            for(int i=0 ;i<10;i++)
            {
                if(t[0]== sb[i]){y=b[i];}
            }
            ti=y+12;
            cout << ti << t[2] << t[3] <<endl;
        }


    }

    else
    {
        cout << "Error!!" <<endl;
        return 0;
    }
    return 0;
}

int main()
{
    int b[10]={0,1,2,3,4,5,6,7,8,9};
    char sb[10]={'0','1','2','3','4','5','6','7','8','9'};
    string t;
    cin >> t;
    int c=t.length();
    time(t,c,b,sb);
    main();

    return 0;
}
