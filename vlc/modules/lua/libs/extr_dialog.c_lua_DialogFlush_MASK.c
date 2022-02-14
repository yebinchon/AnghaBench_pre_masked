
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int extension_dialog_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7( lua_State *VAR_1 )
{
    FUNC_3( VAR_1, "vlc" );
    FUNC_2( VAR_1, -1, "__dialog" );
    extension_dialog_t *VAR_2 = ( extension_dialog_t* )FUNC_4( VAR_1, -1 );

    if( !VAR_2 )
        return VAR_0;

    int VAR_3 = VAR_0;
    if( FUNC_0( VAR_1 ) )
    {
        VAR_3 = FUNC_5( FUNC_6( VAR_1 ), VAR_2 );
        FUNC_1( VAR_1, 0 );
    }

    return VAR_3;
}
