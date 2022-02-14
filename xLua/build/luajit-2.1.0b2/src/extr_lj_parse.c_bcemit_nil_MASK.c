
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pc; int lasttarget; TYPE_1__* bcbase; } ;
struct TYPE_5__ {int ins; } ;
typedef TYPE_2__ FuncState ;
typedef int BCReg ;
typedef int BCIns ;


 int FUNC_0 (int const,int,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(FuncState *VAR_2, BCReg VAR_3, BCReg VAR_4)
{
  if (VAR_2->pc > VAR_2->lasttarget) {
    BCIns *VAR_5 = &VAR_2->bcbase[VAR_2->pc-1].ins;
    BCReg VAR_6, VAR_7 = FUNC_1(*VAR_5);
    switch (FUNC_3(*VAR_5)) {
    case 128:
      if (FUNC_2(*VAR_5) != ~VAR_0) break;
      if (VAR_3 == VAR_7) {
 if (VAR_4 == 1) return;
      } else if (VAR_3 == VAR_7+1) {
 VAR_3 = VAR_7;
 VAR_4++;
      } else {
 break;
      }
      *VAR_5 = FUNC_0(129, VAR_3, VAR_3+VAR_4-1);
      return;
    case 129:
      VAR_6 = FUNC_2(*VAR_5);
      if (VAR_7 <= VAR_3 && VAR_3 <= VAR_6+1) {
 if (VAR_3+VAR_4-1 > VAR_6)
   FUNC_5(VAR_5, VAR_3+VAR_4-1);
 return;
      }
      break;
    default:
      break;
    }
  }

  FUNC_4(VAR_2, VAR_4 == 1 ? FUNC_0(128, VAR_3, VAR_1) :
     FUNC_0(129, VAR_3, VAR_3+VAR_4-1));
}
