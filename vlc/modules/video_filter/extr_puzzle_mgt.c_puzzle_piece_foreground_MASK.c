
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_11__ {size_t i_group_ID; } ;
typedef TYPE_2__ piece_t ;
typedef size_t int32_t ;
struct TYPE_12__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_10__ {int i_pieces_nbr; } ;
struct TYPE_13__ {TYPE_2__* ps_pieces; TYPE_1__ s_allocated; } ;
typedef TYPE_4__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;

int FUNC_3( filter_t *VAR_2, int32_t VAR_3) {
    filter_sys_t *VAR_4 = VAR_2->p_sys;
    piece_t *VAR_5;
    uint32_t VAR_6 = VAR_4->ps_pieces[VAR_3].i_group_ID;

    VAR_5 = FUNC_1( sizeof( piece_t) * VAR_4->s_allocated.i_pieces_nbr );
    if (!VAR_5)
        return VAR_0;

    int32_t VAR_7=0;

    FUNC_2( &VAR_5[VAR_7], &VAR_4->ps_pieces[VAR_3], sizeof(piece_t) );
    VAR_7++;

    for (uint32_t VAR_8 = 0; VAR_8 < VAR_4->s_allocated.i_pieces_nbr; VAR_8++) {
        if ( ( VAR_4->ps_pieces[VAR_8].i_group_ID == VAR_6 ) && ( (int32_t)VAR_8 != VAR_3 ) ) {
            FUNC_2( &VAR_5[VAR_7], &VAR_4->ps_pieces[VAR_8], sizeof(piece_t));
            VAR_7++;
        }
    }
    for (uint32_t VAR_9 = 0; VAR_9 < VAR_4->s_allocated.i_pieces_nbr; VAR_9++) {
        if ( VAR_4->ps_pieces[VAR_9].i_group_ID != VAR_6 ) {
            FUNC_2( &VAR_5[VAR_7], &VAR_4->ps_pieces[VAR_9], sizeof(piece_t));
            VAR_7++;
        }
    }

    FUNC_0( VAR_4->ps_pieces );
    VAR_4->ps_pieces = VAR_5;

    return VAR_1;
}
