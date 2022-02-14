
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
typedef int vlc_clock_t ;
typedef int ssize_t ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
struct TYPE_4__ {scalar_t__ spu; int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int *,int*) ;

ssize_t FUNC_2(vout_thread_t *VAR_1,
                                               vlc_clock_t *VAR_2,
                                               enum vlc_vout_order *VAR_3)
{
    FUNC_0(!VAR_1->p->dummy);
    ssize_t VAR_4 = VAR_0;

    if (VAR_1->p->spu)
        VAR_4 = FUNC_1(VAR_1->p->spu, VAR_2, VAR_3);

    return VAR_4;
}
