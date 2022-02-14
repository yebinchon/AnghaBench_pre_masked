
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dmx_region_t {TYPE_2__* picture; int resource; int element; int bmp_rect; } ;
struct TYPE_5__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_4__ {int p_pixels; int i_pitch; } ;
typedef int DISPMANX_UPDATE_HANDLE_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct dmx_region_t *VAR_1,
                DISPMANX_UPDATE_HANDLE_T VAR_2, picture_t *VAR_3)
{
    FUNC_1(VAR_1->resource, VAR_0,
                    VAR_3->p[0].i_pitch, VAR_3->p[0].p_pixels, &VAR_1->bmp_rect);
    FUNC_0(VAR_2, VAR_1->element, VAR_1->resource);
    VAR_1->picture = VAR_3;
}
