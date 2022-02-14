
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(dsl_dataset_t *VAR_2, nvlist_t *VAR_3)
{
 for (int VAR_4 = VAR_1; VAR_4 < VAR_0; VAR_4++) {

  if (!FUNC_3(VAR_4))
   continue;

  if (!FUNC_1(VAR_2, VAR_4))
   continue;
  FUNC_0(VAR_3, FUNC_2(VAR_4));
 }
}
