
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int type; int psz_text; } ;
typedef TYPE_1__ extension_widget_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_0, int VAR_1 )
{

    if( !FUNC_4( VAR_0, 2 ) && !FUNC_3( VAR_0, 2 ) )
        return FUNC_2( VAR_0, "dialog:add_text_input usage: (text = nil)" );

    extension_widget_t *VAR_2 = FUNC_0( 1, sizeof( extension_widget_t ) );
    VAR_2->type = VAR_1;
    if( !FUNC_3( VAR_0, 2 ) )
        VAR_2->psz_text = FUNC_5( FUNC_1( VAR_0, 2 ) );

    return FUNC_6( VAR_0, 1, VAR_2 );
}
