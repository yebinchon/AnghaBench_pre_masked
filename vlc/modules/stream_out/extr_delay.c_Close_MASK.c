
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
typedef int sout_stream_sys_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( vlc_object_t * VAR_0 )
{
    sout_stream_t *VAR_1 = (sout_stream_t*)VAR_0;
    sout_stream_sys_t *VAR_2 = (sout_stream_sys_t *)VAR_1->p_sys;

    FUNC_0( VAR_2 );
}
