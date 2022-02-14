
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RegSet ;
typedef int Reg ;
typedef int ASMState ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(ASMState *VAR_0, RegSet VAR_1, RegSet VAR_2,
     RegSet VAR_3)
{
  RegSet VAR_4 = VAR_1 & VAR_3;
  if (VAR_4) {



    Reg VAR_5, VAR_6 = FUNC_0(VAR_0, ~VAR_1 & VAR_3);
    if (VAR_4 & ~VAR_2)
      VAR_4 = VAR_4 & ~VAR_2;
    VAR_5 = FUNC_2(VAR_4);
    FUNC_1(VAR_0, VAR_5, VAR_6);
  }
}
