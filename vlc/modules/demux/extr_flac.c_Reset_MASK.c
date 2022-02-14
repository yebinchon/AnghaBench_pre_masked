
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_current_block; int p_packetizer; int i_pts; } ;
typedef TYPE_1__ demux_sys_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( demux_sys_t *VAR_1 )
{
    VAR_1->i_pts = VAR_0;

    FUNC_0( VAR_1->p_packetizer );
    if( VAR_1->p_current_block )
    {
        FUNC_1( VAR_1->p_current_block );
        VAR_1->p_current_block = ((void*)0);
    }
}
