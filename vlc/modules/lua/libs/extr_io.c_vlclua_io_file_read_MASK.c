
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*,...) ;
 char* FUNC_2 (int *,int,char*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,size_t,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_2 )
{
    FILE **VAR_3 = (FILE**)FUNC_0( VAR_2, 1, "io_file" );
    if ( !*VAR_3 )
        return FUNC_1( VAR_2, "Attempt to use a closed file" );
    if( FUNC_4( VAR_2, 2 ) == VAR_0 )
    {
        return FUNC_5( VAR_2, (size_t)FUNC_3( VAR_2, 2 ),
                                          *VAR_3 );
    }
    const char* VAR_4 = FUNC_2( VAR_2, 2, "*l" );
    if ( *VAR_4 != '*' )
        return FUNC_1( VAR_2, "Invalid file:read() format: %s", VAR_4 );
    switch ( VAR_4[1] )
    {
        case 'l':
            return FUNC_6( VAR_2, *VAR_3 );
        case 'n':
            return FUNC_7( VAR_2, *VAR_3 );
        case 'a':
            return FUNC_5( VAR_2, VAR_1, *VAR_3 );
        default:
            break;
    }
    return FUNC_1( VAR_2, "Invalid file:read() format: %s", VAR_4 );
}
