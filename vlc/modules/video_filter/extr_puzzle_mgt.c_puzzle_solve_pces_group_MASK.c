
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {scalar_t__ i_actual_angle; scalar_t__ i_actual_mirror; scalar_t__ i_group_ID; int i_OTy; int i_ORx; int i_OLx; int i_TRx; int i_TLx; int i_TRy; int i_TLy; int i_BRx; int i_BLx; int i_BRy; int i_BLy; size_t i_step_x_x; int i_OBy; size_t i_step_y_y; int i_right_shape; int i_top_shape; int i_btm_shape; scalar_t__ i_left_shape; int b_finished; } ;
typedef TYPE_2__ piece_t ;
typedef size_t int32_t ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_7__ {size_t i_pieces_nbr; } ;
struct TYPE_10__ {size_t i_solve_grp_loop; int i_magnet_accuracy; TYPE_2__* ps_pieces; TYPE_1__ s_allocated; } ;
typedef TYPE_4__ filter_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,size_t,size_t,size_t) ;

void FUNC_2( filter_t *VAR_0) {
    filter_sys_t *VAR_1 = VAR_0->p_sys;
    int32_t VAR_2, VAR_3;

    VAR_1->i_solve_grp_loop++;
    VAR_1->i_solve_grp_loop %= VAR_1->s_allocated.i_pieces_nbr;

    int32_t VAR_4 = VAR_1->i_solve_grp_loop;
    piece_t *VAR_5 = &VAR_1->ps_pieces[VAR_4];

    for (uint32_t VAR_6 = 0; VAR_6 < VAR_1->s_allocated.i_pieces_nbr; VAR_6++)
    {
        piece_t *VAR_7 = &VAR_1->ps_pieces[VAR_6];

        if ( VAR_5->i_actual_angle != VAR_7->i_actual_angle || VAR_5->i_actual_mirror != VAR_7->i_actual_mirror )
            continue;

        if ( (VAR_7->i_group_ID != VAR_1->ps_pieces[VAR_4].i_group_ID ) )
        {
            if ( FUNC_0(VAR_5->i_OTy - VAR_7->i_OTy )<3)
            {
                if ( FUNC_0( VAR_5->i_ORx - VAR_7->i_OLx + 1 ) < 3
                     && FUNC_0( VAR_5->i_TRx - VAR_7->i_TLx + 1 ) < VAR_1->i_magnet_accuracy
                     && FUNC_0( VAR_5->i_TRy - VAR_7->i_TLy ) < VAR_1->i_magnet_accuracy
                     && FUNC_0( VAR_5->i_BRx - VAR_7->i_BLx + 1 ) < VAR_1->i_magnet_accuracy
                     && FUNC_0( VAR_5->i_BRy - VAR_7->i_BLy ) < VAR_1->i_magnet_accuracy )
                {
                    VAR_2 = VAR_5->i_TRx - VAR_7->i_TLx + VAR_5->i_step_x_x;
                    VAR_3 = VAR_5->i_TRy - VAR_7->i_TLy;

                    if (!VAR_7->b_finished)
                        FUNC_1( VAR_0, VAR_6, VAR_2, VAR_3);
                    else
                        FUNC_1( VAR_0, VAR_4, -VAR_2, -VAR_3);

                    uint32_t VAR_8 = VAR_7->i_group_ID;
                    for (uint32_t VAR_9 = 0; VAR_9 < VAR_1->s_allocated.i_pieces_nbr; VAR_9++)
                        if ( VAR_1->ps_pieces[VAR_9].i_group_ID == VAR_8)
                            VAR_1->ps_pieces[VAR_9].i_group_ID = VAR_1->ps_pieces[VAR_4].i_group_ID;
                }
            }
            else if ( FUNC_0(VAR_5->i_OLx - VAR_7->i_OLx ) < 3 )
            {
                if ( FUNC_0(VAR_5->i_OBy - VAR_7->i_OTy + 1 ) < 3
                     && FUNC_0( VAR_7->i_TLx - VAR_5->i_BLx ) < VAR_1->i_magnet_accuracy
                     && FUNC_0( VAR_7->i_TLy - 1 - VAR_5->i_BLy ) < VAR_1->i_magnet_accuracy
                     && FUNC_0( VAR_7->i_TRx - VAR_5->i_BRx ) < VAR_1->i_magnet_accuracy
                     && FUNC_0( VAR_7->i_TRy - 1 - VAR_5->i_BRy ) < VAR_1->i_magnet_accuracy )
                {

                    VAR_2 = VAR_5->i_BLx - VAR_7->i_TLx;
                    VAR_3 = VAR_5->i_BLy - VAR_7->i_TLy + VAR_5->i_step_y_y;

                    if (!VAR_7->b_finished)
                        FUNC_1( VAR_0, VAR_6, VAR_2, VAR_3);
                    else
                        FUNC_1( VAR_0, VAR_4, -VAR_2, -VAR_3);

                    uint32_t VAR_10 = VAR_7->i_group_ID;
                    for (uint32_t VAR_11 = 0; VAR_11 < VAR_1->s_allocated.i_pieces_nbr; VAR_11++)
                        if ( VAR_1->ps_pieces[VAR_11].i_group_ID == VAR_10)
                            VAR_1->ps_pieces[VAR_11].i_group_ID = VAR_1->ps_pieces[VAR_4].i_group_ID;
                }
            }
        }

        if ( FUNC_0( VAR_5->i_OTy - VAR_7->i_OTy ) < 3 )
        {
            if ( FUNC_0( VAR_5->i_ORx - VAR_7->i_OLx + 1 ) < 3
                 && FUNC_0( VAR_5->i_TRx - VAR_7->i_TLx + 1 ) < VAR_1->i_magnet_accuracy
                 && FUNC_0( VAR_5->i_TRy - VAR_7->i_TLy ) < VAR_1->i_magnet_accuracy
                 && FUNC_0( VAR_5->i_BRx - VAR_7->i_BLx + 1 ) < VAR_1->i_magnet_accuracy
                 && FUNC_0( VAR_5->i_BRy - VAR_7->i_BLy ) < VAR_1->i_magnet_accuracy )
            {
                VAR_7->i_left_shape = 0;
                VAR_5->i_right_shape = 6;
            }
        }
        else if ( FUNC_0( VAR_5->i_OLx - VAR_7->i_OLx )<3 )
        {
            if ( FUNC_0( VAR_5->i_OBy - VAR_7->i_OTy + 1 )<3
                 && FUNC_0( VAR_7->i_TLx - VAR_5->i_BLx ) < VAR_1->i_magnet_accuracy
                 && FUNC_0( VAR_7->i_TLy - 1 - VAR_5->i_BLy ) < VAR_1->i_magnet_accuracy
                 && FUNC_0( VAR_7->i_TRx - VAR_5->i_BRx ) < VAR_1->i_magnet_accuracy
                 && FUNC_0( VAR_7->i_TRy - 1 - VAR_5->i_BRy ) < VAR_1->i_magnet_accuracy )
            {
                VAR_7->i_top_shape = 2;
                VAR_5->i_btm_shape = 4;
            }
        }
   }
}
