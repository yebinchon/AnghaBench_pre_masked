
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static const char * FUNC_2( const char *VAR_0, const char **VAR_1 )
{
    VAR_0 = FUNC_1( VAR_0, '<' );
    if( VAR_0 )
    {
        *VAR_1 = FUNC_1( VAR_0 + 1, '>' );
        if( *VAR_1 )
        {
            const size_t VAR_2 = *VAR_1 - VAR_0 + 1;
            if( VAR_2 <= 3 )
            {
                if( VAR_2 < 2 || FUNC_0(VAR_0) )
                    *VAR_1 = VAR_0 = ((void*)0);
            }
        } else VAR_0 = ((void*)0);
    }
    return VAR_0;
}
