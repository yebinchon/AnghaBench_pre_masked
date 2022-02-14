
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_6__ {int pts; } ;
struct TYPE_8__ {int b_recovered; int dts; int i_next_block_flags; TYPE_1__ prevdatedpoc; int pocctx; int i_recoveryfnum; int * p_active_sps; int * p_active_pps; int b_slice; } ;
typedef TYPE_3__ decoder_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( void *VAR_3, bool VAR_4 )
{
    decoder_t *VAR_5 = VAR_3;
    decoder_sys_t *VAR_6 = VAR_5->p_sys;

    if( VAR_4 || !VAR_6->b_slice )
    {
        FUNC_0( VAR_6 );
        FUNC_1( VAR_6 );
        VAR_6->p_active_pps = ((void*)0);
        VAR_6->p_active_sps = ((void*)0);
        VAR_6->b_recovered = 0;
        VAR_6->i_recoveryfnum = VAR_1;

        FUNC_3( &VAR_6->pocctx );
        VAR_6->prevdatedpoc.pts = VAR_2;
    }
    VAR_6->i_next_block_flags = VAR_0;
    FUNC_2( &VAR_6->dts, VAR_2 );
}
