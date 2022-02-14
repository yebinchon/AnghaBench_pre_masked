
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int x86Op ;
typedef int x86Mode ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__* mcp; } ;
typedef int Reg ;
typedef scalar_t__ MCode ;
typedef TYPE_1__ ASMState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (int ,int ,int,int,scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_8, x86Op VAR_9, Reg VAR_10, Reg VAR_11, int32_t VAR_12)
{
  MCode *VAR_13 = VAR_8->mcp;
  x86Mode VAR_14;
  if (FUNC_3(VAR_11)) {
    if (VAR_0 && VAR_11 == VAR_3) {
      VAR_14 = VAR_4;
      VAR_13 -= 4;
      *(int32_t *)VAR_13 = VAR_12;
    } else if (VAR_12 == 0 && (VAR_11&7) != VAR_1) {
      VAR_14 = VAR_4;
    } else if (FUNC_1(VAR_12)) {
      *--VAR_13 = (MCode)VAR_12;
      VAR_14 = VAR_6;
    } else {
      VAR_13 -= 4;
      *(int32_t *)VAR_13 = VAR_12;
      VAR_14 = VAR_5;
    }
    if ((VAR_11&7) == VAR_2)
      *--VAR_13 = FUNC_0(VAR_7, VAR_2, VAR_2);
  } else {
    *(int32_t *)(VAR_13-4) = VAR_12;





    VAR_13 -= 4;
    VAR_11 = VAR_1;

    VAR_14 = VAR_4;
  }
  VAR_8->mcp = FUNC_2(VAR_9, VAR_14, VAR_10, VAR_11, VAR_13, 0);
}
