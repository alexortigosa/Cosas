//EX 2.4

#include<stdio.h>
#include<stdlib.h>

typedef struct facturas{
        int numRef;
        char nClient[20];
        float impTotal;
        char nomProd[20];
        char ref[5];
        int stock;
        float preuUnitat;
}facturas;

void altaFactura(facturas *fac){
    
     printf("\nNumero de referencia de la factura: ");
     scanf("%d",&fac->numRef);
     fflush(stdin);
     printf("\nNombre Cliente: ");
     fflush(stdin);
     scanf("%s",fac->nClient);
     
     printf("\nImporte total: ");
     scanf("%f",&fac->impTotal);
     
     printf("\nReferencia producto: ");
     fflush(stdin);
     scanf("%s",&fac->ref);
     
     printf("\n Stock: ");
     scanf("%d",&fac->stock);
     
     printf("\nImporte unidad: ");
     scanf("%f",&fac->preuUnitat);
     system("pause");
}
void mostrarFactura(facturas fac[]){
     int i=0;
     for(i=0; i<3; i++){
              printf("\n-----------------------------");
              printf("\nReferencia: %d",fac[i].numRef);
              printf("\nNom Client: %s",fac[i].nClient);
              printf("\nImport total: %d",fac[i].impTotal);
              printf("\nNom producte: %s",fac[i].ref);
              printf("\nReferencia: %s",fac[i].ref);
              printf("\nStock: %d",fac[i].stock);
              printf("\nImporte Unidad",fac[i].preuUnitat);
              }
     }
int main(){
    int i=0, c=0;
    struct facturas fac[3];
    
    for(i=0; i<3; i++){
    altaFactura(&fac[i]);
    
    }
    mostrarFactura(fac);
    
system("pause");
return 0;    
}



