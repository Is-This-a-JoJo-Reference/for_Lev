#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){
    double x, y, t;
    FILE *input, *output;
    input = fopen("data.txt", "r");
    output = fopen("out.txt", "w");
    while(fscanf(input, "%lf %lf %lf\n", &x, &y, &t) != EOF){
        fprintf(output, "%f %f %f\n", x, y, pow(t, 4));
    }
    cout << "Program finished. Everything is OK!\n";
    return 0;
}
