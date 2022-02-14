
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,void const*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int,scalar_t__) ;
 int FUNC_11 (int *,int,char*) ;
 void* FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *,int) ;

__attribute__((used)) static int FUNC_15(lua_State* VAR_5) {
 lua_State *VAR_6 = FUNC_0();
 int VAR_7;
 const void * VAR_8;
 FUNC_2(VAR_6);




 FUNC_8(VAR_5, VAR_0);

 FUNC_14(VAR_5, VAR_6, VAR_3);
 FUNC_4(VAR_5, 1);

 FUNC_8(VAR_5, VAR_1);
 VAR_8 = FUNC_12(VAR_5, -1);
 VAR_7 = FUNC_14(VAR_5, VAR_6, VAR_4);
 FUNC_4(VAR_5, 1);

 FUNC_13(VAR_5, VAR_6);

 FUNC_2(VAR_5);
 FUNC_7(VAR_5, "[REGISTRY Level 1]");
 FUNC_11(VAR_5, -2, "name");
 FUNC_6(VAR_5, VAR_4);
 FUNC_11(VAR_5, -2, "type");
 FUNC_6(VAR_5, VAR_7);
 FUNC_11(VAR_5, -2, "size");
 FUNC_5(VAR_5, "%p", VAR_8);
 FUNC_11(VAR_5, -2, "pointer");
 FUNC_7(VAR_5, "");
 FUNC_11(VAR_5, -2, "used_in");
 FUNC_10(VAR_5, -2, FUNC_3(VAR_5, -2) + 1);

 FUNC_1(VAR_6);

 return 1;
}
