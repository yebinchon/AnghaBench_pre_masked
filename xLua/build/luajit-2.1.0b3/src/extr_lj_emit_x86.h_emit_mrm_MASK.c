
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int x86Op ;
typedef int x86Mode ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {int base; scalar_t__ ofs; int idx; int scale; } ;
struct TYPE_5__ {scalar_t__* mcp; TYPE_1__ mrm; } ;
typedef int Reg ;
typedef scalar_t__ MCode ;
typedef TYPE_2__ ASMState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (int ,int ,int,int,scalar_t__*,int ) ;
 scalar_t__* FUNC_3 (int ,int ,int ,int,int,int,scalar_t__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(ASMState *VAR_11, x86Op VAR_12, Reg VAR_13, Reg VAR_14)
{
  MCode *VAR_15 = VAR_11->mcp;
  x86Mode VAR_16 = VAR_9;
  if (VAR_14 == VAR_3) {
    VAR_14 = VAR_11->mrm.base;
    if (VAR_14 == VAR_4) {
      VAR_14 = VAR_1;
      VAR_16 = VAR_6;
      VAR_15 -= 4;
      *(int32_t *)VAR_15 = VAR_11->mrm.ofs;
      if (VAR_11->mrm.idx != VAR_4)
 goto mrmidx;




    } else if (VAR_0 && VAR_14 == VAR_5) {
      FUNC_4(VAR_11->mrm.idx == VAR_4);
      VAR_16 = VAR_6;
      VAR_15 -= 4;
      *(int32_t *)VAR_15 = VAR_11->mrm.ofs;
    } else {
      if (VAR_11->mrm.ofs == 0 && (VAR_14&7) != VAR_1) {
 VAR_16 = VAR_6;
      } else if (FUNC_1(VAR_11->mrm.ofs)) {
 *--VAR_15 = (MCode)VAR_11->mrm.ofs;
 VAR_16 = VAR_8;
      } else {
 VAR_15 -= 4;
 *(int32_t *)VAR_15 = VAR_11->mrm.ofs;
 VAR_16 = VAR_7;
      }
      if (VAR_11->mrm.idx != VAR_4) {
      mrmidx:
 VAR_11->mcp = FUNC_3(VAR_12, VAR_16, VAR_11->mrm.scale, VAR_13, VAR_14, VAR_11->mrm.idx, VAR_15);
 return;
      }
      if ((VAR_14&7) == VAR_2)
 *--VAR_15 = FUNC_0(VAR_10, VAR_2, VAR_2);
    }
  }
  VAR_11->mcp = FUNC_2(VAR_12, VAR_16, VAR_13, VAR_14, VAR_15, 0);
}
