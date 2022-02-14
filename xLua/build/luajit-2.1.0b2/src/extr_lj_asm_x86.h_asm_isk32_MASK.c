
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {scalar_t__ u64; } ;
struct TYPE_5__ {scalar_t__ o; scalar_t__ i; } ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(ASMState *VAR_1, IRRef VAR_2, int32_t *VAR_3)
{
  if (FUNC_3(VAR_2)) {
    IRIns *VAR_4 = FUNC_0(VAR_2);
    if (VAR_4->o != VAR_0) {
      *VAR_3 = VAR_4->i;
      return 1;
    } else if (FUNC_1((int64_t)FUNC_2(VAR_4)->u64)) {
      *VAR_3 = (int32_t)FUNC_2(VAR_4)->u64;
      return 1;
    }
  }
  return 0;
}
