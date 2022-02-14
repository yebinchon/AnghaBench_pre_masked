
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_cmd_w; int i_cmd_max; int * p_cmd; } ;
typedef TYPE_1__ ts_storage_t ;
typedef int ts_cmd_t ;


 int FUNC_0 (int,int) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2( ts_storage_t *VAR_0 )
{

    if( VAR_0->i_cmd_w >= VAR_0->i_cmd_max )
        return;

    VAR_0->i_cmd_max = FUNC_0( VAR_0->i_cmd_w, 1 );

    ts_cmd_t *VAR_1 = FUNC_1( VAR_0->p_cmd, VAR_0->i_cmd_max * sizeof(*VAR_0->p_cmd) );
    if( VAR_1 )
        VAR_0->p_cmd = VAR_1;
}
