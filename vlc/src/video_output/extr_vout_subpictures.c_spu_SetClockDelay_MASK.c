
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct spu_channel {int delay; int clock; } ;
struct TYPE_5__ {TYPE_2__* p; } ;
typedef TYPE_1__ spu_t ;
struct TYPE_6__ {int lock; } ;
typedef TYPE_2__ spu_private_t ;


 int FUNC_0 (int ) ;
 struct spu_channel* FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(spu_t *VAR_0, size_t VAR_1, vlc_tick_t VAR_2)
{
    spu_private_t *VAR_3 = VAR_0->p;

    FUNC_3(&VAR_3->lock);
    struct spu_channel *VAR_4 = FUNC_1(VAR_0, VAR_1);
    FUNC_0(VAR_4->clock);
    FUNC_2(VAR_4->clock, VAR_2);
    VAR_4->delay = VAR_2;
    FUNC_4(&VAR_3->lock);
}
