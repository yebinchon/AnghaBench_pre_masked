
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jit_State ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {int len; } ;
typedef int TValue ;
typedef int TRef ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,char) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,int ) ;
 TYPE_1__* FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;

int32_t FUNC_10(jit_State *VAR_9, TRef VAR_10, TValue *VAR_11)
{
  if (FUNC_9(VAR_10) && *FUNC_8(VAR_11) == '#') {
    if (FUNC_7(VAR_11)->len == 1) {
      FUNC_3(FUNC_1(VAR_5, VAR_2), VAR_10, FUNC_5(VAR_9, FUNC_7(VAR_11)));
    } else {
      TRef VAR_12 = FUNC_3(FUNC_0(VAR_6, VAR_1), VAR_10, FUNC_4(VAR_9, 0));
      TRef VAR_13 = FUNC_3(FUNC_0(VAR_7, VAR_3), VAR_12, VAR_4);
      FUNC_3(FUNC_1(VAR_5, VAR_0), VAR_13, FUNC_4(VAR_9, '#'));
    }
    return 0;
  } else {
    int32_t VAR_14 = FUNC_2(VAR_9, VAR_11);
    if (VAR_14 == 0) FUNC_6(VAR_9, VAR_8);
    return VAR_14;
  }
}
