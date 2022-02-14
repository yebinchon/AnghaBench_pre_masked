
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int) ;

__attribute__((used)) static void FUNC_4( const char *VAR_1 )
{
    char VAR_2[FUNC_2( VAR_1 ) + 1];
    FUNC_1( VAR_2, VAR_1 );
    char * VAR_3 = VAR_2;
    char * VAR_4 = VAR_3;

    while( *VAR_4 )
    {
        while( *VAR_4 && *VAR_4 != VAR_0) VAR_4++;
        if( !*VAR_4 ) break;
        *VAR_4 = 0;
        if( !FUNC_0( VAR_3 ) )
            FUNC_3( VAR_3, 0700 );
        *VAR_4 = VAR_0;
        VAR_4++;
    }
    FUNC_3( VAR_1, 0700 );
}
