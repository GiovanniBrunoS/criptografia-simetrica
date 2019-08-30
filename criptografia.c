#include<stdio.h>

int main(){

char s3[100];
int c,i,aux,o;

do{
puts("Selecione uma opcao:");

puts("1 - Criptografar");
puts("2 - Descriptografar");
puts("0 - Sair");
puts("");
scanf("%d", &o);

switch(o){

    case 1:
        system("cls");
        puts("\nInsira a palavra:");
        scanf("%s", s3);
        puts("Insira a chave:");
        scanf("%d", &c);
        for(i=0;s3[i]!='\0';i++){
            if(s3[i]>=65&&s3[i]<=90){
                aux=s3[i]+c;
                while(aux>90){
                    aux-=26;
                }s3[i]=aux;
            }else if(s3[i]>=97&&s3[i]<=122){
                aux=s3[i]+c;
                while(aux>122){
                    aux-=26;
                }s3[i]=aux;
            }
        }
        puts("Palavra criptografada:");
        printf("%s\n\n", s3);
        break;

    case 2:
        puts("\nInsira a palavra:");
        scanf("%s", s3);
        puts("Insira a chave:");
        scanf("%d", &c);
        for(i=0;s3[i]!='\0';i++){
            if(s3[i]>=65&&s3[i]<=90){
                aux=s3[i]-c;
                while(aux<65){
                    aux+=26;
                }s3[i]=aux;
            }else if(s3[i]>=97&&s3[i]<=122){
                aux=s3[i]-c;
                while(aux<97){
                    aux+=26;
                }s3[i]=aux;
            }
        }
        puts("Palavra descriptografada:");
        printf("%s\n\n", s3);
        break;

    case 0:
        return 0;

}}while(o!=0);
}
