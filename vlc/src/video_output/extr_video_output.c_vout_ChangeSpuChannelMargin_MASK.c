
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
struct TYPE_4__ {int * spu; int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int) ;

void FUNC_3(vout_thread_t *VAR_0,
                                 enum vlc_vout_order VAR_1, int VAR_2)
{
    FUNC_0(!VAR_0->p->dummy);
    if (FUNC_1(VAR_0->p->spu != ((void*)0)))
        FUNC_2(VAR_0->p->spu, VAR_1, VAR_2);
}
