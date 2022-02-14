
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {int pool; int arg; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct conf*) ;
 int FUNC_5 (struct conf*) ;

void
FUNC_6(struct conf *VAR_0)
{
    while (FUNC_1(&VAR_0->arg) != 0) {
        FUNC_4(VAR_0);
    }
    FUNC_0(&VAR_0->arg);

    while (FUNC_1(&VAR_0->pool) != 0) {
        FUNC_3(FUNC_2(&VAR_0->pool));
    }
    FUNC_0(&VAR_0->pool);

    FUNC_5(VAR_0);
}
