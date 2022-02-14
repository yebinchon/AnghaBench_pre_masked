
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int piece_t ;
typedef int piece_in_plane_t ;
typedef int int32_t ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_7__ {int i_pieces_nbr; int i_rows; int i_cols; int i_planes; } ;
struct TYPE_9__ {TYPE_6__* ps_pieces_tmp; TYPE_6__* ps_pieces; TYPE_1__ s_allocated; void* pi_group_qty; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_10__ {struct TYPE_10__* ps_piece_in_plane; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3( filter_t *VAR_2)
{
    filter_sys_t *VAR_3 = VAR_2->p_sys;
    FUNC_2(VAR_2);
    VAR_3->s_allocated.i_pieces_nbr = VAR_3->s_allocated.i_rows * VAR_3->s_allocated.i_cols;
    VAR_3->ps_pieces = FUNC_1( sizeof( piece_t) * VAR_3->s_allocated.i_pieces_nbr );
    if( !VAR_3->ps_pieces )
        return VAR_0;
    for (uint32_t VAR_4 = 0; VAR_4 < VAR_3->s_allocated.i_pieces_nbr; VAR_4++) {
        VAR_3->ps_pieces[VAR_4].ps_piece_in_plane = FUNC_1( sizeof( piece_in_plane_t) * VAR_3->s_allocated.i_planes );
        if( !VAR_3->ps_pieces[VAR_4].ps_piece_in_plane ) {
            for (uint32_t VAR_5=0;VAR_5<VAR_4;VAR_5++)
                FUNC_0(VAR_3->ps_pieces[VAR_5].ps_piece_in_plane);
            FUNC_0(VAR_3->ps_pieces);
            VAR_3->ps_pieces = ((void*)0);
            return VAR_0;
        }
    }

    VAR_3->ps_pieces_tmp = FUNC_1( sizeof( piece_t) * VAR_3->s_allocated.i_pieces_nbr );
    if( !VAR_3->ps_pieces_tmp ) {
        for (uint32_t VAR_6=0;VAR_6<VAR_3->s_allocated.i_pieces_nbr;VAR_6++)
            FUNC_0(VAR_3->ps_pieces[VAR_6].ps_piece_in_plane);
        FUNC_0(VAR_3->ps_pieces);
        VAR_3->ps_pieces = ((void*)0);
        return VAR_0;
    }
    VAR_3->pi_group_qty = FUNC_1( sizeof( int32_t ) * (VAR_3->s_allocated.i_pieces_nbr));
    if( !VAR_3->pi_group_qty ) {
        for (uint32_t VAR_7=0;VAR_7<VAR_3->s_allocated.i_pieces_nbr;VAR_7++)
            FUNC_0(VAR_3->ps_pieces[VAR_7].ps_piece_in_plane);
        FUNC_0(VAR_3->ps_pieces);
        VAR_3->ps_pieces = ((void*)0);
        FUNC_0(VAR_3->ps_pieces_tmp);
        VAR_3->ps_pieces_tmp = ((void*)0);
        return VAR_0;
    }
    return VAR_1;
}
