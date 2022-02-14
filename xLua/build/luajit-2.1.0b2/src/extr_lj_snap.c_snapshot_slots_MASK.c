
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* ir; } ;
struct TYPE_6__ {int* chain; TYPE_1__ cur; int * slot; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_7__ {scalar_t__ o; size_t op1; int op2; int t; } ;
typedef int TRef ;
typedef int SnapEntry ;
typedef scalar_t__ MSize ;
typedef int IRRef ;
typedef TYPE_3__ IRIns ;
typedef size_t BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (size_t,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static MSize FUNC_3(jit_State *VAR_12, SnapEntry *VAR_13, BCReg VAR_14)
{
  IRRef VAR_15 = VAR_12->chain[VAR_4];
  BCReg VAR_16;
  MSize VAR_17 = 0;
  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
    TRef VAR_18 = VAR_12->slot[VAR_16];
    IRRef VAR_19 = FUNC_2(VAR_18);
    if (VAR_19) {
      SnapEntry VAR_20 = FUNC_0(VAR_16, VAR_18);
      IRIns *VAR_21 = &VAR_12->cur.ir[VAR_19];
      if (!(VAR_20 & (VAR_8|VAR_9)) &&
   VAR_21->o == VAR_5 && VAR_21->op1 == VAR_16 && VAR_19 > VAR_15) {

 if (!(VAR_21->op2 & VAR_1))
   continue;

 if (!(VAR_6 && (VAR_21->op2 & VAR_0)) &&
     (VAR_21->op2 & (VAR_3|VAR_2)) != VAR_2)
   VAR_20 |= VAR_10;
      }
      if (VAR_7 && FUNC_1(VAR_21->t))
 VAR_20 |= VAR_11;
      VAR_13[VAR_17++] = VAR_20;
    }
  }
  return VAR_17;
}
