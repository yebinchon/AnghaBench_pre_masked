
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int b_hide; } ;
typedef TYPE_1__ extension_dialog_t ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3( lua_State *VAR_0 )
{
    extension_dialog_t **VAR_1 =
            (extension_dialog_t**) FUNC_0( VAR_0, 1, "dialog" );
    if( !VAR_1 || !*VAR_1 )
        return FUNC_1( VAR_0, "Can't get pointer to dialog" );
    extension_dialog_t *VAR_2 = *VAR_1;

    VAR_2->b_hide = 1;
    FUNC_2( VAR_0, 1 );

    return 1;
}
