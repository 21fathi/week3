# include <stdio.h>
#include <stdlib.h>
int log_in(int,int,int);
int main()
{
    int Id=12345,Pass=6789,trials=3;
    if(log_in(Id,Pass,trials)){
        printf("Welcome!");
    }else{
        printf("Try Again ");
    }
}
int log_in(int ID,int pass,int trials){
    int id,password;
    printf("ID : ");
    scanf("%d",&id);
    printf("Password : ");
    scanf("%d",&password);
    if(pass==password&&id==ID){
        return 1;
    }else if(trials>0){
        printf("Try Again!\n");
        log_in(ID,pass,--trials);
    }else{
        return 0;
    }
}
