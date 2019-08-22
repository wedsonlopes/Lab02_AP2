#include <stdio.h>
#include "questoes.h"
int contador_registro_cliente = 0;
int contador_exibir_cliente;

typedef struct dados
{
	char nome_cliente[40];
	char email_cliente[40];
	int idade_cliente;
	float altura_cliente;
	float peso_cliente;
	char cpf_cliente[20];
	char sexo_cliente[15];
	float IMC_cliente;
	char data_nascimento_cliente[20];
};
typedef struct dados_pessoa
{
	char nome_pessoa[50];
	char rua_pessoa[20];
	int numero_pessoa;
	char cpf_pessoa[20];
	float saldo_pessoa;
};

int main(void)
{
	int var_opcao_primary, secondary_navigation_option, tertiary_navigation_option;
	int var_opcao_secondary;
	struct dados ficha_cliente[5];
	struct dados_pessoa questao_3[5];

	do
	{
		clear_screen();
		menu_opcoes();
		printf("Entre com a opção:");
		scanf("%d", &var_opcao_primary);

		switch (var_opcao_primary)
		{
		case 1:
			secondary_navigation_option = 1;
			do
			{
				clear_screen();
				printf("Você escolheu a opção: %d\n", var_opcao_primary);
				printf("1) Cadastrar Cliente\n");
				printf("2) Exibir clientes Cadastrados\n");
				printf("3) Mostrar Apenas os 3 primeiros clientes\n");
				printf("0) voltar\n");

				printf("sua escolha:");
				scanf("%d", &secondary_navigation_option);
				/*printf("\nLer os campos da ficha.\n");
			printf("\n");
			printf("1) iniciar\n");
			printf("0) voltar\n");
			printf("sua escolha:");
			scanf("%d",&secondary_navigation_option);*/
				switch (secondary_navigation_option)
				{
				case 1:
					//for (int contador_registro_cliente = 0; contador_registro_cliente < 5; contador_registro_cliente++)
					//{
					do
					{
						setbuf(stdin, NULL);
						printf("\nEntre com o nome do cliente %d : ", contador_registro_cliente + 1);
						fgets(ficha_cliente[contador_registro_cliente].nome_cliente, 40, stdin);
						//exibir cliente puts(ficha_cliente.nome_cliente[contador_registro_cliente]);

						setbuf(stdin, NULL);
						printf("\nEntre com o email do cliente %d : ", contador_registro_cliente + 1);
						fgets(ficha_cliente[contador_registro_cliente].email_cliente, 40, stdin);
						//exibir clienteputs(ficha_cliente.email_cliente);

						setbuf(stdin, NULL);
						printf("\nEntre com a data de nascimento do cliente %d : ", contador_registro_cliente + 1);
						fgets(ficha_cliente[contador_registro_cliente].data_nascimento_cliente, 20, stdin);
						//exibir clienteputs(ficha_cliente.data_nascimento_cliente);

						printf("\nEntre com a idade do cliente %d : ", contador_registro_cliente + 1);
						scanf("%d", &ficha_cliente[contador_registro_cliente].idade_cliente);
						//exibir clienteprintf("%d\n",ficha_cliente.idade_cliente);

						setbuf(stdin, NULL);
						printf("\nEntre com a cpf do cliente sem (pontos) %d : ", contador_registro_cliente + 1);
						fgets(ficha_cliente[contador_registro_cliente].cpf_cliente, 20, stdin);
						//exibir clienteputs(ficha_cliente.cpf_cliente);

						setbuf(stdin, NULL);
						printf("\nEntre com o sexo do cliente %d : ", contador_registro_cliente + 1);
						fgets(ficha_cliente[contador_registro_cliente].sexo_cliente, 15, stdin);
						//exibir cliente puts(ficha_cliente.sexo_cliente);

						setbuf(stdin, NULL);
						printf("\nEntre com a altura do cliente em (metros) %d : ", contador_registro_cliente + 1);
						scanf("%f", &ficha_cliente[contador_registro_cliente].altura_cliente);
						//exibir cliente printf("%f\n",ficha_cliente.altura_cliente);

						setbuf(stdin, NULL);
						printf("\nEntre com o peso do cliente em (KG) %d : ", contador_registro_cliente + 1);
						scanf("%f", &ficha_cliente[contador_registro_cliente].peso_cliente);
						//exibir cliente printf("%f\n",ficha_cliente.peso_cliente);

						setbuf(stdin, NULL);
						float produto_altura = 0;
						produto_altura = ficha_cliente[contador_registro_cliente].altura_cliente * ficha_cliente[contador_registro_cliente].altura_cliente;
						ficha_cliente[contador_registro_cliente].IMC_cliente = ((ficha_cliente[contador_registro_cliente].peso_cliente) / (produto_altura));
						//exibir cliente printf("\nO IMC do cliente %s é: %f\n",ficha_cliente.nome_cliente,ficha_cliente.IMC_cliente);
						printf("\nRegistrado com sucesso!\n");
						pause_period(2);
						contador_registro_cliente++;
						secondary_navigation_option = 0;
					} while (secondary_navigation_option != 0);
					break;

				case 2:
					clear_screen();
					for (contador_exibir_cliente = 0; contador_exibir_cliente < contador_registro_cliente; contador_exibir_cliente++)
					{
						printf("|*************************************************************\n");
						printf("|                   DADOS DO(A) CLIENTE : %d                  \n", contador_exibir_cliente + 1);
						printf("|*************************************************************\n");
						puts(ficha_cliente[contador_exibir_cliente].nome_cliente);
						puts(ficha_cliente[contador_exibir_cliente].email_cliente);
						puts(ficha_cliente[contador_exibir_cliente].data_nascimento_cliente);
						printf("%d\n", ficha_cliente[contador_exibir_cliente].idade_cliente);
						puts(ficha_cliente[contador_exibir_cliente].cpf_cliente);
						puts(ficha_cliente[contador_exibir_cliente].sexo_cliente);
						printf("%f\n", ficha_cliente[contador_exibir_cliente].altura_cliente);
						printf("%f\n", ficha_cliente[contador_exibir_cliente].peso_cliente);
						printf("\nO IMC do(a) cliente %s é: %f\n", ficha_cliente[contador_exibir_cliente].nome_cliente, ficha_cliente[contador_exibir_cliente].IMC_cliente);
					}
					tertiary_navigation_option = 1;
					while (tertiary_navigation_option != 0)
					{
						printf("\n");
						printf(" ___ __________\n");
						printf("| 0 | voltar   |\n");
						printf("|___|__________|\n");
						printf("sua escolha: ");
						scanf("%d", &tertiary_navigation_option);
						if (tertiary_navigation_option != 0)
						{
							printf("\nEntrada inválida!");
							pause_period(2);
						}
					}
					tertiary_navigation_option = 1;
					break;

				case 3:
					clear_screen();
					for (contador_exibir_cliente = 0; contador_exibir_cliente < 3; contador_exibir_cliente++)
					{
						printf("|*************************************************************\n");
						printf("|                   DADOS DO(A) CLIENTE : %d                  \n", contador_exibir_cliente + 1);
						printf("|*************************************************************\n");
						puts(ficha_cliente[contador_exibir_cliente].nome_cliente);
						puts(ficha_cliente[contador_exibir_cliente].email_cliente);
						puts(ficha_cliente[contador_exibir_cliente].data_nascimento_cliente);
						printf("%d\n", ficha_cliente[contador_exibir_cliente].idade_cliente);
						puts(ficha_cliente[contador_exibir_cliente].cpf_cliente);
						puts(ficha_cliente[contador_exibir_cliente].sexo_cliente);
						printf("%f\n", ficha_cliente[contador_exibir_cliente].altura_cliente);
						printf("%f\n", ficha_cliente[contador_exibir_cliente].peso_cliente);
						printf("\nO IMC do(a) cliente %s é: %f\n", ficha_cliente[contador_exibir_cliente].nome_cliente, ficha_cliente[contador_exibir_cliente].IMC_cliente);
					}
					tertiary_navigation_option = 1;
					while (tertiary_navigation_option != 0)
					{
						printf("\n");
						printf(" ___ __________\n");
						printf("| 0 | voltar   |\n");
						printf("|___|__________|\n");
						printf("sua escolha: ");
						scanf("%d", &tertiary_navigation_option);
						if (tertiary_navigation_option != 0)
						{
							printf("\nEntrada inválida!");
							pause_period(2);
						}
					}
					tertiary_navigation_option = 1;
					break;

				case 0:
					break;

				default:
					printf("Não existe essa opção!\n");
					pause_period(2);
					break;
				}

			} while (secondary_navigation_option != 0);
			break;

		case 2:
			secondary_navigation_option = 1;
			do
			{
				clear_screen();
				printf("Você escolheu a opção: %d\n", var_opcao_primary);
				printf("\n");
				printf("1) iniciar\n");
				printf("0) voltar\n");
				printf("sua escolha: ");
				scanf("%d", &secondary_navigation_option);
				switch (secondary_navigation_option)
				{
				case 1:
					break;

				case 0:
					break;

				default:
					printf("Não existe essa opção!\n");
					pause_period(2);
					break;
				}

			} while (secondary_navigation_option != 0);
			break;

		case 3:	
			secondary_navigation_option = 1;
			do
			{
				clear_screen();
				printf("Você escolheu a opção: %d\n", var_opcao_primary);
				printf("\n");
				printf("1) iniciar\n");
				printf("0) voltar\n");
				printf("sua escolha: ");
				scanf("%d", &secondary_navigation_option);
				switch (secondary_navigation_option)
				{
				case 1:
					break;

				case 0:
					break;

				default:
					printf("Não existe essa opção!\n");
					pause_period(2);
					break;
				}

			} while (secondary_navigation_option != 0);
			break;

		case 4:
			secondary_navigation_option = 1;
			do
			{
				clear_screen();
				printf("Você escolheu a opção: %d\n", var_opcao_primary);
				printf("\n");
				printf("1) iniciar\n");
				printf("0) voltar\n");
				printf("sua escolha: ");
				scanf("%d", &secondary_navigation_option);
				switch (secondary_navigation_option)
				{
				case 1:
					break;

				case 0:
					break;

				default:
					printf("Não existe essa opção!\n");
					pause_period(2);
					break;
				}

			} while (secondary_navigation_option != 0);
			break;

		case 0:
			break;

		default:
			printf("Não existe essa opção!\n");
			pause_period(2);
			break;
		}
	} while (var_opcao_primary != 0);
}
