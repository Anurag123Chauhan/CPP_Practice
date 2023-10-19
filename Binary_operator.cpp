#include<bits/stdc++.h>
using namespace std;

class hanji{
public:
    int h;
    int m;
    int s;
    
    hanji(int hr, int min, int sec){
        this->h = hr;
        this->m = min;
        this->s = sec;
    }
    
    hanji operator-(const hanji& ba){
        hanji ba1(0,0,0);   //initialize with 0;
        ba1.h = h - ba.h;
        ba1.m = m - ba.m;
        ba1.s = s - ba.s;
        
        // Adjust negative minutes and seconds
        while (ba1.s < 0) {
            ba1.s += 60;
            ba1.m--;
        }
        while (ba1.m < 0) {
            ba1.m += 60;
            ba1.h--;
        }

        return ba1;
    }
};

int main(){
    int h, m, s, h1, m1, s1;
    cin >> h >> m >> s;
    cin >> h1 >> m1 >> s1;
    hanji ob(h, m, s);
    hanji ob1(h1, m1, s1);
    
    hanji ans = ob - ob1;
    cout << "Time 1: " << ob.h << "h " << ob.m << "m " << ob.s << "s" << endl;
    cout << "Time 2: " << ob1.h << "h " << ob1.m << "m " << ob1.s << "s" << endl;
    cout << "Time difference: " << ans.h << "h " << ans.m << "m " << ans.s << "s" << endl;
    return 0;
}
