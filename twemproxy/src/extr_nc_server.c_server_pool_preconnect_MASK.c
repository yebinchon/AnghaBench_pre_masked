
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int pool; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int VAR_1 ;

rstatus_t
FUNC_1(struct context *VAR_2)
{
    rstatus_t VAR_3;

    VAR_3 = FUNC_0(&VAR_2->pool, VAR_1, ((void*)0));
    if (VAR_3 != VAR_0) {
        return VAR_3;
    }

    return VAR_0;
}
