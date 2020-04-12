#define ex06
   // OBS.: Faça um loop infinito e defina uma saida em todos os exercícios.
#ifdef ex01
/*
1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.
*/
#include <stdio.h>
main()
{
    float num1,num2;
    char continuar='s';

    while(continuar == 's' || continuar == 'S'){

    printf("Digite dois numeros.\nDigite o primeiro: ");
    scanf("%f",&num1);

    printf("Digite o segundo numero: ");
    scanf("%f",&num2);

    printf("\n%.2f + %.2f = %.0f",num1,num2,num1+num2);
    printf("\n%.2f - %.2f = %.0f",num1,num2,num1-num2);
    printf("\n%.2f x %.2f = %.0f",num1,num2,num1*num2);
    printf("\n%.2f / %.2f = %.3f",num1,num2,num1/num2);

    printf("\n\nDeseja continuar? Digite 's' para 'sim' ou qualquer outra tecla para 'nao': "); getchar();
    continuar = getchar();
    }
}
#endif //ex01
#ifdef ex02
/*
    2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.
*/
#include <stdio.h>
main()
{
    float num1,num2;
    char continuar='s';

    while(continuar == 's' || continuar == 'S'){

    printf("Digite dois numeros inteiros.\nDigite o primeiro: ");
    scanf("%f",&num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%f",&num2);

    printf("\n%.0f + %.0f = ",num1,num2); num1+=num2;
    printf("%.f",num1); num1-=num2;
    printf("\n%.0f - %.0f = ",num1,num2); num1-=num2;
    printf("%.f",num1); num1+=num2;
    printf("\n%.0f x %.0f = ",num1,num2); num1*=num2;
    printf("%.f",num1); num1/=num2;
    printf("\n%.0f / %.0f = ",num1,num2); num1/=num2;
    printf("%.3f",num1);

    printf("\n\nDeseja continuar? Digite 's' para 'sim' ou qualquer outra tecla para 'nao': "); getchar();
    continuar = getchar();
    }
}
#endif // ex02

#ifdef ex03
/*
    3 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.
*/

#include <stdio.h>
main()
{
    int num1,num2;
    char continuar = 's';

    while(continuar == 's' || continuar == 'S')
    {

    printf("Digite um numero inteiro: ");
    scanf("%d",&num1);

    printf("Digite outro numero inteiro: ");
    scanf("%d",&num2);

    printf("OU decimal: %d. OU hexa: %x",num1 | num2, num1 | num2);
    printf("\nOU exclusivo decimal: %d. OU exclusivo hexa: %x",num1 ^ num2, num1 ^ num2);
    printf("\nAND decimal: %d. AND hexa: %x",num1 & num2, num1 & num2);


    printf("\n\nDeseja continuar? Digite 's' para 'sim' ou qualquer outra tecla para 'nao': "); getchar();
    continuar = getchar();
    }
}

#endif // ex03

#ifdef ex04
/*
    4 - Escreva um programa que receba um numero inteiro via teclado, divida-o
    por 8 e multiplique-o por 8 utilizando os operadores de deslocamento.
    Imprima no video o numero recebido e os resultados obtidos.
*/
#include <stdio.h>

main()
{
    char continuar = 's';
    int num;

    while(continuar == 's' || continuar == 'S')
        {
            printf("Digite um numero inteiro: ");
            scanf("%d",&num);

            printf("Deslocamento para direita: %d",num>>3);
            printf("\nDeslocamento para esquerda: %d",num<<3);

            printf("\n\nDeseja continuar? Digite 's' para 'sim' ou qualquer outra tecla para 'nao': ");
            getchar();  continuar = getchar();
        }
}

#endif // ex04

#ifdef ex05
/*
    5 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mês e ano) do seu nascimento e a
    data (dia, mês e ano) atual.Verifique se a data atual e' anterior a data de
    nascimento.
*/
#include <stdio.h>

main()
{
    char continuar = 's';
    int bissexto_nasc=0,bissextoA=0,ano_nasc_bisexto=0,anoA_bisexto=0,auxiliar,diaA,mesA,anoA,dia_nasc,mes_nasc,ano_nasc;
// 'A' = atual.
    while(continuar == 's' || continuar == 'S')
    {
        bissexto_nasc=0,bissextoA=0,ano_nasc_bisexto=0,anoA_bisexto=0;
do{
    do{
        do{auxiliar=1;
            do{
                printf("digite a data de seu nascimento: \n\nDia: ");
                scanf("%d",&dia_nasc);

                if(dia_nasc > 31 || dia_nasc < 0)
                    printf("\nValor fora do intervalo. Tente novamente.\n\n");
            }while(dia_nasc > 31 || dia_nasc < 0);

            do{
                printf("Mes: ");
                scanf("%d",&mes_nasc);

                if(mes_nasc > 12 || mes_nasc < 1)
                    printf("\nValor fora do intervalo. Tente novamente.\n\n");
            }while(mes_nasc > 12 || mes_nasc < 1);

            switch(mes_nasc)
            {
                case 2:
                    if(ano_nasc % 4 != 0)
                    {
                        if(dia_nasc >= 29)
                            auxiliar = 0;
                    }else
                        if(dia_nasc >= 30)
                            auxiliar = 0; break;
                case 4:
                    if(dia_nasc>30)
                        auxiliar=0; break;
                case 6:
                    if(dia_nasc>30)
                        auxiliar=0; break;
                case 9:
                    if(dia_nasc>30)
                        auxiliar=0; break;
                case 11:
                    if(dia_nasc>30)
                        auxiliar=0; break;
                default:
                    auxiliar=1;
            }
            if(auxiliar==0)
                printf("\nVerifique o limite de dias do mes digitado. Tente novamente.\n\n");

        }while(auxiliar == 0);

        do{
        printf("Ano: ");
        scanf("%d",&ano_nasc);

        if(ano_nasc<0)
            printf("\nAno nao pode ser negativo. Tente novamente.\n\n");

        }while(ano_nasc<0);

        if((ano_nasc % 4 != 0 && mes_nasc == 2)&&dia_nasc>=29)
            printf("\nO ano digitado nao e' bissexto, portanto verifique o dia digitado. Tente novamente.\n\n");

    }while((ano_nasc % 4 != 0 && mes_nasc == 2)&&dia_nasc>=29);


    do{
        do{
        printf("\n\nAgora digite a data atual: \n\nDia: ");
        scanf("%d",&diaA);

        if(diaA > 31 || diaA < 0)
                printf("\nValor fora do intervalo. Tente novamente.\n\n");
        }while(diaA > 31 || diaA < 0);  auxiliar=0;


        do{
        printf("Mes: ");
        scanf("%d",&mesA);

        if(mesA > 12 || mesA < 1)
            printf("\nValor fora do intervalo. Tente novamente.\n\n");
        }while(mesA > 12 || mesA < 1);

        switch(mesA)
            {
                case 2:
                    if(anoA % 4 != 0)
                    {
                        if(diaA >= 29)
                            auxiliar = 0;
                    }else
                        if(diaA >= 30)
                            auxiliar = 0; break;
                case 4:
                    if(diaA>30)
                        auxiliar=0; break;
                case 6:
                    if(diaA>30)
                        auxiliar=0; break;
                case 9:
                    if(diaA>30)
                        auxiliar=0; break;
                case 11:
                    if(diaA>30)
                        auxiliar=0; break;
                default:
                    auxiliar=1;
            }

            if(auxiliar==0)
                printf("\nVerifique o limite de dias do mes digitado. Tente novamente.\n\n");

    }while(auxiliar == 0);


        do{
        printf("Ano: ");
        scanf("%d",&anoA);

        if(anoA<0)
            printf("\nAno nao pode ser negativo. Tente novamente.\n\n");

        }while(anoA<0);

        if((ano_nasc > anoA) || (mes_nasc > mesA && ano_nasc == anoA) || ((dia_nasc > diaA && ano_nasc == anoA)&&mesA==mes_nasc))
            printf("\n\nA data de seu nascimento deve ser menor do que a atual. Tente novamente.\n\n");

      }while((ano_nasc > anoA) || (mes_nasc > mesA && ano_nasc == anoA) || ((dia_nasc > diaA && ano_nasc == anoA)&&mesA==mes_nasc));


    auxiliar=0;
    while(ano_nasc % 4 != 0)
    {
        bissexto_nasc += 1;
        ano_nasc += bissexto_nasc;
    }


    while(anoA % 4 != 0)
    {
        bissextoA += 1;
        anoA -= bissextoA;
    }


    auxiliar = ((anoA - ano_nasc)/4)+1;
    ano_nasc -= bissexto_nasc +1;
    anoA += bissextoA;


    if(bissexto_nasc == 0)
    {
        if(mes_nasc > 2)
            auxiliar -= 1;
    }

    if(bissextoA == 0)
    {
        if((mesA == 2 && diaA < 29) || mesA == 1)
            auxiliar -= 1;
    }

    anoA -= ano_nasc;
    mesA -= mes_nasc;
    diaA = (diaA - dia_nasc) + auxiliar;


    if(diaA < 0)
    {
        mesA -= 1;
        if(mesA < 0)
            {
                mesA = 12 + mesA;
                anoA -= 1;
            }
        switch (mesA)
        {
            case 1:
                diaA += 32;break;
            case 2:
                if(bissexto_nasc == 0)
                    diaA += 30;
                else
                    diaA += 29;
                    break;
            case 3:
                diaA += 32;break;
            case 5:
                diaA += 32;break;
            case 7:
                diaA += 32;break;
            case 8:
                diaA += 32;break;
            case 10:
                diaA += 32;break;
            case 12:
                diaA += 32;break;
            default:
                diaA += 31;
       }
    }

        if(mesA < 0)
            {
                mesA = 12 + mesA;
                anoA -= 1;
            }

    printf("\n\nVoce possui %d dia(s), %d mes(es) e %d ano(s) de idade.\n",diaA,mesA,anoA);
    printf("\nObservacao:\n\tUm (1) ano = 365 dias.\n\tUm (1) ano Bissexto = um (1) ano + 1 dia (29 de fevereiro).\n");

    printf("\n\nDeseja continuar? Digite 's' para 'sim' ou qualquer outra tecla para 'nao': "); getchar();
    continuar = getchar();
    }
}

#endif // ex05

#ifdef ex06
/*
    6 - Escreva um programa para determinar o dia da semana de uma determinada
    data (dia, mes e ano).
*/
#include <stdio.h>
main()
{
    int dia,mes,ano,resultado;
    char continuar='s';

    do{
        printf("Digite uma data no formato dd/mm/aaaa: \nDigite o dia: ");
        scanf("%d",&dia);

        printf("\nDigite o mes: ");
        scanf("%d",&mes);

        printf("\nDigite o ano: ");
        scanf("%d",&ano);

        if(mes == 1 || mes == 2)
            {
                if(mes == 1)
                    {mes = 13; ano -= 1;}
                else
                    {mes = 14; ano -= 1;}
            }

        resultado = (dia+2*mes+((3*(mes+1))/5)+ano+(ano/4)-(ano/100)+(ano/400)+2)%7;

        printf("\nO dia da semana da data digitada e': ");

        switch(resultado)
        {
            case 0:
                printf("Sabado.\n"); break;
            case 1:
                printf("Domingo.\n"); break;
            case 2:
                printf("Segunda.\n"); break;
            case 3:
                printf("Terca.\n"); break;
            case 4:
                printf("Quarta.\n"); break;
            case 5:
                printf("Quinta.\n"); break;
            default:
                printf("Sexta.\n");
        }

        printf("\nDeseja continuar?\nDigite 's' para 'sim' ou qualquer outra tecla para 'nao': ");
        getchar();  continuar = getchar();  printf("\n");

    }while(continuar == 's' || continuar == 'S');
}

#endif // ex06
