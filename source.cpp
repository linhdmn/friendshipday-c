#include "iostream"
#include "cmath"


using namespace std;


int main()
{
    double x, y, size=10;
    char ch=3;
    string message(” Happy Friendship Day “);
    int print_line = 4;


    if (message.length() % 2 != 0) message += ” “;


    for (x=0;x&lt;size;x++)
    {
        for (y=0;y&lt;=4*size;y++)
        {
            double dist1 = sqrt( pow(x-size,2) + pow(y-size,2) );
            double dist2 = sqrt( pow(x-size,2) + pow(y-3*size,2) );


            if (dist1 &lt; size + 0.5 || dist2 &lt; size + 0.5 ) {
                cout &lt;&lt; ch;
            }
            else cout &lt;&lt; ” “;
        }
        cout&lt;&lt;“n”;
    }


    for (x=1;x&lt;2*size;x++)
    {
        for(y=0;y&lt;x;y++) cout &lt;&lt; ” “;


        for (y=0; y&lt;4*size + 1 – 2*x; y++) { if (x &gt;= print_line – 1 &amp;&amp; x &lt;= print_line + 1) {
                int idx = y – (4*size – 2*x – message.length()) / 2;
                if (idx &lt; message.length() &amp;&amp; idx &gt;= 0) {
                    if (x == print_line) cout&lt;&lt;message[idx];
                    else cout &lt;&lt; ” “;
                }
                else cout &lt;&lt; ch;
            }
            else cout &lt;&lt; ch;
        }
        cout&lt;&lt;endl;
    }
    return 0;
}
