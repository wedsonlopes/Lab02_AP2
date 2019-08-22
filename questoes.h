
#ifndef _QUESTOES_
#define _QUESTOES_

int menu_opcoes()
{
	printf("\n");
	printf("1)Questão 1 e Questão 2 da lista.\n");
	printf("2)Questão 3 da lista.\n");
	printf("3)opção(c).\n");
	printf("4)opção(d).\n");
	printf("0)exit.\n");	
}


void pause_period(int time_var){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        sleep(time_var);
    #endif

    #if defined(_WIN32) || defined(_WIN64)/*Using windows OS this function requires the library windows.h inclusion*/
        sleep(5);
    #endif
}

void clear_screen(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)/*Using windows OS this function requires the library conio.h inclusion*/
        system("cls");
    #endif
}
#endif