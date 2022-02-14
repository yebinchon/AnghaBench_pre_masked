
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1( char **VAR_0, const char *VAR_1 )
{
    if( !VAR_0 || !VAR_1 )
        return -1;

    for( int VAR_2 = 0; VAR_0[VAR_2]; VAR_2++ )
    {
        if( !FUNC_0( VAR_0[VAR_2], VAR_1 ) ||
            ( !FUNC_0( VAR_0[VAR_2], "any" ) && FUNC_0( VAR_1, "none") ) )
            return VAR_2;
        if( !FUNC_0( VAR_0[VAR_2], "none" ) )
            break;
    }

    return -1;
}
