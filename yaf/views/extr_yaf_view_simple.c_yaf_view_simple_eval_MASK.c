
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef char zend_op_array ;
typedef int zend_array ;
typedef int yaf_view_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,int ) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int *,int *) ;
 int VAR_2 ;
 char* FUNC_11 (int *,char*) ;
 char* FUNC_12 (char*) ;
 int * FUNC_13 (int ,int *,int ,int,int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(yaf_view_t *VAR_3, zval *VAR_4, zval * VAR_5, zval *VAR_6) {
 zval *VAR_7;
 zend_array *VAR_8;

 if (VAR_0 != FUNC_4(VAR_4)) {
  return 0;
 }

 VAR_7 = FUNC_13(VAR_2, VAR_3, FUNC_0(VAR_1), 1, ((void*)0));

 VAR_8 = FUNC_8(VAR_7, VAR_5);

 if (FUNC_2(VAR_4)) {
  zval VAR_9;
  zend_op_array *VAR_10;
  char *VAR_11 = FUNC_12("template code");


  FUNC_1(&VAR_9, FUNC_7(0, "?>%s", FUNC_3(VAR_4)));

  VAR_10 = FUNC_11(&VAR_9, VAR_11);

  FUNC_14(&VAR_9);
  FUNC_6(VAR_11);

  if (VAR_10) {
   (void)FUNC_10(VAR_3, VAR_10, VAR_8, VAR_6);
   FUNC_5(VAR_10);
   FUNC_6(VAR_10);
  }
 }

 FUNC_9(VAR_8);

 return 1;
}
