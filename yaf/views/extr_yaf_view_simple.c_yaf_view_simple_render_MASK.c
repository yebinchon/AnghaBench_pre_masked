
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_array ;
typedef int yaf_view_t ;
struct TYPE_3__ {scalar_t__ name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int ,char*,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_9 (int ,char*,int ) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int *,int *,int *) ;
 TYPE_1__* VAR_6 ;
 int * FUNC_13 (TYPE_1__*,int *,int ,int,int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(yaf_view_t *VAR_7, zval *VAR_8, zval *VAR_9, zval *VAR_10) {
 zval *VAR_11;
 zend_array *VAR_12;

 if (VAR_1 != FUNC_7(VAR_8)) {
  return 0;
 }

 VAR_11 = FUNC_13(VAR_6, VAR_7, FUNC_2(VAR_4), 1, ((void*)0));

 VAR_12 = FUNC_10(VAR_11, VAR_9);

 if (FUNC_0(FUNC_5(VAR_8), FUNC_4(VAR_8))) {
  if (FUNC_12(VAR_7, VAR_12, FUNC_6(VAR_8), VAR_10) == 0) {
   FUNC_11(VAR_12);
   return 0;
  }
 } else {
  zend_string *VAR_13;
  zval *VAR_14 = FUNC_13(VAR_6, VAR_7, FUNC_2(VAR_3), 0, ((void*)0));

  if (VAR_1 != FUNC_7(VAR_14)) {
   if (FUNC_1(VAR_5)) {
    VAR_13 = FUNC_8(0, "%s%c%s", FUNC_3(FUNC_1(VAR_5)), VAR_0, FUNC_5(VAR_8));
   } else {
    FUNC_11(VAR_12);
    FUNC_9(VAR_2,
      "Could not determine the view script path, you should call %s::setScriptPath to specific it",
      FUNC_3(VAR_6->name));
    return 0;
   }
  } else {
   VAR_13 = FUNC_8(0, "%s%c%s", FUNC_5(VAR_14), VAR_0, FUNC_5(VAR_8));
  }

  if (FUNC_12(VAR_7, VAR_12, VAR_13, VAR_10) == 0) {
   FUNC_11(VAR_12);
   FUNC_14(VAR_13);
   return 0;
  }
  FUNC_14(VAR_13);
 }

 FUNC_11(VAR_12);

 return 1;
}
