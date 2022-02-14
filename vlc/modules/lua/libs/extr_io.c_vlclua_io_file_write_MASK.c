
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (char const*,int,size_t,int *) ;
 char* FUNC_2 (int *,int,size_t*) ;
 scalar_t__ FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9( lua_State *VAR_2 )
{
    FILE **VAR_3 = (FILE**)FUNC_3( VAR_2, 1, "io_file" );
    if ( !*VAR_3 )
        return FUNC_4( VAR_2, "Attempt to use a closed file" );
    int VAR_4 = FUNC_5( VAR_2 );
    bool VAR_5 = 1;
    for ( int VAR_6 = 2; VAR_6 <= VAR_4; ++VAR_6 )
    {
        bool VAR_7;
        if ( FUNC_8( VAR_2, VAR_6 ) == VAR_1 )
            VAR_7 = FUNC_0(*VAR_3, VAR_0, FUNC_7( VAR_2, VAR_6 ) ) > 0;
        else
        {
            size_t VAR_8;
            const char* VAR_9 = FUNC_2( VAR_2, VAR_6, &VAR_8 );
            VAR_7 = FUNC_1(VAR_9, sizeof(*VAR_9), VAR_8, *VAR_3 ) > 0;
        }
        VAR_5 = VAR_5 && VAR_7;
    }
    FUNC_6( VAR_2, VAR_5 );
    return 1;
}
