#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  n, k, l, c, d, p, nl, np,s_drinks=0,s_limes=0,t,t1,ans,res;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    s_drinks=k*l;
    s_limes=c*d;
    t=s_drinks/nl;
    //cout<<t<<endl;
    t1=p/np;
    ans=min(t,s_limes);
    res=min(ans,t1);
    cout<<res/n;



                                                                      ///number of people=n
                                                                                      ///number of bottle=k
                                                                                      ///drinks in a bottle=l
                                                                                      /// number of limes=c
                                                                                      ///each limes=d
                                                                                      ///salt=p
                                                                                      ///required drinks=nl
                                                                                      ///required saly=t=np

}
