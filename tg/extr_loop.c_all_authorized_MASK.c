
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_dc_num; scalar_t__* DC_list; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;

int FUNC_1 (void) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 <= VAR_0->max_dc_num; VAR_1++) if (VAR_0->DC_list[VAR_1]) {
    if (!FUNC_0 (VAR_0, VAR_0->DC_list[VAR_1])) {
      return 0;
    }
  }
  return 1;
}
