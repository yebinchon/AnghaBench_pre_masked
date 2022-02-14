
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int module; int ref_count; } ;
typedef TYPE_1__ vlc_vk_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(vlc_vk_t *VAR_0)
{
    if (!FUNC_1(&VAR_0->ref_count))
        return;
    FUNC_0(VAR_0, VAR_0->module);
    FUNC_2(VAR_0);
}
