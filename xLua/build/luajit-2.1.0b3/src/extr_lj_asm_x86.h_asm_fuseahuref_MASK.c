
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef void* uint8_t ;
typedef int int64_t ;
typedef void* int32_t ;
struct TYPE_19__ {void* idx; void* ofs; void* base; } ;
struct TYPE_23__ {TYPE_2__ mrm; } ;
struct TYPE_18__ {int * uvptr; } ;
struct TYPE_22__ {TYPE_1__ l; } ;
struct TYPE_21__ {int tv; } ;
struct TYPE_20__ {int op1; int op2; int o; int r; } ;
struct TYPE_17__ {TYPE_4__ uv; } ;
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
 void* VAR_5 ;
 int FUNC_1 (TYPE_6__*,TYPE_3__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*,int *) ;
 TYPE_11__* FUNC_4 (int ) ;
 TYPE_5__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_6__*,int) ;
 void* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_6__*,int,int ) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(ASMState *VAR_6, IRRef VAR_7, RegSet VAR_8)
{
  IRIns *VAR_9 = FUNC_0(VAR_7);
  if (FUNC_11(VAR_9->r)) {
    switch ((IROp)VAR_9->o) {
    case 130:
      if (FUNC_8(VAR_6, VAR_7)) {
 FUNC_1(VAR_6, VAR_9, VAR_8);
 return;
      }
      break;
    case 129:
      if (FUNC_8(VAR_6, VAR_7)) {
 VAR_6->mrm.base = (uint8_t)FUNC_10(VAR_6, VAR_9->op1, VAR_8);
 VAR_6->mrm.ofs = (int32_t)(FUNC_0(VAR_9->op2)->op2 * sizeof(Node));
 VAR_6->mrm.idx = VAR_5;
 return;
      }
      break;
    case 128:
      if (FUNC_6(VAR_9->op1)) {
 GCfunc *VAR_10 = FUNC_5(FUNC_0(VAR_9->op1));
 GCupval *VAR_11 = &FUNC_4(VAR_10->l.uvptr[(VAR_9->op2 >> 8)])->uv;
 VAR_6->mrm.ofs = FUNC_9(&VAR_11->tv);
 VAR_6->mrm.base = VAR_6->mrm.idx = VAR_5;
 return;

      }
      break;
    default:
      FUNC_7(VAR_9->o == VAR_0 || VAR_9->o == VAR_2 || VAR_9->o == VAR_3 ||
   VAR_9->o == VAR_1);
      break;
    }
  }
  VAR_6->mrm.base = (uint8_t)FUNC_10(VAR_6, VAR_7, VAR_8);
  VAR_6->mrm.ofs = 0;
  VAR_6->mrm.idx = VAR_5;
}
