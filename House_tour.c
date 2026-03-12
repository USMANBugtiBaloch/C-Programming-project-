#include<stdio.h>
#include<stdlib.h>

void option1(char ch[20] );
void option2(char ch[20] );
void option3(char ch[20] );
void option4(char ch[20] );

int main(){
	
	int a,b;	char ch[20];
	
	printf("Enter your name :");
	scanf("%s",ch);
	printf("your name is %s\n",ch);
	printf("Welcome %s TO my house \n",ch);
	printf("\n------------------------\n");
	
	do
	
	{
	
	printf("House Tour \n");
	printf("1. kitchen \n");
	printf("2. Living Room \n");
	printf("3. Upstairs \n");
	printf("4. Guset Room \n");	
	printf("5. Exit \n");
	printf("\n______________________\n");

	int option;
	
	
	if(scanf(" %d",&option)!=1){
		printf("Not an corrent input.\n");
		while(getchar() != '\n');
    continue;
    
	}

	if (option == 1 ){
		
	printf("You selected option 1 \n");
	printf("\n------------------------\n");
	option1(ch);
		
	}
	else if (option == 2){
	
	printf("Your Selected option 2 \n");
	printf("\n------------------------\n");
	option2(ch);
	
	} 
	else if (option == 3){
		
	printf("you select option 3 \n");
	printf("\n------------------------\n");	
	option3(ch);
	
	}
	else if (option == 4){
		
	printf("you select option 4 \n");
	printf("\n------------------------\n");		
	option4(ch);
	
	}
	
	else if (option==5){
	printf("Thnak for being here \n");
	printf("\n________________________________\n");
	break;
	
	}
	
	else printf("Invalid Option \n");
	
}	while (1);

	printf("exit program \n");
} 

void option1(char ch[20]){
	
	char yn;
	int op;
	
	printf("Welcome to kitcher mr.%s \n", ch);
	printf("There are many boxes want to open \n");
	printf("\n------------------------\n");
	
	do
	{
	printf("Box 1\n");
	printf("Box 2\n");
	printf("Box 3\n");
	printf("Box 4\n");	
	
	if(scanf(" %d",&op)!=1){
		
	printf("Not an corrent input.\n");
	while(getchar() != '\n'); 
    continue;
}
	
	if (op == 1){
		
		printf("There are spoons \n ");
	}
		else if (op == 2 )
	{
		
	printf("there are plate and glass plus cups \n");
	} 	
	
	else if (op ==3 ){
		printf("there are cash of 5k rupees \n");
		printf("dont steal \n");
		
		char steal;
		printf("Want to steal ? \n");
		scanf(" %c",&steal);
			if(steal == 'Y'|| steal == 'y'){
		 
			printf("Gets some manner and dont steal again \n");
		}
			else 
					{
						printf("Good you Have manners \n");
					}
					
	} 
	
	 else
	 
	 	{
		   printf("Invalid box\n");
        }
		
	 printf("Do you want to open another box? Y/N: ");
        scanf(" %c",&yn); 
	
}while(yn == 'y'|| yn == 'Y');	
	
	printf("Exit kitchen \n");
	
}


void option2(char ch[20]){
	
	char yn;
	int op;
	
		printf("Welcome to Living Room Mr.%s \n", ch);
		printf("\n------------------------\n");
		printf("There is nothing special \n");
		printf("2 table and 12 chairs with sofa \n");
		printf("There is a sercet \n");
		printf("\n------------------------\n");
			
		do
		
		{
			
		printf("1. MY Book Stall Anybook For Free \n");
		printf("2. Photos \n");
		printf("3. Box \n");
		printf("4. Exit \n");
	//	scanf("%d", &op);
			if(scanf(" %d",&op)!=1){
		printf("Not an corrent input.\n");
		while(getchar() != '\n');
    continue;
}
	
			switch(op){
				case 1: {
				//	break;
				
				printf("Every Book is downloadable  \n");
				char pp;
				printf("Want Some Books to Read or Download ? Y/N \n");
				scanf(" %c",&pp);
					if(pp=='y'|| pp=='Y'){
						printf("This Website is for you \n");
						system("cmd /c start https://archive.org/details/books \n");
						printf("Open this website for books:\n");
						printf("Click Me if using mobile \n");
						printf("https://archive.org/details/books\n");
					} else printf("you miss that \n ");
					
						break;
					}
					case 2 :{
	
						printf("There is a family photo\n  \n");
						system("cmd /c start https://www.pexels.com/search/family/ \n");
						printf("Open this website for photos:\n");
						printf("Click Me if using mobile \n");
						printf("https://www.pexels.com/search/family/\n");	
							
						printf("Sharam Karo dusro ky photos nahi dekho \n");
						break;
					} 
					
					case 3 : {
						printf("These are my chairs and My tables \n");
						for(int i=1; i<=5;i++){
							printf("table %d \n",i);
								for (int j=1; j<=3;j++){
									printf("chairs %d \n",j);
							
							}
						}
						break;
					}
					case 4 :{
							printf("Thank for being here \n");
								printf("\n------------------------\n");
							return;
						}

				default : printf("invalid option \n");
				
			}
			
			 printf("Do you want to open another box? Y/N: ");
        scanf(" %c",&yn); 
			
		}while(yn == 'y'|| yn == 'Y');	
	
	printf("Exit Living Room \n");
}

void option3(char ch[20]){
	int option3;
	char ee;

	
			printf("Welcome to Upstairs Mr.%s \n", ch);
			printf("There are two Rooms and one kitchen \n");
			
			do
			
			{
					char ch;
			printf("1. 1st room \n");
			printf("2. 2nd room \n");
			printf("3. For kitchen \n");
			printf("4. Exit \n");
			printf("Want to check the Room or kitchen \n");
			printf("\n------------------------\n");
			printf("Enter where to go : ");
			scanf("%d",&option3);
		
			
			switch(option3){
				case 1 :{
					printf("This is my brother rooms \n");
					break;
				}
				case 2 :{
					 printf("2nd room is for his childerns \n");
					break;
				}
				case 3 :{
					printf("This is the kitchten \n");
					break;
				}
				case 4 : {
					printf("Thank for being here \n");
					printf("\n------------------------\n");
					return;
				
				}
			
			default : printf("invalid number \n");
			break;
			}
			
				printf("Want to run again 'Y/N' :");
				scanf(" %c",&ee);
				
				}	while (ee == 'y'||ee == 'Y');
				
				
					printf("Exit Upstair \n");
			
		}



void option4(char ch[20]){
		printf("Welcome to Guest Room Mr.%s \n", ch);
		printf("\n------------------------\n");
	return;

	}

