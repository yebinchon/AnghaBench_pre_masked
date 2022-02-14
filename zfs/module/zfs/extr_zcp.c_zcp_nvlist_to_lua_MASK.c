
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int lua_State ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,char*,int) ;

int
FUNC_10(lua_State *VAR_3, nvlist_t *VAR_4,
    char *VAR_5, int VAR_6)
{
 nvpair_t *VAR_7;
 FUNC_0(VAR_3);
 boolean_t VAR_8 = VAR_0;




 for (VAR_7 = FUNC_6(VAR_4, ((void*)0));
     VAR_7 != ((void*)0); VAR_7 = FUNC_6(VAR_4, VAR_7)) {
  if (FUNC_8(VAR_7) != VAR_2) {
   VAR_8 = VAR_1;
   break;
  }
 }
 if (!VAR_8) {
  int VAR_9 = 1;
  for (VAR_7 = FUNC_6(VAR_4, ((void*)0));
      VAR_7 != ((void*)0); VAR_7 = FUNC_6(VAR_4, VAR_7)) {
   (void) FUNC_2(VAR_3, VAR_9);
   (void) FUNC_3(VAR_3, FUNC_7(VAR_7));
   (void) FUNC_5(VAR_3, -3);
   VAR_9++;
  }
 } else {
  for (VAR_7 = FUNC_6(VAR_4, ((void*)0));
      VAR_7 != ((void*)0); VAR_7 = FUNC_6(VAR_4, VAR_7)) {
   int VAR_10 = FUNC_9(VAR_3, VAR_7,
       VAR_5, VAR_6);
   if (VAR_10 != 0) {
    FUNC_1(VAR_3, 1);
    return (VAR_10);
   }
   (void) FUNC_4(VAR_3, -2, FUNC_7(VAR_7));
  }
 }
 return (0);
}
