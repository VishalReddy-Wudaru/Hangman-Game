#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
//Function declaration.
void shape(int);
int main()
{
	int i,j,k,l,count1,count2,score=120,number,option,pcount,p;
	char a[30],b[30],c[30],d[30],poriginal[10],pduplicate[10];
	strcpy(poriginal,"password");//"poriginal contains the saved password. Password is copied to poriginal.
	for(pcount=0;pcount<5;pcount++)//Loop gives 5 chances to enter the password.
 {
 	printf("\t\t\t******Enter Password*****\n");
 	gets(pduplicate);//"pduplicate" contians the entered password. Entered word id copied into "pduplicate".
 	system("cls");
 	p=strcmp(poriginal,pduplicate);//Compares the entered and saved password.
	if(p==0)//If password is correct is correct it enters to the game.
  {
	
	printf("Choose an option:\n1.Play\n2.Rules\n3.Quit\n");
	scanf("%d",&option);//"option" is for selecting rules or game or exit.
	for(;option!=3;)//Loop make sure that the program to run till we want to exit the game.
   {
	switch(option)//Select whether to play game or to see rules.
    {
  	//To play game.
	case 1:system("cls");
	//To generate a random number.
	srand(time(NULL));
	number=rand()%10+1;//"number" is to select he question.
	//To select a clue and the word.
    switch(number)
    {
    	case 1: a[0]='v';a[1]='o';a[2]='l';a[3]='k';a[4]='s';a[5]='w';a[6]='a';a[7]='g';a[8]='e';a[9]='n';a[10]='\0';
    	        printf("German car company founded by Nazis\n");
    	        break;
    	case 2: a[0]='h';a[1]='o';a[2]='n';a[3]='d';a[4]='a';a[5]='\0';
    	        printf("Largest Japanese motorcycle manufacturers\n");
    	        break;
    	case 3: a[0]='b';a[1]='e';a[2]='e';a[3]='t';a[4]='l';a[5]='e';a[6]='\0';
    	        printf("Famous car model released by Volkswagen");
    	        break;
    	case 4: a[0]='b';a[1]='o';a[2]='e';a[3]='i';a[4]='n';a[5]='g';a[6]='\0';
    	        printf("Aircraft manufacturer\n");
    	        break;
		case 5: a[0]='t';a[1]='o';a[2]='y';a[3]='o';a[4]='t';a[5]='a';a[6]='\0';
		        printf("Largest car manufacturers in Japan\n");
    	        break;
		case 6: a[0]='m';a[1]='i';a[2]='t';a[3]='s';a[4]='u';a[5]='b';a[6]='i';a[7]='s';a[8]='h';a[9]='i';a[10]='\0';
		        printf("Car and aircraft manufacturer\n");
    	        break;
		case 7: a[0]='c';a[1]='o';a[2]='r';a[3]='v';a[4]='e';a[5]='t';a[6]='t';a[7]='e';a[8]='\0';
		        printf("Famous car model released by chevrolet\n");
    	        break;
		case 8: a[0]='b';a[1]='e';a[2]='n';a[3]='t';a[4]='l';a[5]='y';a[6]='\0';
		        printf("Handcrafted car manufacturer\n");
    	        break;
		case 9: a[0]='p';a[1]='o';a[2]='r';a[3]='s';a[4]='c';a[5]='h';a[6]='e';a[7]='\0';
		        printf("Sports car manufacturer\n");
    	        break;
		case 10: a[0]='m';a[1]='u';a[2]='s';a[3]='t';a[4]='a';a[5]='n';a[6]='g';a[7]='\0';
		         printf("Famous car model by ford\n");
    	         break;
		default: a[0]='t';a[1]='a';a[2]='t';a[3]='a';a[4]='\0';
		               printf("Indian car manufacturer\n");        
    }
    //To find the lenght of the word.
	i=strlen(a);
	//To tell the player how letters are there in the word.
	for(j=0,score=120;j<i;j++)
	{
		printf("_ ");
	}
	//For initializing the guessed answer(b) and typed alphabets array(d) to space for printing.
	for(j=0;j<30;j++)
	{
		b[j]=' ';
		d[j]=' ';
	}
	//To give a blank for answer.
	for(j=0;j<i;j++)
	{
		b[j]='*';
	}
	//Main logic: To find the gussed letters are correct or not.
	printf("\nEnter a letter:");
	scanf(" %c",&c[0]);/*Array "c" takes all the inputed alphabets.*/
	for(k=0,count2=0;k<i;)/*"k" coutines till the lenght of the word."i" is the lenght of the answer.count2" keeps the tracks of number of alphabets entered.*/
	{
		//To ensure the aplhabet is not entered already. If entered already it ask for new one to enter.
		for(j=0;j<=count2;j++)
		{
			if(d[j]==c[k])
			{
				printf("\nYou have already entered this letter\n\nEnter other letter:");
				scanf(" %c",&c[k]);
				j=0;
			}
	    }
			
			
		d[count2]=c[k];/*String "d" stores all the aplhabets entered by the players.*/
		for(l=0,count1=0;l<i;l++)//To find the gussed letter is correct and count how many times the alphabet is repeted in the word.
		{
		    if(a[l]==c[k])
		    {
			    b[l]=c[k];/*Array "b" stores the typed correct answer alphabets.*/
				count1++;//"count1" counts numbers same repeated alphabet in the clue.
			}
	    }
	    //If the letter matches if asks for next alphabet, if it dosen't match it's asks to enter other alphabet.
	    if(count1>0)
	    {
	    	system("cls");//To clear old things on the output screen.
	    	switch(number)//To show the clue.
            {
    	                case 1: printf("German car company founded by Nazis\n");
    	                        break;
    	                case 2: printf("Largest Japanese motorcycle manufacturers\n");
    	                        break;
    	                case 3: printf("Famous car model released by Volkswagen");
    	                        break;
    	                case 4: printf("Aircraft manufacturer\n");
    	                        break;
		                case 5: printf("Largest car manufacturers in Japan\n");
    	                        break;
		                case 6: printf("Car and aircraft manufacturer\n");
    	                        break;
		                case 7: printf("Famous car model released by chevrolet\n");
    	                        break;
		                case 8: printf("Handcrafted car manufacturer\n");
    	                        break;
		                case 9: printf("Sports car manufacturer\n");
    	                        break;
		                case 10: printf("Famous car model by ford\n");
    	                         break;
		                default: printf("Indian car manufacturer\n");        
            }
            shape(score);
	    	k=k+count1;
	    	printf("Your word looks like this: %s\n\t\t\t\t\t(Reamining Letters %d, Chances %d)\n",b,i-k,(score/20)+1);
	    	if(k<i)
	    	{
	    		printf("You've entered: %s\n\nEnter next letter:",d);
	    		scanf(" %c",&c[k]);
	    		count2++;
	    	}
	    }
	    else
	    {
	    	system("cls");//To clear old things on the output screen.
	    	switch(number)//To show the clue.
            {
    	                case 1: printf("German car company founded by Nazis\n");
    	                        break;
    	                case 2: printf("Largest Japanese motorcycle manufacturers\n");
    	                        break;
    	                case 3: printf("Famous car model released by Volkswagen");
    	                        break;
    	                case 4: printf("Aircraft manufacturer\n");
    	                        break;
		                case 5: printf("Largest car manufacturers in Japan\n");
    	                        break;
		                case 6: printf("Car and aircraft manufacturer\n");
    	                        break;
		                case 7: printf("Famous car model released by chevrolet\n");
    	                        break;
		                case 8: printf("Handcrafted car manufacturer\n");
    	                        break;
		                case 9: printf("Sports car manufacturer\n");
    	                        break;
		                case 10: printf("Famous car model by ford\n");
    	                         break;
		                default: printf("Indian car manufacturer\n");        
            }
	    	printf("\nWrong Guess\n");
	    	score=score-20;
	    	//Prints the character.
	    	shape(score);
	    	printf("\nYour word looks like this: %s\n\t\t\t\t\t(Remaining Letters %d, Chances %d)",b,i-k,(score/20)+1);
	    	printf("\nYou've entered: %s\n\nEnter other letter:",d);
	    	scanf(" %c",&c[k]);
	    	count2++;
	    }
	    //If chances are done it exits the loop.
	    if(score==0)
	    {
	    	k=33;
	    }
	    
	    
	
	}
	
	    //prints the game status win or loose.
     	if(score>0)
	    {
	    	printf("\n\t\t\t\tYOU WON");
	    }
	    else//Prints finall hangman if everything is wrong.
	    {
	    	system("cls");
	    	printf("_________\n");

            printf("|   |\n");

            printf("|   O\n");

            printf("|  /|\\ ");

            printf("\n|   |\n");

            printf("|  / \\\n");

            printf("|\n");
            
            printf("---------\n\n");
	    	printf("Better luck next time\nAnswer:%s",a);
	    }
	    getch();
	    system("cls");
		printf("Choose an option:\n1.Play\n2.Rules\n3.Quit\n");
		scanf("%d",&option);
		break;
		//To see the rules.
	case 2:system("cls");
	printf("\t\t\t\tGAME  RULES\n");
	printf("Play individually or in groups.\nPlayer should guess the answer.");
	printf("\nFor every word there is a clue and the number of alphabets in the letter are specified.");
	printf("\nPlayer should type the alphabet, which he thinks would be the word.");
	printf("\nChances:7\nEnjoy playing the game.\n\t\t\t\tPress any key");
	getch();
	system("cls");
	printf("Choose an option:\n1.Play\n2.Rules\n3.Quit\n");
	scanf("%d",&option);break;    
    }
   }
   pcount=6;//If password is correct the loop ends.
  }
  else//If the password is wrong it gives chance to re enter the password and gives clue.
  {
  	printf("Wrong Guess, try again\nHint:Be cool, it's just a game.\n");
  }
 }
 system("cls");
 if(pcount==5)
 {
 	printf("You can't play the game.");
 }
 return 0;
	
	
}



void shape(int n)//Is the function that prints the hangman.
{
	switch(n)
	{
		//Prints hangman for first wrong guess.
		case 100: printf("_________ \n");

    printf("| \n");

    printf("| \n");

    printf("| \n");

    printf("| \n");

    printf("| \n");

    printf("| \n");break;
    //Prints hangman for second wrong guess.
		case 80: printf("--------- \n\n");

        printf("_________\n");

        printf("|   |\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");break;
        //Prints hangman for third wrong guess.
		case 60:printf("---------\n\n");


        printf("_________\n");

        printf("|   |\n");

        printf("|   o\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");break;
        //Prints hangman for fourth wrong guess.
		case 40: printf("---------\n\n");

        printf("_________\n");

        printf("|   |\n");

        printf("|   o\n");

        printf("|   |\n");

        printf("|\n");

        printf("|\n");

        printf("|\n");break;
        //Prints hangman for fifth wrong guess.
		case 20:printf("---------\n\n");

        printf("_________\n");

        printf("|   |\n");

        printf("|   o\n");

        printf("|  /|\\ ");

        printf("\n|\n");

        printf("|\n");

        printf("|\n");

        printf("---------\n\n");break;
        //Prints hangman for sixth wrong guess.
		case 0:printf("_________\n");

        printf("|   |\n");

        printf("|   O\n");

        printf("|  /|\\ ");

        printf("\n|   |\n");

        printf("|\n");

        printf("|\n");
        
        printf("---------\n\n");
	}
}


