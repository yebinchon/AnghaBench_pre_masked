
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_6__ {size_t i_pieces_nbr; } ;
struct TYPE_9__ {TYPE_2__* ps_pieces; TYPE_1__ s_allocated; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_7__ {scalar_t__ i_original_row; int i_original_col; int i_left_shape; int i_right_shape; int i_top_shape; int i_btm_shape; } ;



void FUNC_0( filter_t *VAR_0)
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;

    for (uint16_t VAR_2=0; VAR_2 < VAR_1->s_allocated.i_pieces_nbr; VAR_2++)

        for (uint16_t VAR_3=0; VAR_3 < VAR_1->s_allocated.i_pieces_nbr; VAR_3++)
        {
            if ( ( VAR_1->ps_pieces[VAR_3].i_original_row == VAR_1->ps_pieces[VAR_2].i_original_row )
                  && ( VAR_1->ps_pieces[VAR_3].i_original_col == VAR_1->ps_pieces[VAR_2].i_original_col-1 ) )

                VAR_1->ps_pieces[VAR_2].i_left_shape = (VAR_1->ps_pieces[VAR_3].i_right_shape - 6 ) ^ 0x01;

            if ( ( VAR_1->ps_pieces[VAR_3].i_original_row == VAR_1->ps_pieces[VAR_2].i_original_row - 1 )
                  && ( VAR_1->ps_pieces[VAR_3].i_original_col == VAR_1->ps_pieces[VAR_2].i_original_col ) )




                VAR_1->ps_pieces[VAR_2].i_top_shape = (VAR_1->ps_pieces[VAR_3].i_btm_shape - 2 ) ^ 0x01;
        }
}
