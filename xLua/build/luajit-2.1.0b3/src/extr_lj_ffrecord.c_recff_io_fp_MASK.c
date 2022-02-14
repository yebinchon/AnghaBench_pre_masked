
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * base; } ;
typedef TYPE_1__ jit_State ;
typedef int int32_t ;
struct TYPE_13__ {int * gcroot; } ;
struct TYPE_12__ {int * gcroot; } ;
typedef int TRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_9__* FUNC_4 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int ,int ) ;
 TYPE_8__ VAR_11 ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static TRef FUNC_12(jit_State *VAR_12, TRef *VAR_13, int32_t VAR_14)
{
  TRef VAR_15, VAR_16, VAR_17;
  if (VAR_14) {




    VAR_15 = FUNC_9(VAR_12, &FUNC_4(VAR_12)->gcroot[VAR_14]);
    VAR_16 = FUNC_5(FUNC_1(VAR_8, VAR_4), VAR_15, 0);

  } else {
    VAR_16 = VAR_12->base[0];
    if (!FUNC_11(VAR_16))
      FUNC_10(VAR_12, VAR_9);
    VAR_15 = FUNC_5(FUNC_1(VAR_6, VAR_3), VAR_16, VAR_1);
    FUNC_5(FUNC_3(VAR_5), VAR_15, FUNC_7(VAR_12, VAR_10));
  }
  *VAR_13 = VAR_16;
  VAR_17 = FUNC_5(FUNC_1(VAR_6, VAR_2), VAR_16, VAR_0);
  FUNC_5(FUNC_2(VAR_7, VAR_2), VAR_17, FUNC_8(VAR_12, VAR_2));
  return VAR_17;
}
