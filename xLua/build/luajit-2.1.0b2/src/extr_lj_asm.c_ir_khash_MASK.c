
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int lo; int hi; } ;
struct TYPE_12__ {TYPE_1__ u32; } ;
struct TYPE_11__ {int hash; } ;
struct TYPE_10__ {int t; } ;
typedef TYPE_2__ IRIns ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_5__* FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static uint32_t FUNC_12(IRIns *VAR_2)
{
  uint32_t VAR_3, VAR_4;
  if (FUNC_8(VAR_2->t)) {
    return FUNC_3(VAR_2)->hash;
  } else if (FUNC_6(VAR_2->t)) {
    VAR_3 = FUNC_2(VAR_2)->u32.lo;
    VAR_4 = FUNC_2(VAR_2)->u32.hi << 1;
  } else if (FUNC_7(VAR_2->t)) {
    FUNC_10(!FUNC_5(VAR_2->t));
    return FUNC_9(VAR_2->t)-VAR_1;
  } else {
    FUNC_10(FUNC_4(VAR_2->t));
    VAR_3 = FUNC_11(FUNC_1(VAR_2));
    VAR_4 = VAR_3 + VAR_0;
  }
  return FUNC_0(VAR_3, VAR_4);
}
