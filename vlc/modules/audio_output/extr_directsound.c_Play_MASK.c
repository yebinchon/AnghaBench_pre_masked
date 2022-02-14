
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int block_t ;
struct TYPE_4__ {int b_playing; int lock; int cond; int p_dsbuffer; } ;
typedef TYPE_1__ aout_stream_sys_t ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static HRESULT FUNC_7( vlc_object_t *VAR_3, aout_stream_sys_t *VAR_4,
                     block_t *VAR_5 )
{
    HRESULT VAR_6;
    VAR_6 = FUNC_0( VAR_3, VAR_4, VAR_5 );
    if( VAR_6 != VAR_2 )
        return VAR_6;


    VAR_6 = FUNC_1( VAR_4->p_dsbuffer, 0, 0,
                                        VAR_0 );
    if( VAR_6 == VAR_1 )
    {
        FUNC_2( VAR_4->p_dsbuffer );
        VAR_6 = FUNC_1( VAR_4->p_dsbuffer,
                                            0, 0, VAR_0 );
    }
    if( VAR_6 != VAR_2 )
        FUNC_3( VAR_3, "cannot start playing buffer: (hr=0x%lX)", VAR_6 );
    else
    {
        FUNC_5( &VAR_4->lock );
        VAR_4->b_playing = 1;
        FUNC_4(&VAR_4->cond);
        FUNC_6( &VAR_4->lock );

    }
    return VAR_6;
}
