
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 float FUNC_1 (char const*,char**) ;

__attribute__((used)) static bool FUNC_2( const char *VAR_0, float *VAR_1, float *VAR_2 )
{
    char *VAR_3;
    float VAR_4 = FUNC_1( VAR_0, &VAR_3 );
    if( VAR_3 != VAR_0 &&
        VAR_4 >= 0.0 && VAR_4 <= 100.0 && VAR_3 && *VAR_3 == '%' )
    {
        VAR_0 = FUNC_0( VAR_3, ',' );
        if( VAR_0 )
        {
            float VAR_5 = FUNC_1( ++VAR_0, &VAR_3 );
            if( VAR_3 != VAR_0 &&
                VAR_5 >= 0.0 && VAR_5 <= 100.0 && VAR_3 && *VAR_3 == '%' )
            {
                *VAR_1 = VAR_4 / 100.0;
                *VAR_2 = VAR_5 / 100.0;
                return 1;
            }
        }
    }
    return 0;
}
