
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_11__ {int ffid; } ;
struct TYPE_13__ {TYPE_1__ c; } ;
struct TYPE_12__ {scalar_t__ flags; } ;
typedef int TRef ;
typedef TYPE_2__ GCproto ;
typedef TYPE_3__ GCfunc ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static TRef FUNC_11(jit_State *VAR_10, GCfunc *VAR_11, TRef VAR_12)
{
  TRef VAR_13;
  if (FUNC_4(VAR_11)) {
    GCproto *VAR_14 = FUNC_3(VAR_11);

    if (VAR_14->flags >= VAR_9) {
      TRef VAR_15 = FUNC_2(FUNC_0(VAR_8, VAR_4), VAR_12, VAR_1);
      FUNC_2(FUNC_1(VAR_7, VAR_4), VAR_15, FUNC_8(VAR_10, FUNC_10(VAR_14)));
      (void)FUNC_6(VAR_10, FUNC_9(VAR_14), VAR_5);
      return VAR_12;
    }
  } else {

    switch (VAR_11->c.ffid) {
    case 129:
    case 128:

      {
 TRef VAR_16 = FUNC_2(FUNC_0(VAR_8, VAR_6), VAR_12, VAR_0);
 FUNC_2(FUNC_1(VAR_7, VAR_3), VAR_16, FUNC_7(VAR_10, VAR_11->c.ffid));
      }
      return VAR_12;
    default:

      break;
    }
  }

  VAR_13 = FUNC_5(VAR_10, VAR_11);
  FUNC_2(FUNC_1(VAR_7, VAR_2), VAR_12, VAR_13);
  return VAR_13;
}
