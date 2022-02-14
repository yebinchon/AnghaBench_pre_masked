
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;




 int * FUNC_0 (int *) ;
 int ** FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(nvpair_t *VAR_0)
{
 switch (FUNC_3(VAR_0)) {
 case 129:
  FUNC_4(FUNC_0(VAR_0));
  break;
 case 128: {
  nvlist_t **VAR_1 = FUNC_1(VAR_0);
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_0); VAR_2++)
   if (VAR_1[VAR_2] != ((void*)0))
    FUNC_4(VAR_1[VAR_2]);
  break;
 }
 default:
  break;
 }
}
