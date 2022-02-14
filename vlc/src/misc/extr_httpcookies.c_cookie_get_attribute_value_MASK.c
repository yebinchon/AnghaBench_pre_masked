
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 size_t FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,size_t) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*,char const*,size_t) ;

__attribute__((used)) static char *FUNC_6( const char *VAR_0, const char *VAR_1 )
{
    size_t VAR_2 = FUNC_2( VAR_1 );
    const char * VAR_3 = FUNC_0( VAR_0, ';' );
    while( VAR_3 )
    {

        VAR_3++;
        VAR_3 = VAR_3 + FUNC_4( VAR_3, " " );

        if( !FUNC_5( VAR_3, VAR_1, VAR_2 )
         && (VAR_3[VAR_2] == '=') )
        {
            VAR_3 += VAR_2 + 1;
            size_t VAR_4 = FUNC_1( VAR_3, ";" );
            return FUNC_3( VAR_3, VAR_4 );
        }

        VAR_3 = FUNC_0( VAR_3, ';' );
    }
    return ((void*)0);
}
