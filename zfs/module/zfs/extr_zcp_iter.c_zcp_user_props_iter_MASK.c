
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int *,int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_2)
{
 char *VAR_3, *VAR_4;
 nvlist_t *VAR_5;
 nvlist_t **VAR_6 = FUNC_6(VAR_2, FUNC_7(1));
 nvpair_t *VAR_7 = FUNC_6(VAR_2, FUNC_7(2));

 do {
  VAR_7 = FUNC_8(*VAR_6, VAR_7);
  if (VAR_7 == ((void*)0)) {
   FUNC_0(*VAR_6);
   *VAR_6 = ((void*)0);
   return (0);
  }
 } while (!FUNC_10(FUNC_9(VAR_7)));

 FUNC_3(VAR_2, VAR_7);
 FUNC_5(VAR_2, FUNC_7(2));

 VAR_5 = FUNC_2(VAR_7);
 VAR_4 = FUNC_1(VAR_5, VAR_1);
 VAR_3 = FUNC_1(VAR_5, VAR_0);

 (void) FUNC_4(VAR_2, FUNC_9(VAR_7));
 (void) FUNC_4(VAR_2, VAR_4);
 (void) FUNC_4(VAR_2, VAR_3);
 return (3);
}
