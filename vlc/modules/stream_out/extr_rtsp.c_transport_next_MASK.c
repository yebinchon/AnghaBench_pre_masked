
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const) ;

__attribute__((used)) static inline const char *FUNC_1( const char *VAR_0 )
{

    VAR_0 = FUNC_0( VAR_0, ',' );
    if( VAR_0 == ((void*)0) )
        return ((void*)0);

    VAR_0++;
    while( FUNC_0( "\r\n\t ", *VAR_0 ) )
        VAR_0++;

    return (*VAR_0) ? VAR_0 : ((void*)0);
}
