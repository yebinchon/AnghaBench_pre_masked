
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int type; scalar_t__ psz_text; TYPE_2__* p_dialog; } ;
typedef TYPE_1__ extension_widget_t ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_2__ extension_dialog_t ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_0 )
{

    extension_widget_t **VAR_1 =
            (extension_widget_t **) FUNC_1( VAR_0, 1, "widget" );
    if( !VAR_1 || !*VAR_1 )
        return FUNC_2( VAR_0, "Can't get pointer to widget" );
    extension_widget_t *VAR_2 = *VAR_1;


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
            return FUNC_2( VAR_0, "method get_text not valid for this widget" );
    }

    extension_dialog_t *VAR_3 = VAR_2->p_dialog;
    FUNC_5( &VAR_3->lock );

    char *VAR_4 = ((void*)0);
    if( VAR_2->psz_text )
        VAR_4 = FUNC_4( VAR_2->psz_text );
    FUNC_6( &VAR_3->lock );

    FUNC_3( VAR_0, VAR_4 );

    FUNC_0( VAR_4 );
    return 1;
}
