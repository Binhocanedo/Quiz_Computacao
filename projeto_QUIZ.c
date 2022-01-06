#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//prototipos de funções
void MenuMateria();
void algoritmos();
void bancoDados();
void informatica();
void mostrarPergunta(int numQuestao);
void validarPontuacao(int numQuestao, char resposta);

//variaveis globais
char nomeJogador[30], nomeJogador2[30];
int  pontuacao=0;

//funções principal
int main(){
	//configuração
	setlocale(LC_ALL,"portuguese");
	FILE *file;
	
	//variaveis
	int opcao;
	char ranking[30];
	
	//inicio int	 
		
		printf("\t\t\t\t\t\t\t\t\t /$$$$$$$                                /$$    /$$ /$$                 /$$           \n");
		printf("\t\t\t\t\t\t\t\t\t| $$__  $$                              | $$   | $$|__/                | $$           \n");
		printf("\t\t\t\t\t\t\t\t\t| $$  \ $$  /$$$$$$  /$$$$$$/$$$$        | $$   | $$ /$$ /$$$$$$$   /$$$$$$$  /$$$$$$ \n");
		printf("\t\t\t\t\t\t\t\t\t| $$$$$$$  /$$__  $$| $$_  $$_  $$      |  $$ / $$/| $$| $$__  $$ /$$__  $$ /$$__  $$ \n");
		printf("\t\t\t\t\t\t\t\t\t| $$__  $$| $$$$$$$$| $$ \ $$ \ $$         \\  $$ $$/ | $$| $$  \ $$| $$  | $$ | $$  \\ $$ \n");
		printf("\t\t\t\t\t\t\t\t\t| $$  \ $$| $$_____/| $$ | $$ | $$         \\  $$$/  | $$| $$  | $$| $$  | $$|$$   | $$ \n");
		printf("\t\t\t\t\t\t\t\t\t| $$$$$$$/|  $$$$$$$| $$ | $$ | $$         \\  $/   | $$| $$  | $$|  $$$$$$$|  $$$$$$/ \n");
		printf("\t\t\t\t\t\t\t\t\t|_______/  \_______/|__/ |__/ |__/           \\_/    |__/|__/  |__/ \_______/ \______/ \n");
		printf("\n");
		printf("\n");
		
		printf("\t\t\t\t\t   /$$$$$$            /$$                       /$$                 /$$$$$$$$         /$$                                             /$$$$$$ /$$              \n");
		printf("\t\t\t\t\t   /$$$$$$            /$$                       /$$                 /$$$$$$$$         /$$                                             /$$$$$$ /$$              \n");
		printf("\t\t\t\t\t | $$  \\ $$ /$$   /$$ /$$ /$$$$$$$$        /$$$$$$$  /$$$$$$       | $$    /$$$$$$  /$$$$$$    /$$$$$$   /$$$$$$$                      | $$ /$$$$$$   /$$   /$$\n");
		printf("\t\t\t\t\t | $$  | $$| $$  | $$| $$|____ /$$/       /$$__  $$ |____  $$      | $$$$$|____  $$|_  $$_/   /$$__  $$ /$$_____/       /$$$$$$        | $$|_  $$_/  | $$  | $$\n");
		printf("\t\t\t\t\t | $$  | $$| $$  | $$| $$   /$$$$/       | $$  | $$  /$$$$$$$      | $$__/ /$$$$$$$  | $$    | $$$$$$$$| $$            |______/        | $$  | $$    | $$  | $$\n");
		printf("\t\t\t\t\t | $$/$$ $$| $$  | $$| $$  /$$__/        | $$  | $$ /$$__  $$      | $$   /$$__  $$  | $$ /$$| $$_____/| $$                            | $$  | $$ /$$| $$  | $$\n");
		printf("\t\t\t\t\t |  $$$$$$/|  $$$$$$/| $$ /$$$$$$$$      |  $$$$$$$|  $$$$$$$      | $$  |  $$$$$$$  |  $$$$/|  $$$$$$$|  $$$$$$$                     /$$$$$$|  $$$$/|  $$$$$$/\n");
		printf("\t\t\t\t\t  \\____ $$$ \______/ |__/|________/       \\_______/ \\_______/      |__/   \\_______/   \\___/   \\_______/ \\_______/                    |______/ \\___/   \\______/ \n");
		printf("\t\t\t\t\t       \\__/                                                                                                                                                    \n");
		printf("\n");
		
		printf("\n");
		
		printf("\t\t\t\t\t\t\t\t\t\t\t\t\tNOME DO JOGADOR: ");
		gets(nomeJogador);
		
	
		do{
			MenuMateria();
			scanf("%i", &opcao);
			
			switch(opcao){
				case  1:
					bancoDados();
				break;
		
				case 2:
					informatica();
				break;
				
				case 3:
					algoritmos();
				break;
				
				case 4:
					system("cls");
					printf("\n\n\n                           Sua pontuação atual é: %i\n", pontuacao);
					printf("RANKING:\n\n");
					
					//manipulando arquivo
					file=fopen("ranking.txt", "r");
					
					if(file == NULL){
						printf("O ranking não pode ser aberto!!!\n");
						break;
					}
					
					while(fgets(ranking, 30, file) != NULL){
						printf("%s", ranking);
					}
					
					fclose(file);
					//arquivo fechado
					
					getch();
				break;
				
				case 5:
					system("cls");
					printf("Agradecimentos especiais para a professora Angelina\n\n");
					printf("                         Este jogo foi desenvolvido por:\n"
					"                                       Wesley Vieira de Almeida\n"
					"                                       Fábio Canedo Leão\n");
					getch();
				break;
				
				case 6:
					system("cls");
					printf("%s, sua pontuaÃ§Ã£o foi de %i pontos.\n\n", nomeJogador, pontuacao);
					printf("\n\n\n\n                            Obrigado por jogar!!\n\n\n");
					
					//manipulando arquivo
					file=fopen("ranking.txt", "a");
					fprintf(file, "%s  |  %i\n", nomeJogador, pontuacao);
					fclose(file);
					//arquivo fechado
					return 0;
				break;
				
				default:
					system("cls");
					printf("Essa opÃ§Ã£o nÃ£o existe. Digite um valor vÃ¡lido: ");
					getch();
				break;
			}//fim switch opcao
			
		}while(opcao != 6);
		
	return 0;
}// fim funÃ§Ã£o principal

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//funÃ§Ã£o banco de dados
void bancoDados(){
	int i, primeiraQuestao=4, ultimaQuestao=6;
	char resposta;
	
	system("cls");	
	printf("\t\t\t\t\t\t\t\t\t\t   ____                              _        _____            _           \n");
	printf("\t\t\t\t\t\t\t\t\t\t  |  _ \\                            | |      |  __ \\          | |          \n");
	printf("\t\t\t\t\t\t\t\t\t\t  | |_) | __ _ _ __   ___ ___     __| | ___  | |  | | __ _  __| | ___  ___ \n");
	printf("\t\t\t\t\t\t\t\t\t\t  |  _ < / _` | '_ \\ / __/ _ \\   / _` |/ _ \\ | |  | |/ _` |/ _` |/ _ \\/ __|\n");
	printf("\t\t\t\t\t\t\t\t\t\t  | |_) | (_| | | | | (_| (_) | | (_| |  __/ | |__| | (_| | (_| | (_) \\__ \\\n");
	printf("\t\t\t\t\t\t\t\t\t\t  |____/ \\__,_|_| |_|\\___\\___/   \\__,_|\\___| |_____/ \\__,_|\\__,_|\\___/|___/\n");
	printf("\n\n");
	printf("\t\t\t\t\t\t\t\t\t\tREGRAS DO JOGO: \n");
	printf("\t\t\t\t\t\t\t\t\t\t- SÃO 3 PERGUNTAS SOBRE A MATERIA\n\t\t\t\t\t\t\t\t\t\t- CADA ACERTO SOMARA UM PONTO E CADA ERRO VOCE PERDERA UM PONTO\n\t\t\t\t\t\t\t\t\t\t- NÃO TEM TEMPO PARA RESPONDER, ENTÃO PENSE BEM ANTES\n\t\t\t\t\t\t\t\t\t\t- E BOA SORTE ---> %s", nomeJogador);
	getch();
	system("cls");
	
	for(i=primeiraQuestao; i<=ultimaQuestao; i++){
		validarResposta(i, resposta);	
		validarPontuacao(i, resposta);
	}				
				
}//fim funcao banco de dados

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//funÃ§Ã£o sistemas de informacao
void informatica(){
	int i, primeiraQuestao=7, ultimaQuestao=9;
	char resposta;
	
	system("cls");
	printf("\t\t\t\t\t\t\t\t\t\t   _____        __                       __  _   _           \n");
	printf("\t\t\t\t\t\t\t\t\t\t  |_   _|      / _|                     /_/ | | (_)          \n");
	printf("\t\t\t\t\t\t\t\t\t\t    | |  _ __ | |_ ___  _ __ _ __ ___   __ _| |_ _  ___ __ _ \n");
	printf("\t\t\t\t\t\t\t\t\t\t    | | | '_ \\|  _/ _ \\| '__| '_ ` _ \\ / _` | __| |/ __/ _` |\n");
	printf("\t\t\t\t\t\t\t\t\t\t   _| |_| | | | || (_) | |  | | | | | | (_| | |_| | (_| (_| |\n");
	printf("\t\t\t\t\t\t\t\t\t\t  |_____|_| |_|_| \\___/|_|  |_| |_| |_|\\__,_|\\__|_|\\___\\__,_|\n");
	printf("\n\n");
	printf("\t\t\t\t\t\t\t\t\t\tREGRAS DO JOGO: \n");
	printf("\t\t\t\t\t\t\t\t\t\t- SÃO 3 PERGUNTAS SOBRE A MATERIA\n\t\t\t\t\t\t\t\t\t\t- CADA ACERTO SOMARA UM PONTO E CADA ERRO VOCE PERDERA UM PONTO\n\t\t\t\t\t\t\t\t\t\t- NÃO TEM TEMPO PARA RESPONDER, ENTÃO PENSE BEM ANTES\n\t\t\t\t\t\t\t\t\t\t- E BOA SORTE ---> %s", nomeJogador);
	getch();
	system("cls");
				
	//inicio questao 1
		//repete enquanto resposta for diferente das alternativa
	for(i=primeiraQuestao; i<=ultimaQuestao; i++){
		validarResposta(i, resposta);	
		validarPontuacao(i, resposta);	
	}
					
}//fim funcao informatica

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//funÃ§Ã£o algoritmos
void algoritmos(){
	int i, primeiraQuestao=1, ultimaQuestao=3;
	char resposta;
	
	system("cls");
	printf("\t\t\t\t\t\t\t\t\t\t             _                  _ _                       \n");
	printf("\t\t\t\t\t\t\t\t\t\t      /\\   | |                (_) |                      \n");
	printf("\t\t\t\t\t\t\t\t\t\t     /  \\  | | __ _  ___  _ __ _| |_ _ __ ___   ___  ___ \n");
	printf("\t\t\t\t\t\t\t\t\t\t    / /\\ \\ | |/ _` |/ _ \\| '__| | __| '_ ` _ \\ / _ \\/ __|\n");
	printf("\t\t\t\t\t\t\t\t\t\t   / ____ \\| | (_| | (_) | |  | | |_| | | | | | (_) \\__ \\\n");
	printf("\t\t\t\t\t\t\t\t\t\t  /_/    \\_\\_|\\__, |\\___/|_|  |_|\\__|_| |_| |_|\\___/|___/\n");
	printf("\t\t\t\t\t\t\t\t\t\t               __/ |                                     \n");
	printf("\t\t\t\t\t\t\t\t\t\t              |___/                                      \n");
	printf("\n\n");
	printf("\t\t\t\t\t\t\t\t\t\tREGRAS DO JOGO: \n");
	printf("\t\t\t\t\t\t\t\t\t\t- SÃO 3 PERGUNTAS SOBRE A MATÉRIA\n\t\t\t\t\t\t\t\t\t\t- CADA ACERTO SOMARA UM PONTO E CADA ERRO VOCE PERDERA UM PONTO\n\t\t\t\t\t\t\t\t\t\t- NÃO TEM TEMPO PARA RESPONDER, ENTÃO PENSE BEM ANTES\n\t\t\t\t\t\t\t\t\t\t- E BOA SORTE ---> %s", nomeJogador);
	getch();
	system("cls");
				
	//inicio questao 1
		//repete enquanto resposta for diferente das alternativa
	for(i=primeiraQuestao; i<=ultimaQuestao; i++){
		validarResposta(i, resposta);
		validarPontuacao(i, resposta);
	}
					
} //fim funcao algoritmos

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//funÃ§Ã£o menu
void MenuMateria(){
	
	
	system("cls");
	printf("\t\t\t\t\t\t\t\t\t\t\t --------------------------------------------------- \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t|                      MENU                         |\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t|      SELECIONE UMA MATERIA PARA JOGAR             |\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t|           [1] BANCO DE DADOS                      |\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t|           [2] INFORMATICA                         |\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t|           [3] ALGORITMO                           |\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t|           [4] ULTIMAS PONTUACOES                  |\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t|           [5] CREDITOS                            |\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t|           [6] SAIR                                |\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t --------------------------------------------------- \n");
	printf("\t\t\t\t\t\t\t\t\t\t\tDIGITE UM VALOR: ");
}//fim funÃ§Ã£o menu

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//funÃ§Ã£o mostrar perguntas
void mostrarPergunta(int numQuestao){	

	switch (numQuestao){
		case 1:
			
			printf("Qual função imprime algo no terminal em C ?\n"
			"[A] printf\n"
			"[B] scanf\n"
			"[C] gets\n"
			"[D] system\n"
			"Resposta: ");
		break;
			
		case 2:
			printf("São as estruturas de repetiÃ§Ãµes em C ?\n"
			"[A] Do..While, if, case\n"
			"[B] If, for, while\n"
			"[C] for, while, Do..While\n"
			"[D] case, for, Do..While\n"
			"Resposta: ");
		break;
			
		case 3:
			printf("Para que serve a sintaxe ELSE IF em C ?\n"
			"[A] Para quebrar a continuidade da IF\n"
			"[B]Quando existir mais de uma opÃ§Ã£o envolvendo o IF\n"
			"[C] Para verificar a operaÃ§Ã£o logica do IF\n"
			"[D] Funciona como um ELSE alternativo\n"
			"Reposta: ");
		break;
			
		case 4:
			printf("Qual modelo você utiliza para estruturar o MER ?\n"
			"[A] DEM\n"
			"[B] TED\n"
			"[C] DER\n"
			"[D] MER\n"
			"Resposta: ");
		break;
			
		case 5:
			printf("Qual comando da linguagem SQL você cria uma tabela ?\n"
			"[A] CREATE TABLE\n"
			"[B] CREATY TABLE\n"
			"[C] CRIAR TABELA\n"
			"[D] DELETE TABLE\n"
			"Resposta: ");
		break;
			
		case 6:
			printf("Quantas formas normais são necessárias aplicar no seu Banco de Dados ?\n"
			"[A] 4\n"
			"[B] 5\n"
			"[C] 2\n"
			"[D] 3\n"
			"Resposta: ");
		break;
		
		case 7:
			printf("Em qual guia fica a opção de gravar MACROS no excel?\n"
			"[A] Inserir\n"
			"[B] Dados\n"
			"[C] Desenvolvedor\n"
			"[D] PÃ¡gina Inicial\n"
			"Resposta: ");
		break;
		
		case 8:
			printf("Atalho que formata um número qualquer para porcentagem:\n"
			"[A] Ctrl + Shift + #\n"
			"[B] Ctrl + Shift + _\n"
			"[C] Ctrl + +\n"
			"[D] Ctrl + Shift + %% \n"
			"Resposta: ");
		break;
		
		case 9:
			printf("Extensão de arquivo correta quando gravamos macros no Excel:\n"
			"[A] xls\n"
			"[B] xlm\n"
			"[C] xlg\n"
			"[D] xlt\n"
			"Resposta: ");
		break;
	}//fim switch pergunta
	
}//fim funÃ§Ã£o mostrar perguntas

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//funÃ§Ã£o de validar pontuaÃ§Ã£o
void validarPontuacao(int numQuestao, char resposta){
	char respostas[9]="ACBCADCDB";
	
	if(resposta == respostas[numQuestao-1]){
		system("cls");
		printf("Resposta CERTA !\n\n");
		getch();
		pontuacao += 1;
		system("cls");
	}
	else{
			system("cls");
			printf("Resposta ERRADA ! \n\n");
			getch();
			pontuacao -= 1;
			system("cls");
	}
}//fim funÃ§Ã£o de validar pontuaÃ§Ã£o
validarResposta(int cp_i, char cp_resposta){
	do{
			mostrarPergunta(cp_i);
			scanf(" %c", &cp_resposta);
			cp_resposta = toupper(cp_resposta);
						 
			if(cp_resposta < 65 || cp_resposta > 68){
				printf("\nRESPOSTA INVÁLIDA ! Tente novamente.\n\n");
				system("pause");
				system("cls");
			}
		}while(cp_resposta <65 || cp_resposta > 68);
		
		return cp_resposta;
}
