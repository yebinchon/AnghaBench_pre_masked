
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jit_State ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__ len; } ;
typedef int TRef ;
typedef TYPE_1__ GCstr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static TRef FUNC_4(jit_State *VAR_4, GCstr *VAR_5, int32_t *VAR_6, TRef VAR_7,
          TRef VAR_8, TRef VAR_9)
{
  int32_t VAR_10 = *VAR_6;
  if (VAR_10 < 0) {
    FUNC_2(FUNC_0(VAR_3), VAR_7, VAR_9);
    VAR_7 = FUNC_2(FUNC_1(VAR_0), VAR_8, VAR_7);
    VAR_10 = VAR_10 + (int32_t)VAR_5->len;
    FUNC_2(VAR_10 < 0 ? FUNC_0(VAR_3) : FUNC_0(VAR_2), VAR_7, VAR_9);
    if (VAR_10 < 0) {
      VAR_7 = VAR_9;
      VAR_10 = 0;
    }
  } else if (VAR_10 == 0) {
    FUNC_2(FUNC_0(VAR_1), VAR_7, VAR_9);
    VAR_7 = VAR_9;
  } else {
    VAR_7 = FUNC_2(FUNC_1(VAR_0), VAR_7, FUNC_3(VAR_4, -1));
    FUNC_2(FUNC_0(VAR_2), VAR_7, VAR_9);
    VAR_10--;
  }
  *VAR_6 = VAR_10;
  return VAR_7;
}
