
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int vlc_object_t ;
typedef int lua_State ;


 int ** FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0)
{
    vlc_object_t **VAR_1 = FUNC_0(VAR_0, 1, "vlc_object");

    FUNC_1(VAR_0, 1);
    FUNC_2((vout_thread_t *)*VAR_1);
    return 0;
}
