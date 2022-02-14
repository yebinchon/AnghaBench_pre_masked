
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef void* uint8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_18__ {void* idx; scalar_t__ ofs; void* base; } ;
struct TYPE_22__ {TYPE_2__ mrm; } ;
struct TYPE_17__ {int * uvptr; } ;
struct TYPE_21__ {TYPE_1__ l; } ;
struct TYPE_20__ {int tv; } ;
struct TYPE_19__ {int op1; int op2; int o; int r; } ;
struct TYPE_16__ {TYPE_4__ uv; } ;
typedef int RegSet ;
typedef int Node ;
typedef int IRRef ;
typedef int IROp ;
typedef TYPE_3__ IRIns ;
typedef TYPE_4__ GCupval ;
typedef TYPE_5__ GCfunc ;
typedef TYPE_6__ ASMState ;


 TYPE_3__* FUNC_0 (int) ;

 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (TYPE_6__*,TYPE_3__*,int ) ;
 TYPE_11__* FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_6__*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_6__*,int,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(ASMState *VAR_5, IRRef VAR_6, RegSet VAR_7)
{
  IRIns *VAR_8 = FUNC_0(VAR_6);
  if (FUNC_9(VAR_8->r)) {
    switch ((IROp)VAR_8->o) {
    case 130:
      if (FUNC_6(VAR_5, VAR_6)) {
 FUNC_1(VAR_5, VAR_8, VAR_7);
 return;
      }
      break;
    case 129:
      if (FUNC_6(VAR_5, VAR_6)) {
 VAR_5->mrm.base = (uint8_t)FUNC_8(VAR_5, VAR_8->op1, VAR_7);
 VAR_5->mrm.ofs = (int32_t)(FUNC_0(VAR_8->op2)->op2 * sizeof(Node));
 VAR_5->mrm.idx = VAR_4;
 return;
      }
      break;
    case 128:
      if (FUNC_4(VAR_8->op1)) {
 GCfunc *VAR_9 = FUNC_3(FUNC_0(VAR_8->op1));
 GCupval *VAR_10 = &FUNC_2(VAR_9->l.uvptr[(VAR_8->op2 >> 8)])->uv;
 VAR_5->mrm.ofs = FUNC_7(&VAR_10->tv);
 VAR_5->mrm.base = VAR_5->mrm.idx = VAR_4;
 return;
      }
      break;
    default:
      FUNC_5(VAR_8->o == VAR_0 || VAR_8->o == VAR_2 || VAR_8->o == VAR_3 ||
   VAR_8->o == VAR_1);
      break;
    }
  }
  VAR_5->mrm.base = (uint8_t)FUNC_8(VAR_5, VAR_6, VAR_7);
  VAR_5->mrm.ofs = 0;
  VAR_5->mrm.idx = VAR_4;
}
