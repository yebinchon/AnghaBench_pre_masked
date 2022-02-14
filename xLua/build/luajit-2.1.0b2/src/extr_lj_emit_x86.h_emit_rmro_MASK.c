
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


 scalar_t__ FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (int ,int ,int,int,scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_6, x86Op VAR_7, Reg VAR_8, Reg VAR_9, int32_t VAR_10)
{
  MCode *VAR_11 = VAR_6->mcp;
  x86Mode VAR_12;
  if (FUNC_3(VAR_9)) {
    if (VAR_10 == 0 && (VAR_9&7) != VAR_0) {
      VAR_12 = VAR_2;
    } else if (FUNC_1(VAR_10)) {
      *--VAR_11 = (MCode)VAR_10;
      VAR_12 = VAR_4;
    } else {
      VAR_11 -= 4;
      *(int32_t *)VAR_11 = VAR_10;
      VAR_12 = VAR_3;
    }
    if ((VAR_9&7) == VAR_1)
      *--VAR_11 = FUNC_0(VAR_5, VAR_1, VAR_1);
  } else {
    *(int32_t *)(VAR_11-4) = VAR_10;





    VAR_11 -= 4;
    VAR_9 = VAR_0;

    VAR_12 = VAR_2;
  }
  VAR_6->mcp = FUNC_2(VAR_7, VAR_12, VAR_8, VAR_9, VAR_11, 0);
}
