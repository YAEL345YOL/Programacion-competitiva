// YAEL345YOL
#include <stdio.h>
using namespace std;
int main(){
    char entrada[8];
    int n;
    scanf("%d",&n);
    char* arreglo[n];
    for(int x=0;x<n;++x){
        scanf("%s",entrada);
        arreglo[x] = entrada;
    }
    printf("%s",arreglo[3]);
    return 0;
}
