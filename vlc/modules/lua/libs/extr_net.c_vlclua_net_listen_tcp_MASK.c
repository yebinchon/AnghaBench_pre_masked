
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,char const*,int) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int** FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int,char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int*) ;
 int* FUNC_11 (int *,char const*,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ) ;
 int * FUNC_15 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_16( lua_State *VAR_2 )
{
    vlc_object_t *VAR_3 = FUNC_15( VAR_2 );
    const char *VAR_4 = FUNC_1( VAR_2, 1 );
    int VAR_5 = FUNC_0( VAR_2, 2 );
    int *VAR_6 = FUNC_11( VAR_3, VAR_4, VAR_5 );
    if( VAR_6 == ((void*)0) )
        return FUNC_2( VAR_2, "Cannot listen on %s:%d", VAR_4, VAR_5 );

    for( unsigned VAR_7 = 0; VAR_6[VAR_7] != -1; VAR_7++ )
        if( FUNC_13( VAR_2, VAR_6[VAR_7] ) == -1 )
        {
            while( VAR_7 > 0 )
                FUNC_14( VAR_2, FUNC_12( VAR_2, VAR_6[--VAR_7] ) );

            FUNC_10( VAR_6 );
            return FUNC_2( VAR_2, "Cannot listen on %s:%d", VAR_4, VAR_5 );
        }

    int **VAR_8 = FUNC_6( VAR_2, sizeof( int * ) );
    *VAR_8 = VAR_6;

    if( FUNC_3( VAR_2, "net_listen" ) )
    {
        FUNC_5( VAR_2 );
        FUNC_4( VAR_2, ((void*)0), VAR_1 );
        FUNC_8( VAR_2, -2, "__index" );
        FUNC_7( VAR_2, VAR_0 );
        FUNC_8( VAR_2, -2, "__gc" );
    }

    FUNC_9( VAR_2, -2 );
    return 1;
}
