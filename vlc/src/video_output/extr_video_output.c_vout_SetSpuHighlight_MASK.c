
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
typedef int vlc_spu_highlight_t ;
struct TYPE_4__ {scalar_t__ spu; int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int const*) ;

void FUNC_2( vout_thread_t *VAR_0,
                        const vlc_spu_highlight_t *VAR_1 )
{
    FUNC_0(!VAR_0->p->dummy);
    if (VAR_0->p->spu)
        FUNC_1(VAR_0->p->spu, VAR_1);
}
