
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_6__ {size_t i_pieces_nbr; } ;
struct TYPE_8__ {TYPE_5__* pi_group_qty; TYPE_5__* ps_pieces_tmp; TYPE_5__* pi_order; TYPE_5__* ps_pieces; TYPE_1__ s_allocated; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_9__ {struct TYPE_9__* ps_piece_in_plane; } ;


 int FUNC_0 (TYPE_5__*) ;

void FUNC_1( filter_t *VAR_0)
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;

    if (VAR_1->ps_pieces != ((void*)0)) {
        for (uint32_t VAR_2 = 0; VAR_2 < VAR_1->s_allocated.i_pieces_nbr; VAR_2++)
            FUNC_0( VAR_1->ps_pieces[VAR_2].ps_piece_in_plane );
        FUNC_0( VAR_1->ps_pieces );
    }
    VAR_1->ps_pieces = ((void*)0);

    FUNC_0( VAR_1->pi_order );
    VAR_1->pi_order = ((void*)0);

    FUNC_0( VAR_1->ps_pieces_tmp );
    VAR_1->ps_pieces_tmp = ((void*)0);

    FUNC_0( VAR_1->pi_group_qty );
    VAR_1->pi_group_qty = ((void*)0);

    return;
}
