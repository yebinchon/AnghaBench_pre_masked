
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int hd3d; int d3d_dev; int d3d_proc; int outTexture; int processorOutput; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(vlc_object_t *VAR_0)
{
    filter_t *VAR_1 = (filter_t *)VAR_0;
    filter_sys_t *VAR_2 = VAR_1->p_sys;

    if (FUNC_6(VAR_2->processorOutput))
        FUNC_4(VAR_2->processorOutput);
    FUNC_3(VAR_2->outTexture);
    FUNC_2( &VAR_2->d3d_proc );
    FUNC_1(&VAR_2->d3d_dev);
    FUNC_0(&VAR_2->hd3d);

    FUNC_5(VAR_2);
}
