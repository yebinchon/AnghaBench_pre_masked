
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * p_regions; int ** pp_append; } ;
typedef TYPE_1__ ttml_image_updater_sys_t ;
struct TYPE_7__ {TYPE_1__* p_sys; int pf_destroy; int pf_update; int pf_validate; } ;
typedef TYPE_2__ subpicture_updater_t ;
typedef int subpicture_t ;
typedef int decoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int * FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline subpicture_t *FUNC_3(decoder_t *VAR_3)
{
    ttml_image_updater_sys_t *VAR_4 = FUNC_0(1, sizeof(*VAR_4));
    if(!VAR_4)
        return ((void*)0);
    subpicture_updater_t VAR_5 = {
        .pf_validate = VAR_2,
        .pf_update = VAR_1,
        .pf_destroy = VAR_0,
        .p_sys = VAR_4,
    };
    VAR_4->p_regions = ((void*)0);
    VAR_4->pp_append = &VAR_4->p_regions;
    subpicture_t *VAR_6 = FUNC_1(VAR_3, &VAR_5);
    if (!VAR_6)
        FUNC_2(VAR_4);
    return VAR_6;
}
