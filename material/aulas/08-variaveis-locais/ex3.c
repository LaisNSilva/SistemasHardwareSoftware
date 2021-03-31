int main(){
    int a;
    scanf("%d", &a);
    // se a<0 pula para 55
    if (a<0){
        puts("Negativo");
        // OU printf("Negativo\n");
    }
    else{
        puts("Positivo!");
        // OU printf("Positivo!\n");
    }

    return 0;
}