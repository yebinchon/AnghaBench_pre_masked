
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_11__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_10__ {scalar_t__ b_blackslot; } ;
struct TYPE_9__ {size_t i_pieces_nbr; } ;
struct TYPE_12__ {size_t* pi_order; size_t i_selected; int b_shuffle_rqst; int b_finished; TYPE_2__ s_current_param; TYPE_1__ s_allocated; } ;
typedef TYPE_4__ filter_sys_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,size_t**) ;
 scalar_t__ FUNC_1 (TYPE_4__*,size_t*) ;
 int FUNC_2 (TYPE_4__*,size_t*) ;

int FUNC_3( filter_t *VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_2->p_sys;

    int32_t VAR_4 = VAR_3->s_allocated.i_pieces_nbr;

    do
    {
        int VAR_5 = FUNC_0( VAR_2, &VAR_3->pi_order );
        if (VAR_5 != VAR_1)
            return VAR_5;
    } while( FUNC_1( VAR_3, VAR_3->pi_order ) || !FUNC_2( VAR_3, VAR_3->pi_order ) );


    if( VAR_3->s_current_param.b_blackslot ) {
        for( int32_t VAR_6 = 0; VAR_6 < VAR_4; VAR_6++ )
            if( VAR_3->pi_order[VAR_6] == VAR_4 - 1 ) {
                VAR_3->i_selected = VAR_6;
                break;
            }
    }
    else {
        VAR_3->i_selected = VAR_0;
    }

    VAR_3->b_shuffle_rqst = 0;
    VAR_3->b_finished = 0;

    return VAR_1;
}
