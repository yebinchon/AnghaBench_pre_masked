
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spu_channel {int delay; scalar_t__ clock; } ;
struct TYPE_6__ {TYPE_2__* p; } ;
typedef TYPE_1__ spu_t ;
struct TYPE_7__ {int lock; } ;
typedef TYPE_2__ spu_private_t ;


 struct spu_channel* FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_2__*,struct spu_channel*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(spu_t *VAR_0, size_t VAR_1)
{
    spu_private_t *VAR_2 = VAR_0->p;
    FUNC_4(&VAR_2->lock);
    struct spu_channel *VAR_3 = FUNC_0(VAR_0, VAR_1);
    FUNC_1(VAR_2, VAR_3);
    if (VAR_3->clock)
    {
        FUNC_2(VAR_3->clock);
        FUNC_3(VAR_3->clock, VAR_3->delay);
    }
    FUNC_5(&VAR_2->lock);
}
