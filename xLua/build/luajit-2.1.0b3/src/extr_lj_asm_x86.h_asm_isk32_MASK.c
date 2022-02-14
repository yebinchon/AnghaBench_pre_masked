
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_9__ {scalar_t__ u64; } ;
struct TYPE_8__ {scalar_t__ u64; } ;
struct TYPE_7__ {scalar_t__ o; scalar_t__ i; int t; } ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(ASMState *VAR_2, IRRef VAR_3, int32_t *VAR_4)
{
  if (FUNC_4(VAR_3)) {
    IRIns *VAR_5 = FUNC_0(VAR_3);
    if (VAR_5->o != VAR_0) {
      *VAR_4 = VAR_5->i;
      return 1;
    } else if (FUNC_1((int64_t)FUNC_3(VAR_5)->u64)) {
      *VAR_4 = (int32_t)FUNC_3(VAR_5)->u64;
      return 1;
    }

  }
  return 0;
}
