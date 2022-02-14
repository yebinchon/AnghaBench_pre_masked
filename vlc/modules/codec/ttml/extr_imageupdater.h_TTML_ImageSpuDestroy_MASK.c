
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* p_regions; } ;
typedef TYPE_2__ ttml_image_updater_sys_t ;
struct TYPE_10__ {struct TYPE_10__* p_next; } ;
typedef TYPE_3__ ttml_image_updater_region_t ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
struct TYPE_11__ {TYPE_1__ updater; } ;
typedef TYPE_4__ subpicture_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(subpicture_t *VAR_0)
{
    ttml_image_updater_sys_t *VAR_1 = VAR_0->updater.p_sys;
    while(VAR_1->p_regions)
    {
        ttml_image_updater_region_t *VAR_2 = VAR_1->p_regions->p_next;
        FUNC_0(VAR_1->p_regions);
        VAR_1->p_regions = VAR_2;
    }
    FUNC_1(VAR_1);
}
