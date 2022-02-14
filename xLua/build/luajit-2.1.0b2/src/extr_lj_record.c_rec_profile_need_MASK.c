
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float prof_mode; int prev_line; int * prev_pt; } ;
typedef TYPE_1__ jit_State ;
typedef int GCproto ;
typedef scalar_t__ BCLine ;
typedef int BCIns ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int const*) ;

__attribute__((used)) static int FUNC_3(jit_State *VAR_0, GCproto *VAR_1, const BCIns *VAR_2)
{
  GCproto *VAR_3;
  FUNC_1(VAR_0->prof_mode == 'f' || VAR_0->prof_mode == 'l');
  if (!VAR_1)
    return 0;
  VAR_3 = VAR_0->prev_pt;
  VAR_0->prev_pt = VAR_1;
  if (VAR_1 != VAR_3 && VAR_3) {
    VAR_0->prev_line = -1;
    return 1;
  }
  if (VAR_0->prof_mode == 'l') {
    BCLine VAR_4 = FUNC_0(VAR_1, FUNC_2(VAR_1, VAR_2));
    BCLine VAR_5 = VAR_0->prev_line;
    VAR_0->prev_line = VAR_4;
    if (VAR_5 != VAR_4)
      return 1;
  }
  return 0;
}
