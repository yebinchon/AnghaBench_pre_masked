
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t kcf_ops_class_t ;
struct TYPE_3__ {int me_mutex; } ;
typedef TYPE_1__ kcf_mech_entry_t ;
struct TYPE_4__ {int met_size; TYPE_1__* met_tab; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

void
FUNC_2(void)
{
 int VAR_5, VAR_6;
 kcf_ops_class_t VAR_7;
 kcf_mech_entry_t *VAR_8;

 if (VAR_2)
  FUNC_0(VAR_2);

 FUNC_1(&VAR_3);

 for (VAR_7 = VAR_0; VAR_7 <= VAR_1; VAR_7++) {
  VAR_6 = VAR_4[VAR_7].met_size;
  VAR_8 = VAR_4[VAR_7].met_tab;
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   FUNC_1(&(VAR_8[VAR_5].me_mutex));
 }
}
