
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int input_item_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int ** FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_8( lua_State *VAR_2, input_item_t *VAR_3 )
{
    FUNC_0( VAR_3 );
    input_item_t **VAR_4 = FUNC_4( VAR_2, sizeof( input_item_t* ) );
    *VAR_4 = VAR_3;

    if( FUNC_1( VAR_2, "input_item" ) )
    {
        FUNC_3( VAR_2 );
        FUNC_2( VAR_2, ((void*)0), VAR_1 );
        FUNC_6( VAR_2, -2, "__index" );
        FUNC_5( VAR_2, VAR_0 );
        FUNC_6( VAR_2, -2, "__gc" );
    }

    FUNC_7(VAR_2, -2);

    return 1;
}
