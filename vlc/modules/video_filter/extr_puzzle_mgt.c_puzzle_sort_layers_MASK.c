
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int piece_t ;
typedef scalar_t__ int32_t ;
struct TYPE_12__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_11__ {int i_pieces_nbr; } ;
struct TYPE_10__ {scalar_t__ i_pieces_nbr; } ;
struct TYPE_13__ {scalar_t__* pi_group_qty; TYPE_6__* ps_pieces_tmp; TYPE_2__ s_allocated; TYPE_6__* ps_pieces; TYPE_1__ s_current_param; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_14__ {scalar_t__ i_group_ID; scalar_t__ b_finished; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_6__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,TYPE_6__*,int) ;

int FUNC_3( filter_t *VAR_2)
{
    filter_sys_t *VAR_3 = VAR_2->p_sys;

    int32_t VAR_4 = 0;
    for (uint32_t VAR_5 = 1; VAR_5 <= VAR_3->s_current_param.i_pieces_nbr; VAR_5++) {

        for (uint32_t VAR_6 = 0; VAR_6 < VAR_3->s_current_param.i_pieces_nbr; VAR_6++) {
            uint32_t VAR_7 = VAR_3->ps_pieces[VAR_6].i_group_ID;
            if ( VAR_3->pi_group_qty[VAR_7] == (int32_t)VAR_5 ) {
                bool VAR_8 = 1;
                for (int32_t VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
                    if ( VAR_3->ps_pieces_tmp[VAR_9].i_group_ID == VAR_7 )
                        VAR_8 = 0;
                if ( VAR_8 )
                    for (uint32_t VAR_10 = VAR_6; VAR_10 < VAR_3->s_current_param.i_pieces_nbr; VAR_10++)
                        if (( VAR_3->ps_pieces[VAR_10].i_group_ID == VAR_7 ) && !VAR_3->ps_pieces[VAR_10].b_finished ) {
                            FUNC_2( &VAR_3->ps_pieces_tmp[VAR_4], &VAR_3->ps_pieces[VAR_10], sizeof(piece_t));
                            VAR_4++;
                        }
            }
        }

        for (uint32_t VAR_11 = 0; VAR_11 < VAR_3->s_current_param.i_pieces_nbr; VAR_11++) {
            uint32_t VAR_12 = VAR_3->ps_pieces[VAR_11].i_group_ID;
            if ( VAR_3->pi_group_qty[VAR_12] == (int32_t)VAR_5 ) {
                bool VAR_13 = 1;
                for (int32_t VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
                    if ( VAR_3->ps_pieces_tmp[VAR_14].i_group_ID == VAR_12 && VAR_3->ps_pieces_tmp[VAR_14].b_finished )
                        VAR_13 = 0;
                if ( VAR_13 )
                    for (uint32_t VAR_15 = VAR_11; VAR_15 < VAR_3->s_current_param.i_pieces_nbr; VAR_15++)
                        if (( VAR_3->ps_pieces[VAR_15].i_group_ID == VAR_12 ) && VAR_3->ps_pieces[VAR_15].b_finished ) {
                            FUNC_2( &VAR_3->ps_pieces_tmp[VAR_4], &VAR_3->ps_pieces[VAR_15], sizeof(piece_t));
                            VAR_4++;
                        }
            }
        }
    }

    FUNC_0( VAR_3->ps_pieces );
    VAR_3->ps_pieces = VAR_3->ps_pieces_tmp;
    VAR_3->ps_pieces_tmp = FUNC_1( sizeof( piece_t) * VAR_3->s_allocated.i_pieces_nbr );
    if (!VAR_3->ps_pieces_tmp)
        return VAR_0;

    return VAR_1;
}
