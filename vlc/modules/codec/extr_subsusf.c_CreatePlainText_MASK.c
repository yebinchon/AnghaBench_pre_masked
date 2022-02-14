
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static char *FUNC_5( char *VAR_0 )
{
    char *VAR_1 = FUNC_0( VAR_0 );
    char *VAR_2;

    if( !VAR_1 )
        return ((void*)0);

    VAR_2 = FUNC_3( VAR_1, "\t\r\n " );
    while( VAR_2 )
    {
        char VAR_3 = ' ';
        int VAR_4 = FUNC_4( VAR_2, "\t\r\n " );





        for( int VAR_5 = 0; VAR_5 < VAR_4; VAR_5++ )
            if( VAR_2[VAR_5] == '\n' ) VAR_3 = '\n';

        if( VAR_4 > 1 )
        {
            FUNC_1( &VAR_2[1],
                     &VAR_2[VAR_4],
                     FUNC_2( VAR_2 ) - VAR_4 + 1 );
        }
        *VAR_2++ = VAR_3;

        VAR_2 = FUNC_3( VAR_2, "\t\r\n " );
    }
    return VAR_1;
}
