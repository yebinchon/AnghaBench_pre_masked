
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,size_t*,int *) ;

__attribute__((used)) static bool FUNC_3( char **VAR_0, size_t *VAR_1, FILE *VAR_2 )
{
    ssize_t VAR_3 = FUNC_2( VAR_0, VAR_1, VAR_2 );

    if( VAR_3 == -1 )
    {

        FUNC_1( *VAR_0 );
        *VAR_0 = ((void*)0);
        return 0;
    }

    if( VAR_3 > 0 && (*VAR_0)[ VAR_3 - 1 ] == '\n' )
        (*VAR_0)[ VAR_3 - 1 ] = '\0';
    FUNC_0( *VAR_0 );

    return 1;
}
