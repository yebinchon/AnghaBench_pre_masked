
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interrupt; } ;
typedef TYPE_1__ vlclua_dtable_t ;
typedef int vlc_interrupt_t ;
typedef int lua_State ;


 int * FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;

vlc_interrupt_t *FUNC_2( lua_State *VAR_0 )
{
    vlclua_dtable_t *VAR_1 = FUNC_1( VAR_0 );
    return FUNC_0( VAR_1->interrupt );
}
