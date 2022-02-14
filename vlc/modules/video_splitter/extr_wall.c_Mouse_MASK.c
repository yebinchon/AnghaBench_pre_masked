
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_output; scalar_t__ i_top; scalar_t__ i_left; scalar_t__ b_active; } ;
typedef TYPE_1__ wall_output_t ;
struct TYPE_8__ {int y; int x; } ;
typedef TYPE_2__ vout_window_mouse_event_t ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ video_splitter_t ;
struct TYPE_10__ {int i_row; int i_col; TYPE_1__** pp_output; } ;
typedef TYPE_4__ video_splitter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1( video_splitter_t *VAR_2, int VAR_3,
                  vout_window_mouse_event_t *restrict VAR_4 )
{
    video_splitter_sys_t *VAR_5 = VAR_2->p_sys;

    for( int VAR_6 = 0; VAR_6 < VAR_5->i_row; VAR_6++ )
    {
        for( int VAR_7 = 0; VAR_7 < VAR_5->i_col; VAR_7++ )
        {
            wall_output_t *VAR_8 = &VAR_5->pp_output[VAR_7][VAR_6];

            if( VAR_8->b_active && VAR_8->i_output == VAR_3 )
            {
                VAR_4->x += VAR_8->i_left;
                VAR_4->y += VAR_8->i_top;
                return VAR_1;
            }
        }
    }
    FUNC_0();
    return VAR_0;
}
