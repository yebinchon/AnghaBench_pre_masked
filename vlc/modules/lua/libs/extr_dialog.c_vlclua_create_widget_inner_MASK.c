
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {void* i_height; void* i_width; void* i_vert_span; void* i_horiz_span; void* i_row; void* i_column; TYPE_2__* p_dialog; } ;
typedef TYPE_1__ extension_widget_t ;
struct TYPE_8__ {int lock; } ;
typedef TYPE_2__ extension_dialog_t ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 void* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 TYPE_1__** FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,char*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_14( lua_State *VAR_1, int VAR_2,
                                       extension_widget_t *VAR_3 )
{
    int VAR_4 = VAR_2 + 2;


    extension_dialog_t **VAR_5 =
            (extension_dialog_t**) FUNC_2( VAR_1, 1, "dialog" );
    if( !VAR_5 || !*VAR_5 )
        return FUNC_3( VAR_1, "Can't get pointer to dialog" );
    extension_dialog_t *VAR_6 = *VAR_5;


    VAR_3->p_dialog = VAR_6;


    if( FUNC_7( VAR_1, VAR_4 ) )
        VAR_3->i_column = FUNC_1( VAR_1, VAR_4 );
    else goto end_of_args;
    if( FUNC_7( VAR_1, ++VAR_4 ) )
        VAR_3->i_row = FUNC_1( VAR_1, VAR_4 );
    else goto end_of_args;
    if( FUNC_7( VAR_1, ++VAR_4 ) )
        VAR_3->i_horiz_span = FUNC_1( VAR_1, VAR_4 );
    else goto end_of_args;
    if( FUNC_7( VAR_1, ++VAR_4 ) )
        VAR_3->i_vert_span = FUNC_1( VAR_1, VAR_4 );
    else goto end_of_args;
    if( FUNC_7( VAR_1, ++VAR_4 ) )
        VAR_3->i_width = FUNC_1( VAR_1, VAR_4 );
    else goto end_of_args;
    if( FUNC_7( VAR_1, ++VAR_4 ) )
        VAR_3->i_height = FUNC_1( VAR_1, VAR_4 );
    else goto end_of_args;

end_of_args:
    FUNC_12( &VAR_6->lock );


    FUNC_0( VAR_6, VAR_3 );

    FUNC_13( &VAR_6->lock );


    extension_widget_t **VAR_7 = FUNC_9( VAR_1, sizeof( extension_widget_t* ) );
    *VAR_7 = VAR_3;
    if( FUNC_4( VAR_1, "widget" ) )
    {
        FUNC_8( VAR_1 );
        FUNC_5( VAR_1, ((void*)0), VAR_0 );
        FUNC_10( VAR_1, -2, "__index" );
    }
    FUNC_11( VAR_1, -2 );

    FUNC_6( VAR_1, 1 );

    return 1;
}
