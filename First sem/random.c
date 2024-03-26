#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int randomNumber(int num){
    int temp = rand();
    int random= temp%num+1;
    return random;
}

void playrandomgame() {

    printf("\n******Random number Game starting*****");
    printf("\n******Guess number between 1 to 100******");
    printf("\n****You have a 10 Chance to Win game*****\n");
    int temp=100;
    int random =randomNumber(temp);
    int user;
    int chance=10;
    int count=0;
    while(1){
        printf("\nGuess number:");
        scanf(" %d",&user);

        if(chance == 0){
            printf("\n**tu jare he haar gaya tu**\n");
            break;
        }

        if(user==random){
            printf("\nYOU CAN DO IT YOU FIND it\n");
            printf("YOU CAN find it in %d-TRY\n",count);
            break;
        }
        else if(user>100 || user<0){
            count++;
            chance = chance-1;            
            printf("\nout of range ");
            printf("[CHANCE LEFT : %d]",chance);
        }
        else if(user>random){
            count++;
            chance = chance-1;            
            printf("try to Guess small number ");
            printf("[CHANCE LEFT : %d]",chance);
        }
        else if(user<random){
            count++;
            chance = chance-1;            
            printf("try to Guess big number ");
            printf("[CHANCE LEFT : %d]",chance);
        }
        
    }
}

void rockpaperscissor(){
    char user;
        printf("\n******rock paper scissors starting******");
        printf("\n******** R-rock ********");
        printf("\n******** p-paper ********");
        printf("\n******** s-scissor ********");
        printf("\n******** q-quit ********");

        int draw = 0;
        int win  = 0;
        int lose = 0;

        while(1){
            int temp = rand();
            int random= temp%3;   
            char computer[3] = {'r','p','s'};
            printf("\n\nChoose->");
            scanf(" %c", &user);

            
            // input validation

            if(user != 'r' && user != 'p' && user != 's' && user != 'q'  ){
                printf("\n YOU CHOOSING WRONG OPTION ");
            }
            
            if(user == 'q' || user == 'Q'){
                break;
            }
            // yaha se win or lose check hoga

            if(win>=5){
                printf("\n*****YOU WON GAME*****");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]\n",win,lose,draw);
                break;
            }
            else if(lose>= 5 ){
                printf("\n*****YOU LOSE THE GAME*****");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]\n",win,lose,draw);
                break;
            }else if(draw >=5){
                printf("\n*****DRAW HO GAYA*****");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]\n",win,lose,draw);
                break;
            }

            
            if(user== 'r' && computer[random] == 'r'){
                draw++;
                printf("You choose [ROCK] == computer[ROCK]");
                printf("\n match drow");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]",win,lose,draw);
                

            }
            else if(user== 'r' && computer[random] == 'p'){
                lose++;
                printf("You choose [ROCK] < computer[PAPER]");
                printf("\n paper beat rock");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]",win,lose,draw);

            }
            else if(user== 'r' && computer[random] == 's'){
                win++;
                printf("you choose [ROCK] > computer[SCISSORS]");
                printf("\n rock beat SCISSORS");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]",win,lose,draw);

            }     

            // user= paper
            else if(user== 'p' && computer[random] == 'p'){
                draw++;
                printf("you choose [paper] == computer[paper]");
                printf("\n match drow");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]",win,lose,draw);

            }
            else if(user== 'p' && computer[random] == 'r'){
                win++;
                printf("you choose [paper] > computer[rock]");
                printf("\n paper beat rock");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]",win,lose,draw);

            }
            else if(user== 'p' && computer[random] == 's'){
                lose++;
                printf("you choose [paper] < computer[SCISSORS]");
                printf("\n SCISSORS beat paper ");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]",win,lose,draw);

            }     

            // user ==  scissors   
            else if(user== 's' && computer[random] == 's'){
                draw++;
                printf("you choose [SCISSORS] == computer[SCISSORS]");
                printf("\n match drow");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]",win,lose,draw);
            }
            else if(user== 's' && computer[random] == 'p'){
                win++;
                printf("you choose [SCISSORS] > computer[PAPER]");
                printf("\n SCISSORS beat paper");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]",win,lose,draw);

            }
            else if(user== 's' && computer[random] == 'r'){
                lose++;
                printf("you choose [SCISSORS] < computer[ROCK]");
                printf("\n rock beat SCISSORS");
                printf(" WIN[%d] LOSE[%d]  DRAW[%d]",win,lose,draw);
                
            }
            
        }

}

void gameRule(){
    printf("*************RANDOM NUMBER GAME RULE********************");
    printf("\n(1)You have to Guess Number From 1 to 100");
    printf("\n(2)if you want to quit game enter 0");
    printf("\n\n*************ROCK PAPER SESSIOR GAME RULE**************");
    printf("\n(1)You have a 3 option rock paper scissor ");
    printf("\n(2)if you want to quit game enter q");


}

void whoami(){
    printf("\n********************************WHO AM I*******************************");
    printf("\n****************************Name:Rahul gurjar**************************");
    printf("\n*******************skill: c,javaScript,git&github,more*****************");    

}

void gameOption(){
    char option;
    while(1){
        printf("\n********choose Game******");
        printf("\nR - random number game");
        printf("\np - Rock-paper-sesior game");
        printf("\nq - back one step");
        printf("\nChoose:");
        scanf(" %c",&option);

        if(option== 'r'){
            playrandomgame();
        }
        else if(option == 'p'){
            rockpaperscissor();
        }
        else if(option == 'q'){
            break;
        }
    }
}

void main(){
    srand(time(NULL));

    printf("\n************************--GAME DEVLOPED BY RAHUL--************************");

    char input; 
    while(1){
        printf("\n\ns - New Game");
        printf("\nr -Game rule ");
        printf("\nw - Who am i ");
        printf("\nq - Exit");
        printf("\nwhat you want:");
        scanf(" %c",&input);

        // if(input == 'r'){
        //     gameRule();
        // }
        if(input=='s'){
            gameOption();
        }
        
        else if(input== 'q'){
            break;
        }
        else if(input=='w'){
            whoami();
        }else if(input=='r'){
            gameRule();
        }     
    }    
    getch();
}