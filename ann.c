#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int vJoao = 0; int vMaria = 0; int vZe = 0; int vNulo = 0; //Aqui inicializamos os as variáveis que guardarão os votos para vereador
        int nulos = 0;
        int pGomes = 0;
        int pZureta = 0;
        int pNulo = 0; //Nesse bloco, guardamos os dos prefeitos

        //As variáveis devem ser declaradas em escopo global, para garantir que os votos sejam guardados corretamente

    int main() {
        setlocale(LC_ALL, "Portuguese");
        int opcaoVereadores; int opcaoPrefeitos; //Variáveis de menu
        printf ("-----Atividade de Estudo 1 - Algoritmos e Lógica II ------\n\n");
        printf("1 - Votar\n");
        printf("2 - Apuração dos votos\n");
        printf("3 - Sair\n"); //Nesse bloco, imprimimos o menu na tela
        int menu; //Essa variável guardará a opção que o usuário digitr
        scanf("%d", &menu); //Comando de leitura da opção do usuário
        fflush(stdin); //Limpamos o buffer do teclado

        switch (menu) {
            case 1: //Caso a pessoa escolha a opção 1, de votação
            printf ("\n \n");
            printf ("Votando para vereador: \n\n");
            printf("111 - Votar no João do Frete\n");
            printf("222 - Votar na Maria da Pamonha\n"); //Submenu que exibe os candidatos a vereador
            printf("333 - Votar no Zé da Farmácia\n");
            printf("444 - Votar nulo\n");
            printf ("\n \n");
            scanf("%d", &opcaoVereadores); //Aqui lemos o voto do usurio
            fflush(stdin); //Aqui, limpamos o buffer do teclado

            switch (opcaoVereadores) {

                case 111: printf("\n111 - Votou no João do Frete\n");
                vJoao++; //A variável guarda o voto naquele candidato
                break;

                case 222: printf("\n222 - Votou na Maria da Pamonha\n");
                vMaria++;
                break;

                case 333: printf("\n333 - Votou no Zé da Farmácia\n");
                vZe++;
                break;

                case 444: printf("\n444 - Votou nulo\n");
                vNulo++;
                break;

                default: printf("\nVoto incorreto.\n" "Vote para o cargo seguinte.\n"); //Caso para quando o usuário digita um valor que inválido
                break;
            }; //Aqui, encerramos o primeiro switch, para evitar que as opções de votação e do menu conflitem entre si

            printf("\n \n");
            printf("Votando para prefeito...\n\n"); //Iniciando a votação para prefeito

            printf("11 - Votar no Dr. Zureta\n"); //Opções disponíveis para prefeito
            printf("22 - Votar no Senhor Gomes\n");
            printf ("44 - Votar nulo\n");
            scanf("%d", &opcaoPrefeitos);
            fflush(stdin); //Aqui lemos o voto do usuário para prefeito

            switch (opcaoPrefeitos) {
                case 11: printf("\n11 - Votou no Dr. Zureta\n");
                pZureta++; //Essa variável guardará os votos do candidato
                break;

                case 22: printf("\n22 - Votou no Senhor Gomes\n");
                pGomes++;
                break;

                case 44: printf ("\n44 - Você votou nulo\n");
                pNulo++;
                break;

                default: printf("\nVoto incorreto.\n\n Por favor, tente de novo.");
                break;

            }; //Aqui, encerramos o switch e retornamos ao menu, afinal, o usuário precisa poder seguir no programa.
            printf ("\nObrigado por votar\n\n");
            main(); //Chamar o menu após cada caso garante que vários usuários possam votar, ou que um mesmo usuário
            //consiga apurar o total de votos e sair do programa

            case 2:
            nulos = pNulo + vNulo;
            printf("O candidato João do Frete fez: %d\n", vJoao); //Aqui, exibiremos o total de votos para cada candidato
            printf("A candidata Maria da Pamonha fez: %d\n", vMaria);
            printf ("O candidato Zé da Farmácia fez: %d\n", vZe);
            printf ("O candidato Dr. Zureta fez: %d\n", pZureta);
            printf ("O candidato Senhor Gomes fez: %d\n", pGomes);
            printf ("O total de votos nulos foi: %d\n", nulos);

            printf("\n\n");
            main();

            case 3:
            printf("Saindo do menu...\n");
            exit (0); //Essa instrução encerra o programa com sucesso
            break;
        };
    };
