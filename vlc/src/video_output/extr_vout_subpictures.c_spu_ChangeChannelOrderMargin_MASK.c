
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p; } ;
typedef TYPE_1__ spu_t ;
struct TYPE_5__ {int margin; int secondary_margin; int lock; } ;
typedef TYPE_2__ spu_private_t ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;




 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(spu_t *VAR_0, enum vlc_vout_order VAR_1,
                                  int VAR_2)
{
    spu_private_t *VAR_3 = VAR_0->p;

    FUNC_1(&VAR_3->lock);
    switch (VAR_1)
    {
        case 129:
            VAR_3->margin = VAR_2;
            break;
        case 128:
            VAR_3->secondary_margin = VAR_2;
            break;
        default:
            FUNC_0();
    }
    FUNC_2(&VAR_3->lock);
}
