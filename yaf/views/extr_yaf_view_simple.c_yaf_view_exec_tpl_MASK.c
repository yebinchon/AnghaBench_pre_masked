
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {int scope; } ;
typedef TYPE_1__ zend_op_array ;
typedef int zend_function ;
struct TYPE_11__ {int * symbol_table; } ;
typedef TYPE_2__ zend_execute_data ;
typedef int zend_array ;
typedef int yaf_view_t ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (char*,int ,char*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_2__*) ;
 TYPE_2__* FUNC_14 (int,int *,int ,int ,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(yaf_view_t *VAR_8, zend_op_array *VAR_9, zend_array *VAR_10, zval* VAR_11) {
 zend_execute_data *VAR_12;
 zval VAR_13;

 FUNC_3(&VAR_13);

 VAR_9->scope = FUNC_4(VAR_8);

 VAR_12 = FUNC_14(VAR_5



   ,
   (zend_function*)VAR_9, 0, VAR_9->scope, FUNC_5(VAR_8));

 VAR_12->symbol_table = VAR_10;

 if (VAR_11 && FUNC_10(((void*)0), 0, VAR_2) == VAR_1) {
  FUNC_6("ref.outcontrol", VAR_0, "failed to create buffer");
  return 0;
 }

 FUNC_12(VAR_12, VAR_9, &VAR_13);

 FUNC_2(VAR_12, VAR_6);
 FUNC_11(VAR_12);
 FUNC_13(VAR_12);

 FUNC_15(&VAR_13);

 if (FUNC_1(FUNC_0(VAR_7) != ((void*)0))) {
  if (VAR_11) {
   FUNC_7();
  }
  return 0;
 }

 if (VAR_11) {
  if (FUNC_9(VAR_11) == VAR_1) {
   FUNC_8();
   FUNC_6(((void*)0), VAR_0, "Unable to fetch ob content");
   return 0;
  }

  if (FUNC_7() != VAR_3 ) {
   return 0;
  }
 }

 return 1;
}
