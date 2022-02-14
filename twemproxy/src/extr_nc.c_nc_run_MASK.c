
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instance {int dummy; } ;
struct context {int dummy; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct context*) ;
 struct context* FUNC_1 (struct instance*) ;
 int FUNC_2 (struct context*) ;

__attribute__((used)) static void
FUNC_3(struct instance *VAR_1)
{
    rstatus_t VAR_2;
    struct context *VAR_3;

    VAR_3 = FUNC_1(VAR_1);
    if (VAR_3 == ((void*)0)) {
        return;
    }


    for (;;) {
        VAR_2 = FUNC_0(VAR_3);
        if (VAR_2 != VAR_0) {
            break;
        }
    }

    FUNC_2(VAR_3);
}
