#include <cstdlib>
#include <iostream>

char
*J[]=   {"","jeden", "dwa", "trzy","cztery", "piec", "szesc", "siedem", "osiem", "dziewiec", "dziesiec", "jedenescie", "dwanascie", "trzynascie", "czternascie", "pietnascie", "szesnascie", "siedemnascie", "osiemnascie", "dziewietnascie"},
*D[]=   {"","dziesiec", "dwadziescia", "trzydziesci", "czterdziesci", "piedziesiat", "szescdziesiat", "siedemdziesiat", "osiemdziesiat", "dziewiecdziesiat"},
*S[]=   {"","sto", "dwiescie", "trzysta", "czterysta", "piecset", "szecset", "siedemset", "osiemset", "dziewiecset"};


int czytaj()
{
    int l;
    do
    {
        printf("Podaj liczb� ca�kowit� z zakresu 0-999: \n");
        scanf("%d",&l);
        if(l<0||l>999)printf("podana liczba nie miesci sie w zakresie. \n\n");
        }
    while(l<=0||l>=999);
    return l;
}
int zam(int l)
{
        int j,d,s,t;
        if((l<20) && (l!=10))printf("slownie: %s\n\n", J[l]);
        else if((l>=10)&&(l<100))
        {
             d=(l/10);
             j=(l%10);
             printf("slownie: %s %s \n\n",D[d],J[j]);
        }else if(l>=100)
        {
              s=(l/100);
              t=(l%100);
              d=(t/10);
              j=(t%10);
              printf("s�ownie %s %s %s\n\n",S[s],D[d],J[j]);
        }
     
        return 0;
}

int main()
{
    char p;
    do
    {
         int l=czytaj();
         zam(l);
         do
         {
                printf("czy powtorzyc (t/n)?");
                scanf("%s",&p);
                if(p!='t')
                {
                          if(p!='n')printf("\nwybierz 't' lub 'n'. \n\n");
                }
                }while(p!='t'&&p!='n');
         printf("\n");
         }while(p=='t');
                   
         scanf("%s",&p);
         return 0;
}