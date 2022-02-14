
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;

__attribute__((used)) static const char *FUNC_4( const char *VAR_0, size_t *VAR_1, const char **VAR_2 )
{
    VAR_0 += FUNC_0( VAR_0 ) ? 2 : 1;
    const char *VAR_3 = VAR_0;
    *VAR_1 = 0;
    if( FUNC_2( *VAR_3 ) )
    {
        while( FUNC_1( *VAR_3 ) )
        {
            VAR_3++;
            (*VAR_1)++;
        }
        while( FUNC_3( *VAR_3 ) )
            VAR_3++;
    }
    *VAR_2 = VAR_3;
    return VAR_0;
}
