
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bo_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3( bo_t *VAR_0, const char VAR_1[4],
                               const char *VAR_2 )
{
    if ( VAR_2 == ((void*)0) ) return 1;
    const char *VAR_3 = VAR_2;
    FUNC_0( VAR_1 );
    while (*VAR_3) FUNC_2( VAR_0, *VAR_3++ );
    FUNC_2( VAR_0, 0 );
    FUNC_1( 0 );
}
