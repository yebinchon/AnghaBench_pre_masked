
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int * p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
typedef int sout_mux_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_2( vlc_object_t * VAR_0 )
{
    sout_mux_t *VAR_1 = (sout_mux_t*)VAR_0;
    sout_mux_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_1( VAR_1, "Dummy/Raw muxer closed" );
    FUNC_0( VAR_2 );
}
