
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sa_num_attrs; TYPE_1__* sa_attr_table; scalar_t__ sa_reg_attr_obj; int sa_need_attr_registration; } ;
typedef TYPE_2__ sa_os_t ;
typedef int dmu_tx_t ;
struct TYPE_4__ {int sa_name; int sa_registered; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_1(sa_os_t *VAR_2, dmu_tx_t *VAR_3)
{
 if (!VAR_2->sa_need_attr_registration)
  return;

 for (int VAR_4 = 0; VAR_4 != VAR_2->sa_num_attrs; VAR_4++) {
  if (!VAR_2->sa_attr_table[VAR_4].sa_registered) {
   if (VAR_2->sa_reg_attr_obj)
    FUNC_0(VAR_3, VAR_2->sa_reg_attr_obj,
        VAR_0, VAR_2->sa_attr_table[VAR_4].sa_name);
   else
    FUNC_0(VAR_3, VAR_1,
        VAR_0, VAR_2->sa_attr_table[VAR_4].sa_name);
  }
 }
}
