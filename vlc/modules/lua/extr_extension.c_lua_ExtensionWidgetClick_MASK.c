
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
typedef int extensions_manager_t ;
typedef int extension_widget_t ;
struct TYPE_7__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ extension_t ;
struct TYPE_6__ {int L; } ;


 int * FUNC_0 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4( extensions_manager_t *VAR_3,
                              extension_t *VAR_4,
                              extension_widget_t *VAR_5 )
{
    if( !VAR_4->p_sys->L )
        return VAR_2;

    lua_State *VAR_6 = FUNC_0( VAR_3, VAR_4 );
    FUNC_3( VAR_6, VAR_5 );
    FUNC_2( VAR_6, VAR_1 );
    return FUNC_1( VAR_3, VAR_4, ((void*)0), VAR_0 );
}
