
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_6__ {void* id; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2( sout_stream_t *VAR_0, void *VAR_1 )
{
    sout_stream_sys_t *VAR_2 = VAR_0->p_sys;
    FUNC_0( VAR_0 );
    if ( VAR_2->id == VAR_1 )
        VAR_2->id = ((void*)0);
    FUNC_1( VAR_1 );
}
