
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int jit_State ;
typedef int cTValue ;
struct TYPE_11__ {int size; int info; } ;
struct TYPE_10__ {int marked; int ctypeid; } ;
struct TYPE_9__ {scalar_t__ immutable; } ;
typedef TYPE_1__ GCupval ;
typedef TYPE_2__ GCcdata ;
typedef TYPE_3__ CType ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int * FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(jit_State *VAR_1, GCupval *VAR_2)
{
  if (VAR_2->immutable) {
    cTValue *VAR_3 = FUNC_11(VAR_2);
    FUNC_1(VAR_1);

    if (!(FUNC_8(VAR_3) || FUNC_10(VAR_3) || FUNC_9(VAR_3)))
      return 1;
  }
  return 0;
}
