
#include<stdio.h>
struct student{
    int roll;
    float marks;
};
void high(struct student *s){
    float max=s->marks;
    int roll=0;
    
    for(int i=0;i<5;i++){
        if(s->marks>max){
            max=s->marks;
            roll=s->roll;
        }s++;
    }
    printf("Highest marks: %.2f of roll no %d", max, roll);
}
void search(struct student *s,int key){
    for(int i=0;i<5;i++){
        if(s->roll==key){
            printf("\nRoll number %d found with marks: %.2f", key, s->marks);
            break;
        }
        s++;
        
    }
    
}
void main(){
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        printf("Enter roll nummber:\n");
        scanf("%d",&s[i].roll);
        printf("Enter marks :\n");
        scanf("%f",&s[i].marks);

    }
    high(s);
    int m;
    printf("\nEnter roll number to search:");
    scanf("%d",&m);
    search(s,m);
}