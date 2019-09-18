#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

struct student{
    int id[20];
    char *name[20];
    int add[20];
    int approved[20];
    int type[20];
}*s;
struct marks{
    int total[20];
    float average[20];
}*m;
union rank{
    char *e[20];
}*r;


void goforcheck(int person){
    int pref,ch;
    printf("Please enter your preference here!\n1.Gamer\t2.Developer\t3.Writer\n");
    scanf("%d",&ch);
    switch(ch){
        randomize();

        case 1:{
            srand(time(0));
            s->type[person] = rand()%10;
            printf("\n Here You Go! Your id is %d\n",s->type[person]);
            break;
        }
        case 2:{
            srand(time(0));
            s->type[person] = rand()%100;
            printf("\n Here You Go! Your id is %d",s->type[person]);
            break;
        }
        case 3:{
            srand(time(0));
            s->type[person] = rand()%10000;
            printf("\n Here You Go! Your id is %d",s->type[person]);
            break;
            }
        default:    break;
    }
    printf("\nWe welcome you to our group !, Wait for the approval \t%s! ",s->name[person]);
    approval(person);
}



void approval(int appid){
    s->approved[appid] = 1;
}

int main(void){
    int i,choice[20];;
    s = (struct student*)malloc(sizeof(struct student));
    m = (struct marks*)malloc(sizeof(struct marks));
    r = (union rank*)malloc(sizeof(union rank));
    printf("\n Enter total number of users for the New Fb Group \n");
    int n;
    scanf("%d",&n);
    system("cls");
    printf("\nPlease enter their Name, Id(temp), Percentage");
    for(i=0;i<n;i++){
    scanf("%s",&s->name[i]);
    scanf("%d",&s->id[i]);
    scanf("%d",&m->total[i]);
    (*r).e[i] = "Good";
    system("cls");
        printf("Name   :%s  \tId   :%d\tPercentage  :%d%\tRank   :%s\n",s->name[i],s->id[i],m->total[i],r->e[i]);
        printf("\nEnter preference.. want to join our community fb page? \npress 1 if you're willing otherwise press 2");
        scanf("%d",&choice[i]);
        if(choice[i]==1){
            s->add[i] = 1;
            goforcheck(i);
            system("cls");
        }
        else{
                continue;system("cls");
        }
    }

    printf("\nFinal approved list !!!! \n");
    printf("\nName\t\tStatus(0/1)\t\tId(Gamer/Dev/Writer\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    //printf("+               Person Name           +            Status                          +            +            Type+\n");
    for(int i=0;i<n;i++){
        printf("%s\t\t%d\t\t%d\n",s->name[i],s->approved[i],s->type[i]);
    }
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n Thank you visit again!");
}
















