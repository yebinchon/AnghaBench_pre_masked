
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,char*) ;

void FUNC_3( lua_State *VAR_4 )
{
    FUNC_1( VAR_4 );





    FUNC_0( VAR_4, VAR_3 ); FUNC_2( VAR_4, -2, "ENOENT" );;
    FUNC_0( VAR_4, VAR_1 ); FUNC_2( VAR_4, -2, "EEXIST" );;
    FUNC_0( VAR_4, VAR_0 ); FUNC_2( VAR_4, -2, "EACCES" );;
    FUNC_0( VAR_4, VAR_2 ); FUNC_2( VAR_4, -2, "EINVAL" );;



    FUNC_2( VAR_4, -2, "errno" );
}
