
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int lua_State ;
typedef int extension_dialog_t ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_0 )
{
    vlc_object_t *VAR_1 = FUNC_4( VAR_0 );

    extension_dialog_t **VAR_2 =
            (extension_dialog_t**) FUNC_0( VAR_0, 1, "dialog" );
    if( !VAR_2 || !*VAR_2 )
        return FUNC_1( VAR_0, "Can't get pointer to dialog" );
    extension_dialog_t *VAR_3 = *VAR_2;


    FUNC_3( VAR_1, VAR_3 );


    FUNC_2( VAR_0, 0 );

    return 1;
}
