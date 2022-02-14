
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p_pic; } ;
typedef TYPE_1__ ttml_image_updater_region_t ;
typedef int picture_t ;


 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static ttml_image_updater_region_t *FUNC_1(picture_t *VAR_0)
{
    ttml_image_updater_region_t *VAR_1 = FUNC_0(1, sizeof(*VAR_1));
    if(VAR_1)
        VAR_1->p_pic = VAR_0;
    return VAR_1;
}
