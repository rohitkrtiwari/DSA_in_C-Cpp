#include <stdio.h>
#include <stdlib.h>

struct node {
    float coefficient;
    int exponent;
    struct node * next;
};

int ask_polynomial(struct node * head){
    int n;
    printf("Number of Coefficient: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nCoefficient: ");
        scanf("%f", &head->coefficient);
        printf("Exponent: ");
        scanf("%d", &head->exponent);
        if(i<(n-1)){
            head->next = (struct node *) malloc (sizeof(struct node));
            head=head->next;
            head->next=NULL;
        }
    }
    
}
void display(struct node * head)
{
    printf("\nValues of the entered nodes are as follows: \n");
    while(head)
    {
        printf("(%.1f * X^%d) + ", head->coefficient, head->exponent);
        head=head->next;
    }
}
int power(int base, int exponent){
    int res=1;
    while (exponent != 0)
    {
        res *= base;
        --exponent;
    }
    return res;
}

float solve_expression(struct node * head, int x)
{
    float sum=0.0;
    while(head)
    {
        sum += (head->coefficient * power(x, head->exponent));
        head=head->next;
    }
    return sum;
}

int main()
{
    int x;
    printf("\n\t******* Polynomial Solver Program*******\n");
    struct node * head = (struct node *) malloc(sizeof(struct node));
    head->next = NULL;
    ask_polynomial(head);
    display(head);
    while (1)
    {
        printf("\nEnter the Value of X to solve the expression: ");
        scanf("%d", &x);
        printf("\nSolution for x = %d is : %.2f", x, solve_expression(head, x));
    }
    return 0;
}
