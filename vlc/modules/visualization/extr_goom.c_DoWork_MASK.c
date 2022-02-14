
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ i_blocks; int lock; int wait; TYPE_3__** pp_blocks; } ;
typedef TYPE_1__ goom_thread_t ;
struct TYPE_9__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_10__ {int i_pts; int i_buffer; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static block_t *FUNC_5( filter_t *VAR_1, block_t *VAR_2 )
{
    goom_thread_t *VAR_3 = VAR_1->p_sys;
    block_t *VAR_4;


    FUNC_3( &VAR_3->lock );
    if( VAR_3->i_blocks == VAR_0 )
    {
        FUNC_4( &VAR_3->lock );
        return VAR_2;
    }

    VAR_4 = FUNC_0( VAR_2->i_buffer );
    if( !VAR_4 )
    {
        FUNC_4( &VAR_3->lock );
        return VAR_2;
    }
    FUNC_1( VAR_4->p_buffer, VAR_2->p_buffer, VAR_2->i_buffer );
    VAR_4->i_pts = VAR_2->i_pts;

    VAR_3->pp_blocks[VAR_3->i_blocks++] = VAR_4;

    FUNC_2( &VAR_3->wait );
    FUNC_4( &VAR_3->lock );

    return VAR_2;
}
