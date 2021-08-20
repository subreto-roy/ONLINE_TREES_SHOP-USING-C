#include<bits/stdc++.h>

int main(){
    int i,quantity[10],items;
    float price,value,total_value,VatCount=0,InTotal=0;
    char Tree[10][10];
    float Cactus = 222.50, Money_plant = 300.00, Aralia=500.00, Rose=200.00, Daisy=900, Tuberose=122.25, Lily=250.65, Aromatic_jui=340.43, Golden_Gate=220.98,jade=100.00,Adenium=300.00;
    printf("\n\n                 WELCOME TO OUR ONLINE TREES SHOP\n");



    printf("          ******************************************\n");
    printf("             Available Trees Name And Prices Here \n");
    printf("                     Trees Name        Prices\n");
    printf("                     Cactus            222.50Tk\n");
    printf("                     Money_plant       300.00Tk\n");
    printf("                     Aralia            500.00Tk\n");
    printf("                     Rose              200.00Tk\n");
    printf("                     Daisy             900.00Tk\n");
    printf("                     Tuberose          122.25Tk\n");
    printf("                     Lily              250.65Tk\n");
    printf("                     Aromatic_jui      340.43Tk\n");
    printf("                     Golden_Gate       220.98Tk\n");
    printf("                     jade              100.00Tk\n\n");
    printf("          *******************************************\n");





    printf("How Many Items You Needs? ::");
    scanf("%d",&items);


    for(i=1;i<=items;i++){
        printf("Enter Tree Name: ");
        fflush(stdin);
        scanf("%s", &Tree[i]);
        printf("Enter Product Qunatity: ");
        fflush(stdin);
        scanf("%d",&quantity[i]);

    }


    printf("\n\n\n");
    printf("::WELCOME TO ONLINE TREES SHOP::\n");
    printf("----------------------------------------\n");
    printf("TREES       QUANTITY       PRICE      VALUES          \n");




    total_value=0;
    i=1;
    while(i<=items){
        if(strcmp(Tree[i],"Cactus")==0){
            price=Cactus;
        }
        if(strcmp(Tree[i],"Money_plant")==0){
            price=Money_plant;
        }
        if(strcmp(Tree[i],"Aralia")==0){
            price=Aralia;
        }
        if(strcmp(Tree[i],"Rose")==0){
            price=Rose;
        }
        if(strcmp(Tree[i],"Daisy")==0){
            price=Daisy;
        }
        if(strcmp(Tree[i],"Tuberose")==0){
            price=Tuberose;
        }
        if(strcmp(Tree[i],"Lily")==0){
            price=Lily;
        }
        if(strcmp(Tree[i],"Aromatic_jui")==0){
            price=Aromatic_jui;
        }
        if(strcmp(Tree[i],"Golden_Gate")==0){
            price=Golden_Gate;
        }

        value = quantity[i]*price;
        printf("%s      %d             %.2f     %.2f          \n",Tree[i], quantity[i], price, value);
        total_value = total_value + value;
        i++;



    }
    VatCount=(total_value/100)*15;
    InTotal=total_value + VatCount;



    printf("-------------------------------------------------\n");
    printf("                       Total Value   = %.2fTK\n",total_value);
    printf("                       (+) 15% vat = %.2fTK\n",VatCount);
    printf("-------------------------------------------------\n");
    printf("                            Total   =  %.2fTk\n", InTotal);

    return 0;

}
