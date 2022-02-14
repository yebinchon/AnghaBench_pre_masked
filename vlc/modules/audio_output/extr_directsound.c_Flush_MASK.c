
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_playing; int lock; int i_write; int p_dsbuffer; int i_last_read; scalar_t__ i_data; } ;
typedef TYPE_1__ aout_stream_sys_t ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static HRESULT FUNC_4( aout_stream_sys_t *VAR_1 )
{
    HRESULT VAR_2 = FUNC_1( VAR_1->p_dsbuffer );
    if( VAR_2 == VAR_0 )
    {
        FUNC_2(&VAR_1->lock);
        VAR_1->i_data = 0;
        VAR_1->i_last_read = VAR_1->i_write;
        FUNC_0( VAR_1->p_dsbuffer, VAR_1->i_write);
        VAR_1->b_playing = 0;
        FUNC_3(&VAR_1->lock);
    }
    return VAR_2;
}
