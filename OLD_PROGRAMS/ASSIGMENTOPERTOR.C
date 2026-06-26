#include<stdio.h>
int main()
{
    int page_no=10;
    int current_view=page_no++;
    printf("\ncurrent page number is :%d",current_view);
    printf("\npage turn over");
    printf("\ncurrent page number is:%d",page_no);

    int current_emp_id=100;
    printf("\nnew emloyee id is :%d",++current_emp_id);
    return 0;
}