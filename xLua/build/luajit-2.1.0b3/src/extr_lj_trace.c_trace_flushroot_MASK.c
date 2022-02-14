
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_8__ {scalar_t__ trace; } ;
struct TYPE_9__ {TYPE_2__ pt; } ;
struct TYPE_7__ {scalar_t__ root; scalar_t__ traceno; scalar_t__ nextroot; int startpt; } ;
typedef TYPE_1__ GCtrace ;
typedef TYPE_2__ GCproto ;


 TYPE_6__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(jit_State *VAR_0, GCtrace *VAR_1)
{
  GCproto *VAR_2 = &FUNC_0(VAR_1->startpt)->pt;
  FUNC_1(VAR_1->root == 0 && VAR_2 != ((void*)0));

  FUNC_2(VAR_0, VAR_1);

  if (VAR_2->trace == VAR_1->traceno) {
    VAR_2->trace = VAR_1->nextroot;
  } else if (VAR_2->trace) {
    GCtrace *VAR_3 = FUNC_3(VAR_0, VAR_2->trace);
    if (VAR_3) {
      for (; VAR_3->nextroot; VAR_3 = FUNC_3(VAR_0, VAR_3->nextroot))
 if (VAR_3->nextroot == VAR_1->traceno) {
   VAR_3->nextroot = VAR_1->nextroot;
   break;
 }
    }
  }
}
