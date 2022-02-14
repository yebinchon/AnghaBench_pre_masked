
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 int * FUNC_11 (int *,int *) ;
 char* FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_16(nvlist_t *VAR_2, nvlist_t *VAR_3)
{
 if (FUNC_5(VAR_2) != FUNC_5(VAR_3))
  return (VAR_0);





 for (nvpair_t *VAR_4 = FUNC_11(VAR_2, ((void*)0));
     VAR_4 != ((void*)0); VAR_4 = FUNC_11(VAR_2, VAR_4)) {
  char *VAR_5 = FUNC_12(VAR_4);

  if (!FUNC_10(VAR_3, VAR_5))
   return (VAR_0);

  if (FUNC_13(VAR_4) !=
      FUNC_13(FUNC_3(VAR_3, VAR_5)))
   return (VAR_0);

  switch (FUNC_13(VAR_4)) {
  case 131:
   if (FUNC_6(VAR_4) !=
       FUNC_0(VAR_3, VAR_5)) {
    return (VAR_0);
   }
   break;
  case 128:
   if (FUNC_15(FUNC_9(VAR_4),
       FUNC_4(VAR_3, VAR_5))) {
    return (VAR_0);
   }
   break;
  case 130:
   if (FUNC_7(VAR_4) !=
       FUNC_1(VAR_3, VAR_5)) {
    return (VAR_0);
   }
   break;
  case 129:
   if (!FUNC_16(FUNC_8(VAR_4),
       FUNC_2(VAR_3, VAR_5))) {
    return (VAR_0);
   }
   break;
  default:
   (void) FUNC_14("Unexpected type for nvlist_equal\n");
   return (VAR_0);
  }
 }
 return (VAR_1);
}
