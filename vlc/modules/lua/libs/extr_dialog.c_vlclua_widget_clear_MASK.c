
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct extension_widget_value_t {struct extension_widget_value_t* psz_text; struct extension_widget_value_t* p_next; } ;
typedef int lua_State ;
struct TYPE_4__ {scalar_t__ type; int b_update; TYPE_1__* p_dialog; struct extension_widget_value_t* p_values; } ;
typedef TYPE_2__ extension_widget_t ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct extension_widget_value_t*) ;
 scalar_t__ FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_2 )
{

    extension_widget_t **VAR_3 =
            (extension_widget_t **) FUNC_1( VAR_2, 1, "widget" );
    if( !VAR_3 || !*VAR_3 )
        return FUNC_2( VAR_2, "Can't get pointer to widget" );
    extension_widget_t *VAR_4 = *VAR_3;

    if( VAR_4->type != VAR_0
        && VAR_4->type != VAR_1 )
        return FUNC_2( VAR_2, "method clear not valid for this widget" );

    struct extension_widget_value_t *VAR_5, *VAR_6;

    FUNC_4( &VAR_4->p_dialog->lock );

    for( VAR_5 = VAR_4->p_values;
         VAR_5 != ((void*)0);
         VAR_5 = VAR_6 )
    {
        VAR_6 = VAR_5->p_next;
        FUNC_0( VAR_5->psz_text );
        FUNC_0( VAR_5 );
    }

    VAR_4->p_values = ((void*)0);
    VAR_4->b_update = 1;

    FUNC_5( &VAR_4->p_dialog->lock );

    FUNC_3( VAR_2, 1 );

    return 1;
}
