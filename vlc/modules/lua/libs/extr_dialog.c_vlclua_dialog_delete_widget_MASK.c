
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int lua_State ;
struct TYPE_7__ {scalar_t__ type; int b_kill; int * p_sys_intf; } ;
typedef TYPE_1__ extension_widget_t ;
struct TYPE_8__ {int lock; int cond; int * p_sys_intf; int b_kill; } ;
typedef TYPE_2__ extension_dialog_t ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13( lua_State *VAR_3 )
{

    extension_dialog_t **VAR_4 =
            (extension_dialog_t**) FUNC_1( VAR_3, 1, "dialog" );
    if( !VAR_4 || !*VAR_4 )
        return FUNC_2( VAR_3, "Can't get pointer to dialog" );
    extension_dialog_t *VAR_5 = *VAR_4;


    if( !FUNC_4( VAR_3, 2 ) )
        return FUNC_2( VAR_3, "Argument to del_widget is not a widget" );


    extension_widget_t **VAR_6 =
            (extension_widget_t **) FUNC_1( VAR_3, 2, "widget" );
    if( !VAR_6 || !*VAR_6 )
        return FUNC_2( VAR_3, "Can't get pointer to widget" );
    extension_widget_t *VAR_7 = *VAR_6;


    *VAR_6 = ((void*)0);
    if( VAR_7->type == VAR_0 )
    {

        FUNC_5( VAR_3, VAR_7 );
        FUNC_6( VAR_3 );
        FUNC_7( VAR_3, VAR_1 );
    }

    vlc_object_t *VAR_8 = FUNC_12( VAR_3 );

    VAR_7->b_kill = 1;

    FUNC_3( VAR_3, 0 );
    int VAR_9 = FUNC_9( VAR_8, VAR_5 );

    if( VAR_9 != VAR_2 )
    {
        return FUNC_2( VAR_3, "Could not delete widget" );
    }

    FUNC_10( &VAR_5->lock );





    while( VAR_7->p_sys_intf != ((void*)0) && !VAR_5->b_kill
           && VAR_5->p_sys_intf != ((void*)0) )
    {
        FUNC_8( &VAR_5->cond, &VAR_5->lock );
    }

    VAR_9 = FUNC_0( VAR_5, VAR_7 );

    FUNC_11( &VAR_5->lock );

    if( VAR_9 != VAR_2 )
    {
        return FUNC_2( VAR_3, "Could not remove widget from list" );
    }

    return 1;
}
