
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OpCode ;
typedef int FuncState ;


 int FUNC_0 (int ,int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;

int FUNC_5 (FuncState *VAR_5, OpCode VAR_6, int VAR_7, unsigned int VAR_8) {
  FUNC_4(FUNC_2(VAR_6) == VAR_3 || FUNC_2(VAR_6) == VAR_4);
  FUNC_4(FUNC_1(VAR_6) == VAR_2);
  FUNC_4(VAR_7 <= VAR_0 && VAR_8 <= VAR_1);
  return FUNC_3(VAR_5, FUNC_0(VAR_6, VAR_7, VAR_8));
}
