
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int audio_output_t ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0)
{
    bool VAR_1 = FUNC_2(VAR_0 , 1);
    audio_output_t *VAR_2 = FUNC_3(VAR_0);
    if (VAR_2)
    {
        FUNC_0(VAR_2, "equalizer", VAR_1);
        FUNC_1 (VAR_2);
    }
    return 0;
}
