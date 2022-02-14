
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

char *FUNC_1 (const char *VAR_0, const char *VAR_1)
{
    char *VAR_2 = (char *)VAR_0;

    if( !*VAR_1 ) return VAR_2;

    while( *VAR_2 )
    {
        if( FUNC_0( (unsigned char)*VAR_2 ) == FUNC_0( (unsigned char)*VAR_1 ) )
        {
            char *VAR_3 = VAR_2 + 1;
            char *VAR_4 = (char *)VAR_1 + 1;
            while( *VAR_3 && *VAR_4
             && FUNC_0( (unsigned char)*VAR_3 ) == FUNC_0( (unsigned char)*VAR_4 ) )
            {
                VAR_3++;
                VAR_4++;
            }
            if( !*VAR_4 ) return VAR_2;
        }
        VAR_2++;
    }
    return ((void*)0);
}
