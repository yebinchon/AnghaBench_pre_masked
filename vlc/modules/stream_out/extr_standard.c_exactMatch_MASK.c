
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;

__attribute__((used)) static bool FUNC_1( const char *VAR_0, const char *VAR_1,
                        size_t VAR_2 )
{
    if ( FUNC_0( VAR_0, VAR_1, VAR_2 ) )
        return 0;
    else
        return ( VAR_0[VAR_2] < 'a' || VAR_0[VAR_2] > 'z' );
}
