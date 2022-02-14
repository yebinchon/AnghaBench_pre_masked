
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdp_t ;
struct TYPE_3__ {scalar_t__ refs; int device; struct TYPE_3__* next; int * vdp; } ;
typedef TYPE_1__ vdp_instance_t ;
typedef int VdpDevice ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

vdp_t *FUNC_3(vdp_t *VAR_3, VdpDevice *restrict VAR_4)
{
    vdp_instance_t *VAR_5, **VAR_6 = &VAR_1;

    FUNC_1(&VAR_2);
    for (;;)
    {
        VAR_5 = *VAR_6;
        FUNC_0(VAR_5 != ((void*)0));
        if (VAR_5->vdp == VAR_3)
            break;
        VAR_6 = &VAR_5->next;
    }

    FUNC_0(VAR_5->refs < VAR_0);
    VAR_5->refs++;
    FUNC_2(&VAR_2);

    if (VAR_4 != ((void*)0))
        *VAR_4 = VAR_5->device;
   return VAR_3;
}
