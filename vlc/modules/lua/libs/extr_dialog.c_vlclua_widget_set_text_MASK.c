
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int type; int b_update; TYPE_1__* p_dialog; int psz_text; } ;
typedef TYPE_2__ extension_widget_t ;
struct TYPE_3__ {int lock; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9( lua_State *VAR_0 )
{

    extension_widget_t **VAR_1 =
            (extension_widget_t **) FUNC_2( VAR_0, 1, "widget" );
    if( !VAR_1 || !*VAR_1 )
        return FUNC_3( VAR_0, "Can't get pointer to widget" );
    extension_widget_t *VAR_2 = *VAR_1;


    if( !FUNC_5( VAR_0, 2 ) )
        return FUNC_3( VAR_0, "widget:set_text usage: (text)" );


    switch( VAR_2->type )
    {
        case 131:
        case 136:
        case 133:
        case 128:
        case 129:
        case 134:
        case 135:
            break;
        case 130:
        case 132:
        default:
            return FUNC_3( VAR_0, "method set_text not valid for this widget" );
    }

    FUNC_7( &VAR_2->p_dialog->lock );


    VAR_2->b_update = 1;
    FUNC_0( VAR_2->psz_text );
    VAR_2->psz_text = FUNC_6( FUNC_1( VAR_0, 2 ) );

    FUNC_8( &VAR_2->p_dialog->lock );

    FUNC_4( VAR_0, 1 );

    return 1;
}
