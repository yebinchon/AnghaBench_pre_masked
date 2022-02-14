
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int * peer; int request; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct msg*) ;

void
FUNC_2(struct msg *VAR_0)
{
    FUNC_0(!VAR_0->request);
    FUNC_0(VAR_0->peer == ((void*)0));
    FUNC_1(VAR_0);
}
