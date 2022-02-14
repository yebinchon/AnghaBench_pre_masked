
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_hist {struct msg_hist* msg; struct msg_hist* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct msg_hist* VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct msg_hist*) ;

int
FUNC_1()
{
    struct msg_hist *VAR_5;

    if (VAR_4 <= 0)
 return VAR_0;
    VAR_5 = VAR_2;
    VAR_2 = VAR_5->next;
    if (VAR_2 == ((void*)0))
 VAR_3 = ((void*)0);
    FUNC_0(VAR_5->msg);
    FUNC_0(VAR_5);
    --VAR_4;
    return VAR_1;
}
