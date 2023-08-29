// YAEL345YOL
#include <stdio.h>
using namespace std;
int main(){
    char* entrada,salida;
    int n;
    scanf("%d",&n);
    for(int x=0;x<n;++x){
        scanf("%s",entrada);
        salida+='.';
        salida=strcat(salida,entrada);
    }
    return 0;
}
