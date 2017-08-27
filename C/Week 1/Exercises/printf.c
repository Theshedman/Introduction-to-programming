#include<stdio.h>
#include<stdarg.h>
void main()/*el programa empieza a ejecutarse desde main*/
/*debe retornar un valor entero*/
{
    printf("hola, mundo\n");
    minprintf()
}
void minprintf(char *fmt,...)
{
    va_list ap; /* apunta a cada arg sin nombre en orden*/
    char *p, *sval;
    int ival;
    double dval;

    va_start(ap, fmt); /* hace que ap apunte al ler.arg sin nombre */
    for (p = fmt; *p; p ++){
          if (*p != '%'){
                putchar(*p);
                continue;
          }
          switch (* ++ p){
          case 'd':
                ival = va_arg(ap, int);
                printf("%d",ival);
                break;
          case 'f':
                dval = va_arg(ap,double);
                printf("%f", dval);
                break;
          case 's':
                for (sval = va_arg(ap, char *); *sval;sval ++)
                      putchar(*sval);
                break;
          default:
                putchar(*p);
                break;
          }
      }
      va_end(ap); /*limpia cuando todo está hecho*/
    }
