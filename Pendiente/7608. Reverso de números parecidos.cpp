// YAEL345YOL
#include <stdio.h>
#include <cstring>
using namespace std;
int main(){
    char entrada[8];
    char* var;
    int n;
    scanf("%d",&n);
    for(int x=0;x<n;++x){
        scanf("%s",entrada);
        strcpy(strcat(var,entrada),var);
        var+='.';
    }
    printf("%ld",strlen(var));
    return 0;
}
