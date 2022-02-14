
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,long,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 long FUNC_4 (int *,int,int ) ;
 char* FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_3 )
{
    FILE **VAR_4 = (FILE**)FUNC_2( VAR_3, 1, "io_file" );
    if ( !*VAR_4 )
        return FUNC_3( VAR_3, "Attempt to use a closed file" );
    const char* VAR_5 = FUNC_5( VAR_3, 2, ((void*)0) );
    if ( VAR_5 != ((void*)0) )
    {
        long VAR_6 = FUNC_4( VAR_3, 3, 0 );
        int VAR_7;
        if ( !FUNC_7( VAR_5, "set" ) )
            VAR_7 = VAR_2;
        else if ( !FUNC_7( VAR_5, "end" ) )
            VAR_7 = VAR_1;
        else
            VAR_7 = VAR_0;
        if( FUNC_0( *VAR_4, VAR_6, VAR_7 ) != 0 )
            return FUNC_3( VAR_3, "Failed to seek" );
    }
    FUNC_6( VAR_3, FUNC_1( *VAR_4 ) );
    return 1;
}
