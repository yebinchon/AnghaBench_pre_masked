
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ extension_widget_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2( lua_State *VAR_1 )
{
    extension_widget_t *VAR_2 = FUNC_0( 1, sizeof( extension_widget_t ) );
    VAR_2->type = VAR_0;

    return FUNC_1( VAR_1, 0, VAR_2 );
}
