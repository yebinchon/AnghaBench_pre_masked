
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_1 ;

int FUNC_4(lua_State *VAR_2)
{

    FUNC_1(VAR_2, "udp{connected}", VAR_1);
    FUNC_1(VAR_2, "udp{unconnected}", VAR_1);

    FUNC_0(VAR_2, "udp{connected}", "udp{any}");
    FUNC_0(VAR_2, "udp{unconnected}", "udp{any}");
    FUNC_0(VAR_2, "udp{connected}", "select{able}");
    FUNC_0(VAR_2, "udp{unconnected}", "select{able}");




    FUNC_2(VAR_2, ((void*)0), VAR_0, 0);

    return 0;
}
