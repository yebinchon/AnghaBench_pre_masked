
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**,size_t*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static bool FUNC_2( const char *VAR_0, size_t VAR_1,
                                   const char **VAR_2, size_t *VAR_3,
                                   const char **VAR_4, size_t *VAR_5 )
{
    const char *VAR_6 = FUNC_1( VAR_0, '=' );
    if( !VAR_6 )
        return 0;

    size_t VAR_7 = VAR_6 - VAR_0;
    VAR_6++;
    size_t VAR_8 = &VAR_0[VAR_1] - VAR_6;

    FUNC_0( &VAR_0, &VAR_7 );
    FUNC_0( &VAR_6, &VAR_8 );

    if( !VAR_7 || !VAR_8 )
        return 0;

    *VAR_2 = VAR_0;
    *VAR_3 = VAR_7;

    *VAR_4 = VAR_6;
    *VAR_5 = VAR_8;

    return 1;
}
