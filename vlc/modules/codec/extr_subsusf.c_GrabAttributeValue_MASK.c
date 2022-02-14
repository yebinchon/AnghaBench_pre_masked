
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char*,int) ;

__attribute__((used)) static char *FUNC_5( const char *VAR_0,
                                 const char *VAR_1 )
{
    if( VAR_0 && VAR_1 )
    {
        char *VAR_2 = FUNC_1( VAR_1, '>' );
        char *VAR_3 = FUNC_0( VAR_1, VAR_0 );

        if( VAR_3 )
        {
            VAR_3 += FUNC_3( VAR_0 );

            if(( *(VAR_3++) == '=' ) &&
               ( *(VAR_3++) == '\"' ))
            {
                if( VAR_3 < VAR_2 )
                {
                    int VAR_4 = FUNC_2( VAR_3, "\"" );
                    return FUNC_4( VAR_3, VAR_4 );
                }
            }
        }
    }
    return ((void*)0);
}
