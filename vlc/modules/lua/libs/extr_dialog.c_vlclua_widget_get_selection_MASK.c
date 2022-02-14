
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct extension_widget_value_t {int psz_text; int i_id; scalar_t__ b_selected; struct extension_widget_value_t* p_next; } ;
typedef int lua_State ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__* p_dialog; struct extension_widget_value_t* p_values; } ;
typedef TYPE_2__ extension_widget_t ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_1 )
{

    extension_widget_t **VAR_2 =
            (extension_widget_t **) FUNC_0( VAR_1, 1, "widget" );
    if( !VAR_2 || !*VAR_2 )
        return FUNC_1( VAR_1, "Can't get pointer to widget" );
    extension_widget_t *VAR_3 = *VAR_2;

    if( VAR_3->type != VAR_0 )
        return FUNC_1( VAR_1, "method get_selection not valid for this widget" );


    FUNC_2( VAR_1 );

    FUNC_6( &VAR_3->p_dialog->lock );

    struct extension_widget_value_t *VAR_4;
    for( VAR_4 = VAR_3->p_values;
         VAR_4 != ((void*)0);
         VAR_4 = VAR_4->p_next )
    {
        if( VAR_4->b_selected )
        {
            FUNC_3( VAR_1, VAR_4->i_id );
            FUNC_4( VAR_1, VAR_4->psz_text );
            FUNC_5( VAR_1, -3 );
        }
    }

    FUNC_7( &VAR_3->p_dialog->lock );

    return 1;
}
