
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_5__ {struct TYPE_5__* psz_name; } ;
typedef TYPE_2__ out_sout_stream_sys_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( vlc_object_t * VAR_0 )
{
    sout_stream_t *VAR_1 = (sout_stream_t*)VAR_0;
    out_sout_stream_sys_t *VAR_2 = (out_sout_stream_sys_t *)VAR_1->p_sys;

    FUNC_0( VAR_2->psz_name );
    FUNC_0( VAR_2 );
}
