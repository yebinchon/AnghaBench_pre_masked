
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int i_sar_den; int i_sar_num; int orientation; int i_y_offset; int i_x_offset; int i_visible_height; int i_visible_width; int i_height; int i_width; } ;
struct TYPE_9__ {TYPE_1__ video; } ;
typedef TYPE_2__ es_format_t ;


 int FUNC_0 (TYPE_2__*,TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_1( es_format_t *VAR_0,
                               const es_format_t *VAR_1,
                               const es_format_t *VAR_2 )
{
    FUNC_0( VAR_0, VAR_1 );

    VAR_0->video.i_width = VAR_2->video.i_width;
    VAR_0->video.i_height = VAR_2->video.i_height;

    VAR_0->video.i_visible_width = VAR_2->video.i_visible_width;
    VAR_0->video.i_visible_height = VAR_2->video.i_visible_height;

    VAR_0->video.i_x_offset = VAR_2->video.i_x_offset;
    VAR_0->video.i_y_offset = VAR_2->video.i_y_offset;

    VAR_0->video.orientation = VAR_2->video.orientation;
    VAR_0->video.i_sar_num = VAR_2->video.i_sar_num;
    VAR_0->video.i_sar_den = VAR_2->video.i_sar_den;
}
