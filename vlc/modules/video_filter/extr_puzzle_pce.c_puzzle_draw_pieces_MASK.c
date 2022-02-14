
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_24__ {int i_actual_mirror; scalar_t__ i_actual_angle; } ;
typedef TYPE_3__ piece_t ;
struct TYPE_25__ {scalar_t__ i_planes; } ;
typedef TYPE_4__ picture_t ;
typedef size_t int32_t ;
struct TYPE_26__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_23__ {scalar_t__ i_shape_size; int b_advanced; } ;
struct TYPE_22__ {size_t i_pieces_nbr; } ;
struct TYPE_27__ {int b_shape_init; int * ps_pieces_shapes; TYPE_2__ s_current_param; TYPE_3__* ps_pieces; TYPE_1__ s_allocated; int * ps_puzzle_array; } ;
typedef TYPE_6__ filter_sys_t ;


 int FUNC_0 (TYPE_5__*,TYPE_4__*,TYPE_4__*,scalar_t__,TYPE_3__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,TYPE_4__*,scalar_t__,TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,TYPE_4__*,scalar_t__,TYPE_3__*,size_t) ;

void FUNC_3( filter_t *VAR_0, picture_t *VAR_1, picture_t *VAR_2)
{
    filter_sys_t *VAR_3 = VAR_0->p_sys;

    if ((VAR_3->ps_puzzle_array == ((void*)0)) || (VAR_3->ps_pieces == ((void*)0)))
        return;

    for( uint8_t VAR_4 = 0; VAR_4 < VAR_2->i_planes; VAR_4++ ) {
        for ( int32_t VAR_5 = VAR_3->s_allocated.i_pieces_nbr-1; VAR_5 >= 0 ; VAR_5-- ) {
            piece_t *VAR_6 = &VAR_3->ps_pieces[VAR_5];

            if (!VAR_3->s_current_param.b_advanced
                    || (VAR_6->i_actual_mirror == 1 && VAR_6->i_actual_angle == 0
                    && VAR_3->s_current_param.i_shape_size == 0))
            {
                FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, VAR_6);
            }
            else if ( ( VAR_3->s_current_param.i_shape_size == 0) ||
                      (VAR_3->ps_pieces_shapes == ((void*)0)) || (!VAR_3->b_shape_init) )
            {
                FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_6);
            }
            else {
                FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4, VAR_6, VAR_5);
            }
        }
    }

    return;
}
