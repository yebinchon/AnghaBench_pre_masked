
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


 scalar_t__ FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (int ,int ,int,int,scalar_t__*,int ) ;
 scalar_t__* FUNC_3 (int ,int ,int ,int,int,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_9, x86Op VAR_10, Reg VAR_11, Reg VAR_12)
{
  MCode *VAR_13 = VAR_9->mcp;
  x86Mode VAR_14 = VAR_7;
  if (VAR_12 == VAR_2) {
    VAR_12 = VAR_9->mrm.base;
    if (VAR_12 == VAR_3) {
      VAR_12 = VAR_0;
      VAR_14 = VAR_4;
      VAR_13 -= 4;
      *(int32_t *)VAR_13 = VAR_9->mrm.ofs;
      if (VAR_9->mrm.idx != VAR_3)
 goto mrmidx;




    } else {
      if (VAR_9->mrm.ofs == 0 && (VAR_12&7) != VAR_0) {
 VAR_14 = VAR_4;
      } else if (FUNC_1(VAR_9->mrm.ofs)) {
 *--VAR_13 = (MCode)VAR_9->mrm.ofs;
 VAR_14 = VAR_6;
      } else {
 VAR_13 -= 4;
 *(int32_t *)VAR_13 = VAR_9->mrm.ofs;
 VAR_14 = VAR_5;
      }
      if (VAR_9->mrm.idx != VAR_3) {
      mrmidx:
 VAR_9->mcp = FUNC_3(VAR_10, VAR_14, VAR_9->mrm.scale, VAR_11, VAR_12, VAR_9->mrm.idx, VAR_13);
 return;
      }
      if ((VAR_12&7) == VAR_1)
 *--VAR_13 = FUNC_0(VAR_8, VAR_1, VAR_1);
    }
  }
  VAR_9->mcp = FUNC_2(VAR_10, VAR_14, VAR_11, VAR_12, VAR_13, 0);
}
