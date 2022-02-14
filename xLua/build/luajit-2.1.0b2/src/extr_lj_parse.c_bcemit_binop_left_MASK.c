
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FuncState ;
typedef int ExpDesc ;
typedef scalar_t__ BinOpr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(FuncState *VAR_5, BinOpr VAR_6, ExpDesc *VAR_7)
{
  if (VAR_6 == VAR_0) {
    FUNC_1(VAR_5, VAR_7);
  } else if (VAR_6 == VAR_4) {
    FUNC_0(VAR_5, VAR_7);
  } else if (VAR_6 == VAR_1) {
    FUNC_5(VAR_5, VAR_7);
  } else if (VAR_6 == VAR_2 || VAR_6 == VAR_3) {
    if (!FUNC_2(VAR_7)) FUNC_4(VAR_5, VAR_7);
  } else {
    if (!FUNC_3(VAR_7)) FUNC_4(VAR_5, VAR_7);
  }
}
