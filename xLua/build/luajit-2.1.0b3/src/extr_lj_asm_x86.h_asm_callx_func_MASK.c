
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int32_t ;
struct TYPE_10__ {scalar_t__ u64; } ;
struct TYPE_9__ {void* mcp; } ;
struct TYPE_8__ {scalar_t__ o; scalar_t__ i; } ;
typedef void MCode ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void *FUNC_3(ASMState *VAR_1, IRIns *VAR_2, IRRef VAR_3)
{





  if (FUNC_2(VAR_3)) {
    MCode *VAR_4;
    if (VAR_2->o == VAR_0)
      VAR_4 = (MCode *)(void *)FUNC_1(VAR_2)->u64;
    else
      VAR_4 = (MCode *)(void *)(uintptr_t)(uint32_t)VAR_2->i;
    if (VAR_4 - VAR_1->mcp == (int32_t)(VAR_4 - VAR_1->mcp))
      return VAR_4;

  }

  return ((void*)0);
}
