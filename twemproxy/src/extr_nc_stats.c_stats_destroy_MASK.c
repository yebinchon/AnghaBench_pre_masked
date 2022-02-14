
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats {int current; int shadow; int sum; } ;


 int FUNC_0 (struct stats*) ;
 int FUNC_1 (struct stats*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct stats*) ;

void
FUNC_4(struct stats *VAR_0)
{
    FUNC_3(VAR_0);
    FUNC_2(&VAR_0->sum);
    FUNC_2(&VAR_0->shadow);
    FUNC_2(&VAR_0->current);
    FUNC_1(VAR_0);
    FUNC_0(VAR_0);
}
