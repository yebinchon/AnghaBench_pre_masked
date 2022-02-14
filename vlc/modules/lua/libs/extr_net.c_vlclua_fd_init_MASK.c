
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fdc; int * fdv; int * interrupt; } ;
typedef TYPE_1__ vlclua_dtable_t ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;

int FUNC_4( lua_State *VAR_1, vlclua_dtable_t *VAR_2 )
{
    VAR_2->interrupt = FUNC_2();
    if( FUNC_1(VAR_2->interrupt == ((void*)0)) )
        return -1;
    VAR_2->fdv = ((void*)0);
    VAR_2->fdc = 0;
    FUNC_3( VAR_1, VAR_0, VAR_2 );
    FUNC_0( VAR_1 );
    return 0;
}
