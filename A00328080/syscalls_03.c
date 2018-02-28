#include<unistd.h>
int main (){
int m= open("prueba",0700);
write (m,"nino",4);
}


