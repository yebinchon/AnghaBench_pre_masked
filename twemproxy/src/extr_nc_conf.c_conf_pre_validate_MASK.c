
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {int sound; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct conf*) ;
 scalar_t__ FUNC_1 (struct conf*) ;
 scalar_t__ FUNC_2 (struct conf*) ;

__attribute__((used)) static rstatus_t
FUNC_3(struct conf *VAR_1)
{
    rstatus_t VAR_2;

    VAR_2 = FUNC_0(VAR_1);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_1->sound = 1;

    return VAR_0;
}
