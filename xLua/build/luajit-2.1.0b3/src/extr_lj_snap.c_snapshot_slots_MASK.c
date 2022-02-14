
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* ir; } ;
struct TYPE_10__ {int* chain; int* slot; TYPE_2__ cur; int baseslot; TYPE_1__* L; } ;
typedef TYPE_3__ jit_State ;
struct TYPE_11__ {int u64; } ;
typedef TYPE_4__ cTValue ;
struct TYPE_12__ {scalar_t__ o; size_t op1; int op2; int t; } ;
struct TYPE_8__ {int base; } ;
typedef int TRef ;
typedef int SnapEntry ;
typedef scalar_t__ MSize ;
typedef int IRRef ;
typedef TYPE_5__ IRIns ;
typedef size_t BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (size_t,int) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static MSize FUNC_5(jit_State *VAR_17, SnapEntry *VAR_18, BCReg VAR_19)
{
  IRRef VAR_20 = VAR_17->chain[VAR_5];
  BCReg VAR_21;
  MSize VAR_22 = 0;
  for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
    TRef VAR_23 = VAR_17->slot[VAR_21];
    IRRef VAR_24 = FUNC_4(VAR_23);
    if (VAR_24) {
      SnapEntry VAR_25 = FUNC_1(VAR_21, VAR_23);
      IRIns *VAR_26 = &VAR_17->cur.ir[VAR_24];
      if ((VAR_8 || !(VAR_25 & (VAR_11|VAR_12))) &&
   VAR_26->o == VAR_6 && VAR_26->op1 == VAR_21 && VAR_24 > VAR_20) {

 if (!(VAR_26->op2 & VAR_1))
   continue;

 if (!(VAR_7 && (VAR_26->op2 & VAR_0)) &&
     (VAR_26->op2 & (VAR_3|VAR_2)) != VAR_2)
   VAR_25 |= VAR_13;
      }
      if (VAR_9 && FUNC_2(VAR_26->t))
 VAR_25 |= VAR_14;
      VAR_18[VAR_22++] = VAR_25;
    }
  }
  return VAR_22;
}
