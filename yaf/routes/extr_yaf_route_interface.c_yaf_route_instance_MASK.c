
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int zend_bool ;
typedef int yaf_route_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int *) ;
 int * FUNC_5 (int *,int *,int *,int *,int *,int *) ;
 int * FUNC_6 (int *,int *,int *,int *) ;
 int * FUNC_7 (int *,int *,int *,int *) ;
 int * FUNC_8 (int *,int *) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,char*) ;

yaf_route_t * FUNC_12(yaf_route_t *VAR_2, zval *VAR_3) {
 zval *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 yaf_route_t *VAR_10 = ((void*)0);

 if (!VAR_3 || VAR_0 != FUNC_3(VAR_3)) {
  return ((void*)0);
 }

 if ((VAR_9 = FUNC_9(FUNC_1(VAR_3), FUNC_0("type"))) == ((void*)0) ||
  VAR_1 != FUNC_3(VAR_9)) {
  return ((void*)0);
 }

 if (FUNC_11(FUNC_2(VAR_9), "rewrite")) {
  if ((VAR_4 = FUNC_9(FUNC_1(VAR_3), FUNC_0("match"))) == ((void*)0) ||
   FUNC_3(VAR_4) != VAR_1) {
   return ((void*)0);
  }
  if ((VAR_5 = FUNC_9(FUNC_1(VAR_3), FUNC_0("route"))) == ((void*)0) ||
   FUNC_3(VAR_5) != VAR_0) {
   return ((void*)0);
  }

  if ((VAR_7 = FUNC_9(FUNC_1(VAR_3), FUNC_0("route"))) == ((void*)0) ||
   FUNC_3(VAR_7) != VAR_0) {
   VAR_7 = ((void*)0);
  }

        VAR_10 = FUNC_6(VAR_2, VAR_4, VAR_5, VAR_7);
 } else if (FUNC_11(FUNC_2(VAR_9), "regex")) {
  if ((VAR_4 = FUNC_9(FUNC_1(VAR_3), FUNC_0("match"))) == ((void*)0) ||
   FUNC_3(VAR_4) != VAR_1) {
   return ((void*)0);
  }
  if ((VAR_5 = FUNC_9(FUNC_1(VAR_3), FUNC_0("route"))) == ((void*)0) ||
   FUNC_3(VAR_5) != VAR_0) {
   return ((void*)0);
  }
  if ((VAR_6 = FUNC_9(FUNC_1(VAR_3), FUNC_0("map"))) == ((void*)0) ||
   FUNC_3(VAR_6) != VAR_0) {
   VAR_6 = ((void*)0);
  }

  if ((VAR_7 = FUNC_9(FUNC_1(VAR_3), FUNC_0("route"))) == ((void*)0) ||
   FUNC_3(VAR_7) != VAR_0) {
   VAR_7 = ((void*)0);
  }

  if ((VAR_8 = FUNC_9(FUNC_1(VAR_3), FUNC_0("route"))) == ((void*)0) ||
   FUNC_3(VAR_8) != VAR_1) {
   VAR_8 = ((void*)0);
  }

  VAR_10 = FUNC_5(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 } else if (FUNC_11(FUNC_2(VAR_9), "map")) {
  zend_string *VAR_11 = ((void*)0);
  zend_bool VAR_12 = 0;

  if ((VAR_9 = FUNC_9(FUNC_1(VAR_3), FUNC_0("controllerPrefer"))) != ((void*)0)) {
   VAR_12 = FUNC_10(VAR_9);
  }

  if ((VAR_9 = FUNC_9(FUNC_1(VAR_3), FUNC_0("delimiter"))) != ((void*)0)
   && FUNC_3(VAR_9) == VAR_1) {
   VAR_11 = FUNC_2(VAR_9);
  }

  VAR_10 = FUNC_4(VAR_2, VAR_12, VAR_11);
 } else if (FUNC_11(FUNC_2(VAR_9), "simple")) {
  if ((VAR_4 = FUNC_9(FUNC_1(VAR_3), FUNC_0("module"))) == ((void*)0) ||
   FUNC_3(VAR_4) != VAR_1) {
   return ((void*)0);
  }
  if ((VAR_5 = FUNC_9(FUNC_1(VAR_3), FUNC_0("controller"))) == ((void*)0) ||
   FUNC_3(VAR_5) != VAR_1) {
   return ((void*)0);
  }
  if ((VAR_6 = FUNC_9(FUNC_1(VAR_3), FUNC_0("action"))) == ((void*)0) ||
   FUNC_3(VAR_6) != VAR_1) {
   return ((void*)0);
  }

  VAR_10 = FUNC_7(VAR_2, VAR_4, VAR_5, VAR_6);
 } else if (FUNC_11(FUNC_2(VAR_9), "supervar")) {
  if ((VAR_4 = FUNC_9(FUNC_1(VAR_3), FUNC_0("varname"))) == ((void*)0) ||
   FUNC_3(VAR_4) != VAR_1) {
   return ((void*)0);
  }

  VAR_10 = FUNC_8(VAR_2, VAR_4);
 }

 return VAR_10;
}
