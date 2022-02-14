
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (char const*,char**) ;

__attribute__((used)) static bool FUNC_1( const char *VAR_0, float *VAR_1 )
{
    char *VAR_2;
    float VAR_3 = FUNC_0( VAR_0, &VAR_2 );
    if( VAR_3 >= 0.0 && VAR_3 <= 100.0 && *VAR_2 == '%' )
        *VAR_1 = VAR_3 / 100.0;
    return VAR_2 != VAR_0;
}
