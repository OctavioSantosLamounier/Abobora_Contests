#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define pi 3.14159265

double dist(double lat_p, double longi_p, double lat_f, double longi_f){
    double distancia;

    distancia = (1 - sin(lat_p)*sin(lat_f) - cos(lat_p)*cos(lat_f)*cos(longi_f - longi_p));
    distancia /= 2;

    distancia = max(0.0, distancia);
    distancia = 2*6371200*asin(sqrt(distancia));

    return distancia;
}

int main() {
    fastio;
    
    bool flag = true;
    double b_lat, b_long, a;
    double f_lat, f_long, r;

    cin >> b_lat >> b_long >> a;

    b_lat = b_lat*pi/180;
    b_long = b_long*pi/180;

    while (cin >> f_lat >> f_long >> r) {
        f_lat = f_lat*pi/180;
        f_long = f_long*pi/180;
        if (dist(b_lat, b_long, f_lat, f_long) <= r) flag = false;
    }

    cout << (flag ? "SIM" : "NAO") << endl;

    return 0;
}
