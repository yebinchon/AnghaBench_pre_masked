
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_7__ {int b_waiting_iframe; scalar_t__ i_dts; scalar_t__ i_pts; int dts; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_8__ {int i_flags; scalar_t__ i_dts; scalar_t__ i_pts; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3( void *VAR_4, block_t *VAR_5 )
{
    decoder_t *VAR_6 = VAR_4;
    decoder_sys_t *VAR_7 = VAR_6->p_sys;

    if( FUNC_2( VAR_7->b_waiting_iframe ) )
    {
        if( (VAR_5->i_flags & VAR_0) == 0 )
        {
            FUNC_1( VAR_6, "waiting on intra frame" );
            return VAR_1;
        }
        FUNC_1( VAR_6, "synced on intra frame" );
        VAR_7->b_waiting_iframe = 0;
    }



    if( FUNC_2( VAR_7->i_dts == VAR_3 && VAR_7->i_pts == VAR_3 &&
        FUNC_0( &VAR_7->dts ) == VAR_3 ))
    {
        FUNC_1( VAR_6, "need a starting pts/dts" );
        return VAR_1;
    }



    if( FUNC_2( VAR_5->i_dts == VAR_3 ) )
        VAR_5->i_dts = VAR_5->i_pts;

    return VAR_2;
}
