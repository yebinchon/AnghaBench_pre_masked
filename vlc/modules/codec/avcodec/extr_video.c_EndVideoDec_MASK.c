
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {int lock; scalar_t__ p_va; int cc; int * p_context; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7( vlc_object_t *VAR_0 )
{
    decoder_t *VAR_1 = (decoder_t *)VAR_0;
    decoder_sys_t *VAR_2 = VAR_1->p_sys;
    AVCodecContext *VAR_3 = VAR_2->p_context;


    if( FUNC_2( VAR_3 ) )
        FUNC_0( VAR_3 );

    FUNC_3( &VAR_2->cc );

    FUNC_1( &VAR_3 );

    if( VAR_2->p_va )
        FUNC_6( VAR_2->p_va );

    FUNC_5( &VAR_2->lock );
    FUNC_4( VAR_2 );
}
