
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static const char *FUNC_1( const char *VAR_1 )
{
    const char *VAR_2 = VAR_1 + FUNC_0( VAR_1 );


    while( VAR_2 > VAR_1 && VAR_2[-1] == VAR_0 )
        --VAR_2;


    while( VAR_2 > VAR_1 && VAR_2[-1] != VAR_0 )
        --VAR_2;

    return VAR_2;
}
