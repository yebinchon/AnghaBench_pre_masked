
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ int32_t ;
struct TYPE_10__ {int framesize; } ;
struct TYPE_13__ {TYPE_1__ pt; } ;
struct TYPE_12__ {TYPE_2__* T; } ;
struct TYPE_11__ {int startpt; int topslot; scalar_t__ spadjust; scalar_t__ traceno; } ;
typedef TYPE_3__ ASMState ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 TYPE_4__* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ASMState *VAR_0)
{
  int32_t VAR_1;
  FUNC_0(VAR_0);
  FUNC_2(VAR_0, (int32_t)VAR_0->T->traceno);
  VAR_1 = FUNC_1(VAR_0);
  VAR_0->T->spadjust = (uint16_t)VAR_1;
  FUNC_3(VAR_0, VAR_1);

  VAR_0->T->topslot = FUNC_4(VAR_0->T->startpt)->pt.framesize;
}
