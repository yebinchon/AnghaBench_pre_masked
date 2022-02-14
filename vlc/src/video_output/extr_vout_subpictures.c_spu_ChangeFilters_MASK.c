
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p; } ;
typedef TYPE_1__ spu_t ;
struct TYPE_5__ {char const* filter_chain_update; char const* filter_chain_current; int lock; } ;
typedef TYPE_2__ spu_private_t ;


 int FUNC_0 (char const*) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(spu_t *VAR_0, const char *VAR_1)
{
    spu_private_t *VAR_2 = VAR_0->p;

    FUNC_2(&VAR_2->lock);

    FUNC_0(VAR_2->filter_chain_update);
    if (VAR_1)
    {
        VAR_2->filter_chain_update = FUNC_1(VAR_1);
        FUNC_0(VAR_2->filter_chain_current);
        VAR_2->filter_chain_current = FUNC_1(VAR_1);
    }
    else if (VAR_2->filter_chain_current)
        VAR_2->filter_chain_update = FUNC_1(VAR_2->filter_chain_current);

    FUNC_3(&VAR_2->lock);
}
