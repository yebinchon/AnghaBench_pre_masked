
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int i_entries; } ;
typedef TYPE_2__ video_palette_t ;
struct TYPE_12__ {int i_width; int i_visible_width; int i_height; int i_visible_height; int i_sar_num; int i_sar_den; TYPE_2__* p_palette; } ;
typedef TYPE_3__ video_format_t ;
typedef int uint32_t ;
struct TYPE_13__ {int i_align; int i_x; int i_y; TYPE_1__* p_picture; } ;
typedef TYPE_4__ subpicture_region_t ;
struct TYPE_10__ {int p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int) ;
 TYPE_4__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static subpicture_region_t * FUNC_4(int VAR_4, int VAR_5,
                                                int VAR_6, int VAR_7,
                                                uint32_t VAR_8)
{

    video_palette_t VAR_9;
    FUNC_1( &VAR_9, VAR_0, VAR_8, 0xFF000000 );

    video_format_t VAR_10;
    FUNC_3(&VAR_10, VAR_3);
    VAR_10.i_width = VAR_10.i_visible_width = VAR_6;
    VAR_10.i_height = VAR_10.i_visible_height = VAR_7;
    VAR_10.i_sar_num = 1;
    VAR_10.i_sar_den = 1;
    VAR_10.p_palette = &VAR_9;

    subpicture_region_t *VAR_11 = FUNC_2(&VAR_10);
    if (!VAR_11)
        return ((void*)0);

    VAR_11->i_align = VAR_1 | VAR_2;
    VAR_11->i_x = VAR_4;
    VAR_11->i_y = VAR_5;

    FUNC_0( VAR_11->p_picture->p, VAR_9.i_entries );

    return VAR_11;
}
