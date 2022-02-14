
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_5__ {int p_mux; } ;
typedef TYPE_2__ sout_stream_sys_t ;
typedef int sout_input_t ;
typedef int block_t ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_1( sout_stream_t *VAR_0, void *VAR_1, block_t *VAR_2 )
{
    sout_stream_sys_t *VAR_3 = VAR_0->p_sys;
    return FUNC_0( VAR_3->p_mux, (sout_input_t*)VAR_1, VAR_2 );
}
