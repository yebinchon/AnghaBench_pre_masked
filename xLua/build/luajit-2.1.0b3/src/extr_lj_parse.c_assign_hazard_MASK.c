
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ info; } ;
struct TYPE_16__ {TYPE_1__ s; } ;
struct TYPE_23__ {TYPE_2__ u; } ;
struct TYPE_22__ {scalar_t__ freereg; } ;
struct TYPE_17__ {scalar_t__ info; scalar_t__ aux; } ;
struct TYPE_18__ {TYPE_3__ s; } ;
struct TYPE_19__ {scalar_t__ k; TYPE_4__ u; } ;
struct TYPE_21__ {TYPE_5__ v; struct TYPE_21__* prev; } ;
struct TYPE_20__ {TYPE_8__* fs; } ;
typedef TYPE_6__ LexState ;
typedef TYPE_7__ LHSVarList ;
typedef TYPE_8__ FuncState ;
typedef TYPE_9__ ExpDesc ;
typedef scalar_t__ BCReg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_8__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_8__*,int) ;

__attribute__((used)) static void FUNC_2(LexState *VAR_2, LHSVarList *VAR_3, const ExpDesc *VAR_4)
{
  FuncState *VAR_5 = VAR_2->fs;
  BCReg VAR_6 = VAR_4->u.s.info;
  BCReg VAR_7 = VAR_5->freereg;
  int VAR_8 = 0;
  for (; VAR_3; VAR_3 = VAR_3->prev) {
    if (VAR_3->v.k == VAR_1) {
      if (VAR_3->v.u.s.info == VAR_6) {
 VAR_8 = 1;
 VAR_3->v.u.s.info = VAR_7;
      }
      if (VAR_3->v.u.s.aux == VAR_6) {
 VAR_8 = 1;
 VAR_3->v.u.s.aux = VAR_7;
      }
    }
  }
  if (VAR_8) {
    FUNC_0(VAR_5, VAR_0, VAR_7, VAR_6);
    FUNC_1(VAR_5, 1);
  }
}
