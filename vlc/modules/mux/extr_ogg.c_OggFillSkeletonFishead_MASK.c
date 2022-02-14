
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_5__ {int i_pos; int i_segment_start; int i_data_start; } ;
typedef TYPE_2__ sout_mux_sys_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3( uint8_t *VAR_0, sout_mux_t *VAR_1 )
{
    sout_mux_sys_t *VAR_2 = VAR_1->p_sys;
    FUNC_2( VAR_0, "fishead", 8 );
    FUNC_1( &VAR_0[8], 4 );
    FUNC_1( &VAR_0[10], 0 );
    FUNC_0( &VAR_0[20], 1000 );
    FUNC_0( &VAR_0[36], 1000 );
    FUNC_0( &VAR_0[64], VAR_2->i_pos - VAR_2->i_segment_start );
    FUNC_0( &VAR_0[72], VAR_2->i_data_start - VAR_2->i_segment_start );
}
