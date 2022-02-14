
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int http_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

void
FUNC_3(http_parser *VAR_2, int VAR_3) {




  if (FUNC_0(VAR_2) == VAR_0 ||
      FUNC_0(VAR_2) == VAR_1) {
    FUNC_1((VAR_3) ? VAR_1 : VAR_0);
  } else {
    FUNC_2(0 && "Attempting to pause parser in error state");
  }
}
