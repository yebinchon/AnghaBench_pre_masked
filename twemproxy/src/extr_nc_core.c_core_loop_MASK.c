
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int stats; int timeout; int evb; } ;
typedef int rstatus_t ;


 int VAR_0 ;
 int FUNC_0 (struct context*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

rstatus_t
FUNC_3(struct context *VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_1(VAR_1->evb, VAR_1->timeout);
    if (VAR_2 < 0) {
        return VAR_2;
    }

    FUNC_0(VAR_1);

    FUNC_2(VAR_1->stats);

    return VAR_0;
}
