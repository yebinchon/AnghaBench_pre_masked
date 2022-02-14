
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int lua_State ;
typedef int input_item_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_13 (int *,char const*) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static lua_State * FUNC_15( vlc_object_t *VAR_1, input_item_t * VAR_2, const char *VAR_3 )
{
    lua_State * VAR_4 = FUNC_0();
    if( !VAR_4 )
    {
        FUNC_11( VAR_1, "Could not create new Lua State" );
        return ((void*)0);
    }

    FUNC_14( VAR_4, VAR_1 );


    FUNC_1( VAR_4 );

    FUNC_2( VAR_4, "vlc", VAR_0 );

    FUNC_5( VAR_4 );
    FUNC_7( VAR_4 );
    FUNC_8( VAR_4 );
    FUNC_9( VAR_4 );
    FUNC_6( VAR_4 );
    FUNC_10( VAR_4 );
    FUNC_4( VAR_4, VAR_2 );

    if( FUNC_13( VAR_4, VAR_3 ) )
    {
        FUNC_12( VAR_1, "Error while setting the module search path for %s",
                  VAR_3 );
        FUNC_3( VAR_4 );
        return ((void*)0);
    }

    return VAR_4;
}
