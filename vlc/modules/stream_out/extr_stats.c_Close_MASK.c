
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_5__ {struct TYPE_5__* prefix; scalar_t__ output; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2( vlc_object_t * VAR_0 )
{
    sout_stream_t *VAR_1 = (sout_stream_t*)VAR_0;
    sout_stream_sys_t *VAR_2 = (sout_stream_sys_t *)VAR_1->p_sys;

    if( VAR_2->output )
        FUNC_0( VAR_2->output );

    FUNC_1( VAR_2->prefix );
    FUNC_1( VAR_2 );
}
