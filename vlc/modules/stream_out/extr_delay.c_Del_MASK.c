
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_next; scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_5__ {void* id; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int FUNC_0 (int ,void*) ;

__attribute__((used)) static void FUNC_1( sout_stream_t *VAR_0, void *VAR_1 )
{
    sout_stream_sys_t *VAR_2 = (sout_stream_sys_t *)VAR_0->p_sys;

    if ( VAR_1 == VAR_2->id )
        VAR_2->id = ((void*)0);

    FUNC_0( VAR_0->p_next, VAR_1 );
}
