
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock_hold; int * p_aout; } ;
typedef TYPE_1__ input_resource_t ;
typedef int audio_output_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

audio_output_t *FUNC_3( input_resource_t *VAR_0 )
{
    audio_output_t *VAR_1;

    FUNC_1( &VAR_0->lock_hold );
    VAR_1 = VAR_0->p_aout;
    if( VAR_1 != ((void*)0) )
        FUNC_0(VAR_1);
    FUNC_2( &VAR_0->lock_hold );

    return VAR_1;
}
