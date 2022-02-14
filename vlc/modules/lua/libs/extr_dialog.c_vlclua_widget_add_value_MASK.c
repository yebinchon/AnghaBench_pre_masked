
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct extension_widget_value_t {int b_selected; struct extension_widget_value_t* p_next; int i_id; int psz_text; } ;
typedef int lua_State ;
struct TYPE_4__ {scalar_t__ type; int b_update; TYPE_1__* p_dialog; struct extension_widget_value_t* p_values; } ;
typedef TYPE_2__ extension_widget_t ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct extension_widget_value_t* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10( lua_State *VAR_2 )
{

    extension_widget_t **VAR_3 =
            (extension_widget_t **) FUNC_2( VAR_2, 1, "widget" );
    if( !VAR_3 || !*VAR_3 )
        return FUNC_3( VAR_2, "Can't get pointer to widget" );
    extension_widget_t *VAR_4 = *VAR_3;

    if( VAR_4->type != VAR_0
        && VAR_4->type != VAR_1 )
        return FUNC_3( VAR_2, "method add_value not valid for this widget" );

    if( !FUNC_5( VAR_2, 2 ) )
        return FUNC_3( VAR_2, "widget:add_value usage: (text, id = 0)" );

    struct extension_widget_value_t *VAR_5,
        *VAR_6 = FUNC_0( 1, sizeof( struct extension_widget_value_t ) );
    VAR_6->psz_text = FUNC_7( FUNC_1( VAR_2, 2 ) );
    VAR_6->i_id = FUNC_6( VAR_2, 3 );

    FUNC_8( &VAR_4->p_dialog->lock );

    if( !VAR_4->p_values )
    {
        VAR_4->p_values = VAR_6;
        if( VAR_4->type == VAR_0 )
            VAR_6->b_selected = 1;
    }
    else
    {
        for( VAR_5 = VAR_4->p_values;
             VAR_5->p_next != ((void*)0);
             VAR_5 = VAR_5->p_next )
        { }
        VAR_5->p_next = VAR_6;
    }

    VAR_4->b_update = 1;
    FUNC_9( &VAR_4->p_dialog->lock );

    FUNC_4( VAR_2, 1 );

    return 1;
}
