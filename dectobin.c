
#include<stdio.h>
#include<math.h>

int bintodec(int bin){
    int lsb,dec=0,i=0;
    while(bin>0){
        lsb=bin%10;
        if (lsb==0 || lsb==1){
            bin/=10;
            dec+=(lsb*pow(2,i));
            i++;
        }
        else {
            printf("invalid binary number\n");
            return 0;
        }
    }
    return dec;
}

int dectobin(int dec){
    int digit,i=1,bin=0;
    while(dec>0){
        digit=dec%2;
        dec/=2;
        bin+=digit*i;
        i*=10;
    }
    return bin;
}

int main(){
    int op, bin, dec;
    printf("(1) Decimal to BInary Converter\n(2) Binary to Decimal Converter\nEnter (1) or (2) accordingly:\n");
    scanf("%d", &op);
    if(op==1){
        printf("enter Decimal Value: ");
        scanf("%d", &dec);
        printf("BInary value: %d", dectobin(dec));
    }
    else if(op==2){
        printf("enter Binary Value: ");
        scanf("%d", &bin);
        printf("Decimal value: %d", bintodec(bin));
    }
    else
    printf("invalid choice");
    return 0;
}
    
