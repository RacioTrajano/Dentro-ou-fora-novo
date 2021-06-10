/* esse foi o primeiro código que eu testei mas deu errado 
#include <stdio.h>

int main () {
int XE, YE, XD, YD;
int XP, YP;

scanf ("%d %d %d %d",&XE, &YE, &XD, &YD);
scanf ("%d %d", &XP, &YP);
// esse primeiro if representa o caso baso descrito no enunciado da questão 
if (XE < XD || YE > YD) { 
  if (XP >= XE || XP <= XD || YP >= YD || YP <= YE) {
      printf ("Dentro!");
    }
    else { printf ("Fora!");}
    
    return 0;}
} */


#include <stdio.h>

int main () {
int XE, YE, XD, YD;
int XP, YP;

scanf ("%d %d %d %d",&XE, &YE, &XD, &YD);
scanf ("%d %d", &XP, &YP);
 
if (XE < XD || YE > YD) { 
  if (XP >= XE || XP <= XD || YP >= YD || YP <= YE) {
      printf ("Dentro!");
    }
    else { printf ("Fora!");}
}
else if (XE < XD || YE < YD) {
    if (XP >= XE || XP <= XD || YP <= YD || YP >= YE) {
      printf ("Dentro!");
    }
    else {printf ("Fora!");}
}
else if (XE > XD || YE > YD) {
    if (XP <= XE || XP >= XD || YP >= YD || YP <= YE) {printf ("Dentro!");
    }
    else {printf ("Fora!");}
}
else if (XE > XD || YE < YD) {
    if (XP <= XE || XP >= XD || YP <= YD || YP >= YE) { printf ("Dentro!");
    }
    else {printf ("Fora!");}
}
else {printf (" error");}  



return 0;
}
