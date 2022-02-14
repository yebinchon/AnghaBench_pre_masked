
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;

__attribute__((used)) static unsigned FUNC_1( const char *VAR_0 )
{
    unsigned VAR_1 = 0;
    while( VAR_0 && *VAR_0 )
        VAR_0 = FUNC_0( VAR_0 + 1, '\n' );
    return VAR_1;
}
