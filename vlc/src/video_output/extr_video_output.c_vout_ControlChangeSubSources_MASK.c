
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_4__ {int * spu; int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char const*) ;

void FUNC_3(vout_thread_t *VAR_0, const char *VAR_1)
{
    FUNC_0(!VAR_0->p->dummy);
    if (FUNC_1(VAR_0->p->spu != ((void*)0)))
        FUNC_2(VAR_0->p->spu, VAR_1);
}
