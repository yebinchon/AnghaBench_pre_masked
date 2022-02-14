
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3( lua_State *VAR_0 )
{
    FILE **VAR_1 = (FILE**)FUNC_1( VAR_0, 1, "io_file" );
    if ( !*VAR_1 )
        return FUNC_2( VAR_0, "Attempt to use a closed file" );
    FUNC_0( *VAR_1 );
    return 0;
}
