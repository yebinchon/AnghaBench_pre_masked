
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int * p_sys; int psz_text; int type; } ;
typedef TYPE_1__ extension_widget_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11( lua_State *VAR_2 )
{

    if( !FUNC_4( VAR_2, 2 ) || !FUNC_3( VAR_2, 3 ) )
        return FUNC_2( VAR_2, "dialog:add_button usage: (text, func)" );

    extension_widget_t *VAR_3 = FUNC_0( 1, sizeof( extension_widget_t ) );
    VAR_3->type = VAR_0;
    VAR_3->psz_text = FUNC_9( FUNC_1( VAR_2, 2 ) );
    FUNC_8( VAR_2, 10 );
    FUNC_5( VAR_2, VAR_3 );
    FUNC_6( VAR_2, 3 );
    FUNC_7( VAR_2, VAR_1 );
    VAR_3->p_sys = ((void*)0);

    return FUNC_10( VAR_2, 2, VAR_3 );
}
