
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4( char *VAR_0, const char *VAR_1 )
{
    char *VAR_2 = VAR_0;
    char *VAR_3 = VAR_0 + FUNC_3( VAR_0 );
    int VAR_4 = 0;

    while( VAR_2 < VAR_3 )
    {
        char *VAR_5 = FUNC_2( VAR_2, '&' );

        if( !VAR_5 ) VAR_5 = VAR_3;

        *VAR_5 = 0;

        VAR_2 = FUNC_0( VAR_2 );
        if( !FUNC_1( VAR_2, VAR_1 ) )
            return VAR_4;

        VAR_2 = VAR_5 + 1;
        ++VAR_4;
    }

    return -1;
}
