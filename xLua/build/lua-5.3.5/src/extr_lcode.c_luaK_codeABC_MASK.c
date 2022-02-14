
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OpCode ;
typedef int FuncState ;


 int FUNC_0 (int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;

int FUNC_6 (FuncState *VAR_5, OpCode VAR_6, int VAR_7, int VAR_8, int VAR_9) {
  FUNC_5(FUNC_3(VAR_6) == VAR_4);
  FUNC_5(FUNC_1(VAR_6) != VAR_3 || VAR_8 == 0);
  FUNC_5(FUNC_2(VAR_6) != VAR_3 || VAR_9 == 0);
  FUNC_5(VAR_7 <= VAR_0 && VAR_8 <= VAR_1 && VAR_9 <= VAR_2);
  return FUNC_4(VAR_5, FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9));
}
