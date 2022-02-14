
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_aout_busy; int lock_hold; int * p_aout; int p_parent; } ;
typedef TYPE_1__ input_resource_t ;
typedef int audio_output_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

audio_output_t *FUNC_5( input_resource_t *VAR_0 )
{
    audio_output_t *VAR_1;

    FUNC_3( &VAR_0->lock_hold );
    VAR_1 = VAR_0->p_aout;

    if( VAR_1 == ((void*)0) || VAR_0->b_aout_busy )
    {
        FUNC_2( VAR_0->p_parent, "creating audio output" );
        FUNC_4( &VAR_0->lock_hold );

        VAR_1 = FUNC_0( VAR_0->p_parent );
        if( VAR_1 == ((void*)0) )
            return ((void*)0);

        FUNC_3( &VAR_0->lock_hold );
        if( VAR_0->p_aout == ((void*)0) )
            VAR_0->p_aout = VAR_1;
    }
    else
        FUNC_2( VAR_0->p_parent, "reusing audio output" );

    if( VAR_0->p_aout == VAR_1 )
    {
        FUNC_1( !VAR_0->b_aout_busy );
        VAR_0->b_aout_busy = 1;
    }
    FUNC_4( &VAR_0->lock_hold );
    return VAR_1;
}
