
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static HANDLE FUNC_2( lua_State *VAR_2 )
{

    HANDLE VAR_3 = FUNC_0(VAR_1);
    if( VAR_3 == VAR_0 )
        FUNC_1( VAR_2, "couldn't find user input handle" );
    return VAR_3;
}
