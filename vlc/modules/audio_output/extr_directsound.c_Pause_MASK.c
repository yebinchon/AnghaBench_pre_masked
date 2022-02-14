
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_playing; int lock; int cond; int p_dsbuffer; } ;
typedef TYPE_1__ aout_stream_sys_t ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5( aout_stream_sys_t *VAR_2, bool VAR_3 )
{
    HRESULT VAR_4;

    if( VAR_3 )
        VAR_4 = FUNC_1( VAR_2->p_dsbuffer );
    else
        VAR_4 = FUNC_0( VAR_2->p_dsbuffer, 0, 0, VAR_0 );
    if( VAR_4 == VAR_1 )
    {
        FUNC_3( &VAR_2->lock );
        VAR_2->b_playing = !VAR_3;
        if( VAR_2->b_playing )
            FUNC_2( &VAR_2->cond );
        FUNC_4( &VAR_2->lock );
    }
    return VAR_4;
}
