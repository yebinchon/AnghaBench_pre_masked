
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {int parsed; int arg; scalar_t__ sound; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct conf*) ;
 scalar_t__ FUNC_3 (struct conf*) ;
 scalar_t__ FUNC_4 (struct conf*,int *) ;

__attribute__((used)) static rstatus_t
FUNC_5(struct conf *VAR_1)
{
    rstatus_t VAR_2;

    FUNC_0(VAR_1->sound && !VAR_1->parsed);
    FUNC_0(FUNC_1(&VAR_1->arg) == 0);

    VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_2 = FUNC_4(VAR_1, ((void*)0));
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_2 = FUNC_3(VAR_1);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_1->parsed = 1;

    return VAR_0;
}
