
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_7__ {TYPE_4__* p_array; } ;
struct TYPE_8__ {size_t i_count; TYPE_4__* p_array; } ;
struct TYPE_10__ {scalar_t__ p_streamparser; TYPE_1__ index; TYPE_2__ cues; } ;
typedef TYPE_4__ demux_sys_t ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int *) ;

void FUNC_4( vlc_object_t *VAR_0 )
{
    demux_t *VAR_1 = (demux_t*)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    for( size_t VAR_3=0; VAR_3< VAR_2->cues.i_count; VAR_3++ )
        FUNC_1( &VAR_2->cues.p_array[VAR_3] );
    FUNC_0( VAR_2->cues.p_array );

    FUNC_0( VAR_2->index.p_array );

    if( VAR_2->p_streamparser )
    {
        FUNC_3( VAR_2->p_streamparser, ((void*)0) );
        FUNC_2( VAR_2->p_streamparser );
    }

    FUNC_0( VAR_2 );
}
