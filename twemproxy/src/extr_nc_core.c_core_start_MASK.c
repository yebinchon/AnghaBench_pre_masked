
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instance {struct context* ctx; } ;
struct context {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct context* FUNC_2 (struct instance*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct instance*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

struct context *
FUNC_7(struct instance *VAR_0)
{
    struct context *VAR_1;

    FUNC_4(VAR_0);
    FUNC_6();
    FUNC_1();

    VAR_1 = FUNC_2(VAR_0);
    if (VAR_1 != ((void*)0)) {
        VAR_0->ctx = VAR_1;
        return VAR_1;
    }

    FUNC_0();
    FUNC_5();
    FUNC_3();

    return ((void*)0);
}
