
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_action_id_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3( lua_State *VAR_0 )
{
    vlc_action_id_t VAR_1 = FUNC_2( FUNC_0( VAR_0, 1 ) );
    if (VAR_1 == 0)
        return 0;
    FUNC_1( VAR_0, VAR_1 );
    return 1;
}
