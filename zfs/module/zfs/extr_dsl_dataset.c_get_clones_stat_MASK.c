
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void
FUNC_7(dsl_dataset_t *VAR_3, nvlist_t *VAR_4)
{
 nvlist_t *VAR_5 = FUNC_2();
 nvlist_t *VAR_6;
 FUNC_0(FUNC_4(&VAR_6, 0, VAR_0));

 if (FUNC_3(VAR_3, VAR_6) == 0) {
  FUNC_1(VAR_5, VAR_2, VAR_6);
  FUNC_1(VAR_4, FUNC_6(VAR_1),
      VAR_5);
 }

 FUNC_5(VAR_6);
 FUNC_5(VAR_5);
}
