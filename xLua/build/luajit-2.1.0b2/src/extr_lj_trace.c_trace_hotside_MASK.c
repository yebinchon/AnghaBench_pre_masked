
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t exitno; scalar_t__* param; scalar_t__ state; int L; int parent; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_12__ {int hookmask; } ;
struct TYPE_11__ {TYPE_2__* snap; } ;
struct TYPE_10__ {scalar_t__ count; } ;
typedef TYPE_2__ SnapShot ;
typedef int BCIns ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (int) ;
 TYPE_3__* FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_6(jit_State *VAR_6, const BCIns *VAR_7)
{
  SnapShot *VAR_8 = &FUNC_5(VAR_6, VAR_6->parent)->snap[VAR_6->exitno];
  if (!(FUNC_0(VAR_6)->hookmask & (VAR_0|VAR_1)) &&
      FUNC_2(FUNC_1(VAR_6->L)) &&
      VAR_8->count != VAR_5 &&
      ++VAR_8->count >= VAR_6->param[VAR_2]) {
    FUNC_4(VAR_6->state == VAR_3);

    VAR_6->state = VAR_4;
    FUNC_3(VAR_6, VAR_7);
  }
}
