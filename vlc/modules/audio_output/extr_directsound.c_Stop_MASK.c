
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_playing; int * p_dsobject; int * p_dsbuffer; int * p_notify; int lock; int cond; int eraser_thread; } ;
typedef TYPE_1__ aout_stream_sys_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static HRESULT FUNC_11( aout_stream_sys_t *VAR_1 )
{
    FUNC_9( &VAR_1->lock );
    VAR_1->b_playing = 1;
    FUNC_6( &VAR_1->cond );
    FUNC_10( &VAR_1->lock );
    FUNC_4( VAR_1->eraser_thread );
    FUNC_7( VAR_1->eraser_thread, ((void*)0) );
    FUNC_5( &VAR_1->cond );
    FUNC_8( &VAR_1->lock );

    if( VAR_1->p_notify != ((void*)0) )
    {
        FUNC_2(VAR_1->p_notify );
        VAR_1->p_notify = ((void*)0);
    }
    if( VAR_1->p_dsbuffer != ((void*)0) )
    {
        FUNC_1( VAR_1->p_dsbuffer );
        FUNC_0( VAR_1->p_dsbuffer );
        VAR_1->p_dsbuffer = ((void*)0);
    }
    if( VAR_1->p_dsobject != ((void*)0) )
    {
        FUNC_3( VAR_1->p_dsobject );
        VAR_1->p_dsobject = ((void*)0);
    }
    return VAR_0;
}
