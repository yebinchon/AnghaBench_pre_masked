
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_10__ {scalar_t__ i_queue; scalar_t__ i_reorder_depth; TYPE_3__* p_queue; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_11__ {scalar_t__ i_pts; struct TYPE_11__* p_next; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_4( decoder_t *VAR_2, block_t *VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_2->p_sys;

    if( VAR_4->i_queue >= VAR_0 )
    {
        FUNC_1( FUNC_0( VAR_2, 1 ) );
        FUNC_3( VAR_2, "Trashing a CC entry" );
    }

    block_t **VAR_5;

    for( VAR_5 = &VAR_4->p_queue; *VAR_5 ; VAR_5 = &((*VAR_5)->p_next) )
    {
        if( VAR_3->i_pts == VAR_1 || (*VAR_5)->i_pts == VAR_1 )
            continue;
        if( VAR_3->i_pts < (*VAR_5)->i_pts )
        {
            if( VAR_4->i_reorder_depth > 0 &&
                VAR_4->i_queue < VAR_4->i_reorder_depth &&
                VAR_5 == &VAR_4->p_queue )
            {
                FUNC_2( VAR_2, "Increasing reorder depth to %d", ++VAR_4->i_reorder_depth );
            }
            break;
        }
    }

    VAR_3->p_next = *VAR_5 ? *VAR_5 : ((void*)0);
    *VAR_5 = VAR_3;
    VAR_4->i_queue++;
}
