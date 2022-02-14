
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int x; int y; } ;
typedef TYPE_3__ vout_window_mouse_event_t ;
struct TYPE_12__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ video_splitter_t ;
struct TYPE_13__ {int i_row; int i_col; TYPE_6__** pp_output; } ;
typedef TYPE_5__ video_splitter_sys_t ;
struct TYPE_9__ {int i_left; int i_top; int const i_right; int const i_bottom; } ;
struct TYPE_10__ {TYPE_1__ black; } ;
struct TYPE_14__ {int i_output; int const i_width; int const i_height; int i_src_x; int i_src_y; TYPE_2__ filter; scalar_t__ b_active; } ;
typedef TYPE_6__ panoramix_output_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0( video_splitter_t *VAR_2, int VAR_3,
                  vout_window_mouse_event_t *restrict VAR_4 )
{
    video_splitter_sys_t *VAR_5 = VAR_2->p_sys;

    for( int VAR_6 = 0; VAR_6 < VAR_5->i_row; VAR_6++ )
    {
        for( int VAR_7 = 0; VAR_7 < VAR_5->i_col; VAR_7++ )
        {
            const panoramix_output_t *VAR_8 = &VAR_5->pp_output[VAR_7][VAR_6];
            if( VAR_8->b_active && VAR_8->i_output == VAR_3 )
            {
                const int VAR_9 = VAR_4->x - VAR_8->filter.black.i_left;
                const int VAR_10 = VAR_4->y - VAR_8->filter.black.i_top;

                if( VAR_9 >= 0 && VAR_9 < VAR_8->i_width - VAR_8->filter.black.i_right &&
                    VAR_10 >= 0 && VAR_10 < VAR_8->i_height - VAR_8->filter.black.i_bottom )
                {
                    VAR_4->x = VAR_8->i_src_x + VAR_9;
                    VAR_4->y = VAR_8->i_src_y + VAR_10;
                    return VAR_1;
                }
            }
        }
    }
    return VAR_0;
}
