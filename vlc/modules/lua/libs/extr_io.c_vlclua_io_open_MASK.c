
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p_f ;
typedef int lua_State ;
typedef int FILE ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int ** FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int,char*) ;
 int FUNC_10 (int *,int) ;
 int * FUNC_11 (char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_12( lua_State *VAR_2 )
{
    if( FUNC_5( VAR_2 ) < 1 )
        return FUNC_1( VAR_2, "Usage: vlc.io.open(file_path [, mode])" );
    const char* VAR_3 = FUNC_0( VAR_2, 1 );
    const char* VAR_4 = FUNC_3( VAR_2, 2, "r" );
    FILE *VAR_5 = FUNC_11( VAR_3, VAR_4 );
    if ( VAR_5 == ((void*)0) )
        return 0;

    FILE** VAR_6 = FUNC_7( VAR_2, sizeof( VAR_5 ) );
    *VAR_6 = VAR_5;

    if( FUNC_2( VAR_2, "io_file" ) )
    {
        FUNC_6( VAR_2 );
        FUNC_4( VAR_2, ((void*)0), VAR_1 );
        FUNC_9( VAR_2, -2, "__index" );
        FUNC_8( VAR_2, VAR_0 );
        FUNC_9( VAR_2, -2, "__gc" );
    }
    FUNC_10( VAR_2, -2 );
    return 1;
}
