
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int info; } ;
struct TYPE_18__ {TYPE_1__ s; } ;
struct TYPE_20__ {scalar_t__ k; TYPE_2__ u; void* t; void* f; } ;
struct TYPE_19__ {void* lasttarget; void* pc; int freereg; } ;
typedef TYPE_3__ FuncState ;
typedef TYPE_4__ ExpDesc ;
typedef int BCReg ;
typedef void* BCPos ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int) ;
 void* FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_3__*,void**,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,void*) ;
 int FUNC_7 (TYPE_3__*,void*,void*,int ,void*) ;
 int FUNC_8 (TYPE_3__*,void*) ;

__attribute__((used)) static void FUNC_9(FuncState *VAR_7, ExpDesc *VAR_8, BCReg VAR_9)
{
  FUNC_4(VAR_7, VAR_8, VAR_9);
  if (VAR_8->k == VAR_3)
    FUNC_5(VAR_7, &VAR_8->t, VAR_8->u.s.info);
  if (FUNC_3(VAR_8)) {
    BCPos VAR_10, VAR_11 = VAR_2, VAR_12 = VAR_2;
    if (FUNC_6(VAR_7, VAR_8->t) || FUNC_6(VAR_7, VAR_8->f)) {
      BCPos VAR_13 = (VAR_8->k == VAR_3) ? VAR_2 : FUNC_2(VAR_7);
      VAR_11 = FUNC_0(VAR_7, VAR_1, VAR_9, VAR_4);
      FUNC_1(VAR_7, VAR_0, VAR_7->freereg, 1);
      VAR_12 = FUNC_0(VAR_7, VAR_1, VAR_9, VAR_5);
      FUNC_8(VAR_7, VAR_13);
    }
    VAR_10 = VAR_7->pc;
    VAR_7->lasttarget = VAR_10;
    FUNC_7(VAR_7, VAR_8->f, VAR_10, VAR_9, VAR_11);
    FUNC_7(VAR_7, VAR_8->t, VAR_10, VAR_9, VAR_12);
  }
  VAR_8->f = VAR_8->t = VAR_2;
  VAR_8->u.s.info = VAR_9;
  VAR_8->k = VAR_6;
}
