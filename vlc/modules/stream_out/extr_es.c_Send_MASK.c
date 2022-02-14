
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sout_stream_t ;
struct TYPE_2__ {int p_input; int p_mux; } ;
typedef TYPE_1__ sout_stream_id_sys_t ;
typedef int block_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_2( sout_stream_t *VAR_0, void *VAR_1, block_t *VAR_2 )
{
    FUNC_0(VAR_0);
    sout_stream_id_sys_t *VAR_3 = (sout_stream_id_sys_t *)VAR_1;
    return FUNC_1( VAR_3->p_mux, VAR_3->p_input, VAR_2 );
}
