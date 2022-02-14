
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,int *,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4( char **VAR_0, char **VAR_1, int *VAR_2 )
{
    size_t VAR_3 ;
    if( !*VAR_0[0] )
    {
        *VAR_1 = ((void*)0);
        *VAR_2 = 0;
        return 1;
    }
    VAR_3 = FUNC_0( *VAR_0, "/[" );
    if( !VAR_3 && **VAR_0 == '/' )
    {
        VAR_3 = 1;
    }
    *VAR_1 = FUNC_1( *VAR_0, VAR_3 );
    if( FUNC_3(!*VAR_1) )
        return 0;

    *VAR_0 += VAR_3;


    if( **VAR_0 == '[' )
    {
        (*VAR_0)++;
        *VAR_2 = FUNC_2( *VAR_0, ((void*)0), 10 );
        while( **VAR_0 && **VAR_0 != ']' )
        {
            (*VAR_0)++;
        }
        if( **VAR_0 == ']' )
        {
            (*VAR_0)++;
        }
    }
    else
    {
        *VAR_2 = 0;
    }


    while( **VAR_0 == '/' )
    {
        (*VAR_0)++;
    }

    return 1;
}
