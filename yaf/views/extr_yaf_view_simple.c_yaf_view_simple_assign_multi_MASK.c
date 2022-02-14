
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int yaf_view_t ;
typedef int copy_ctor_func_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (int ,int *,int ,int,int *) ;
 scalar_t__ VAR_3 ;

int FUNC_5(yaf_view_t *VAR_4, zval *VAR_5) {
 zval *VAR_6 = FUNC_4(VAR_2, VAR_4, FUNC_0(VAR_1), 1, ((void*)0));
 if (FUNC_2(VAR_5) == VAR_0) {
  FUNC_3(FUNC_1(VAR_6), FUNC_1(VAR_5), (copy_ctor_func_t) VAR_3);
  return 1;
 }
 return 0;
}
