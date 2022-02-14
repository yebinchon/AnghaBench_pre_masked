
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Reg ;
typedef int IRIns ;
typedef int ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (int *,int,int,int) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static Reg FUNC_8(ASMState *VAR_8, IRIns *VAR_9, int VAR_10)
{
  if (FUNC_6(VAR_9) || VAR_10) {
    Reg VAR_11 = FUNC_4(VAR_8, VAR_9, VAR_3);
    if (VAR_10) {
      Reg VAR_12 = FUNC_5(VAR_8, FUNC_7(VAR_3, VAR_11));
      FUNC_0(VAR_8, VAR_0);
      FUNC_1(VAR_8, -2);
      FUNC_2(VAR_8, VAR_4, VAR_6, VAR_12);
      FUNC_3(VAR_8, VAR_7|VAR_1, VAR_12, 47);
      FUNC_2(VAR_8, VAR_5, VAR_12|VAR_1, VAR_11);
    }
    return VAR_11;
  } else {
    return VAR_2;
  }
}
