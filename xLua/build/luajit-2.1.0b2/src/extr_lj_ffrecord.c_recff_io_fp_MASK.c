
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * base; } ;
typedef TYPE_1__ jit_State ;
typedef int int32_t ;
struct TYPE_10__ {int * gcroot; } ;
typedef int TRef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_7__* FUNC_3 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static TRef FUNC_10(jit_State *VAR_11, TRef *VAR_12, int32_t VAR_13)
{
  TRef VAR_14, VAR_15, VAR_16;
  if (VAR_13) {
    VAR_14 = FUNC_7(VAR_11, &FUNC_3(VAR_11)->gcroot[VAR_13]);
    VAR_15 = FUNC_4(FUNC_0(VAR_8, VAR_4), VAR_14, 0);
  } else {
    VAR_15 = VAR_11->base[0];
    if (!FUNC_9(VAR_15))
      FUNC_8(VAR_11, VAR_9);
    VAR_14 = FUNC_4(FUNC_0(VAR_6, VAR_3), VAR_15, VAR_1);
    FUNC_4(FUNC_2(VAR_5), VAR_14, FUNC_5(VAR_11, VAR_10));
  }
  *VAR_12 = VAR_15;
  VAR_16 = FUNC_4(FUNC_0(VAR_6, VAR_2), VAR_15, VAR_0);
  FUNC_4(FUNC_1(VAR_7, VAR_2), VAR_16, FUNC_6(VAR_11, VAR_2));
  return VAR_16;
}
