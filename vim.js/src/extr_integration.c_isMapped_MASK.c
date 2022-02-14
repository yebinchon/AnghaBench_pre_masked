
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * Widget ;
typedef scalar_t__ Boolean ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static Boolean
FUNC_4(Widget VAR_1)
{
 if (VAR_1 == ((void*)0)) {
  return(VAR_0);
 }

 if (FUNC_1(VAR_1) == VAR_0) {
  return(VAR_0);
 }

 return(FUNC_3(FUNC_0(VAR_1), FUNC_2(VAR_1)));
}
