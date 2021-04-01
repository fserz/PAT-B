# include <cstdio>
# include <algorithm>
using namespace std;

typedef long long ll ;
struct fraction{
    ll up, down;
}a, b;
int gcd(ll a, ll b){
    if(b == 0) return a;
    else return(gcd(b, a%b));
}
fraction reduction(fraction result){
    if(result.down < 0){
        result.down = -result.down;
        result.up = -result.up;
    }
    if(result.up == 0){
        result.down = 1;
    } else{
        int d = gcd(abs(result.up), abs(result.down));
        result.up /= d;
        result.down /= d;
    }
    return result;
}
fraction add(fraction f1, fraction f2){
    fraction result;
    result.down = f1.down * f2.down;
    result.up = f1.up * f2.down + f2.up * f1.down;
    return reduction(result);
}
fraction minu(fraction f1, fraction f2){
    fraction result;
    result.down = f1.down * f2.down;
    result.up = f1.up * f2.down - f2.up * f1.down;
    return reduction(result);
}
fraction multi(fraction f1, fraction f2){
    fraction result;
    result.up = f1.up * f2. up;
    result.down = f1.down * f2.down;
    return reduction(result);
}
fraction divi(fraction f1, fraction f2){
    fraction result;
    result.up = f1.up * f2.down;
    result.down = f1.down * f2.up;
    return reduction(result);
}
void showresult(fraction r){
    r = reduction(r);
    if(r.up < 0) printf("(");
    if(r.down == 1) printf("%lld", r.up);
    else if(abs(r.up) > r.down)
    printf("%lld %lld/%lld", r.up / r.down, abs(r.up) % r.down, r.down);
    else printf("%lld/%lld", r.up, r.down);
    if(r.up < 0) printf(")");
}
int main(){
    scanf("%lld/%lld %lld/%lld", &a.up, &a.down, &b.up, &b.down);
    showresult(a);
    printf(" + ");
    showresult(b);
    printf(" = ");
    showresult(add(a, b));
    printf("\n");

    showresult(a);
    printf(" - ");
    showresult(b);
    printf(" = ");
    showresult(minu(a, b));
    printf("\n");

    showresult(a);
    printf(" * ");
    showresult(b);
    printf(" = ");
    showresult(multi(a, b));
    printf("\n");

    showresult(a);
    printf(" / ");
    showresult(b);
    printf(" = ");
    if(b.up == 0) printf("Inf");
    else showresult(divi(a, b));
    printf("\n");


    

    return 0;
}//2021.2.24 longest code yet