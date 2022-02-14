
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int yaf_view_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_6 ;
 int FUNC_9 (int ,int *,int ,int *) ;
 int FUNC_10 (int *) ;

yaf_view_t *FUNC_11(yaf_view_t *VAR_7, zval *VAR_8, zval *VAR_9) {
 zval VAR_10;

 if (FUNC_2(VAR_7)) {
  FUNC_7(VAR_7, VAR_6);
 }

 FUNC_6(&VAR_10);
 FUNC_9(VAR_6, VAR_7, FUNC_1(VAR_5), &VAR_10);
 FUNC_10(&VAR_10);

 if (VAR_8 && FUNC_5(VAR_8) == VAR_1) {
  if (FUNC_0(FUNC_4(VAR_8), FUNC_3(VAR_8))) {
   FUNC_9(VAR_6, VAR_7, FUNC_1(VAR_4), VAR_8);
  } else {

   FUNC_8(VAR_2, "Expects an absolute path for templates directory");
   return ((void*)0);
  }
 }

 if (VAR_9 && VAR_0 == FUNC_5(VAR_9)) {
  FUNC_9(VAR_6, VAR_7, FUNC_1(VAR_3), VAR_9);
 }

 return VAR_7;
}
