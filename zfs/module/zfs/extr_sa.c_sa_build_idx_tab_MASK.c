
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int * sa_idx_tab; int * sa_variable_lengths; } ;
typedef TYPE_1__ sa_idx_tab_t ;
typedef size_t sa_attr_type_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ) ;

void
FUNC_2(void *VAR_0, void *VAR_1, sa_attr_type_t VAR_2,
    uint16_t VAR_3, int VAR_4, boolean_t VAR_5, void *VAR_6)
{
 sa_idx_tab_t *VAR_7 = VAR_6;

 if (VAR_5) {
  FUNC_0(VAR_7->sa_variable_lengths);
  VAR_7->sa_variable_lengths[VAR_4] = VAR_3;
 }
 FUNC_1(VAR_7->sa_idx_tab[VAR_2], VAR_4,
     (uint32_t)((uintptr_t)VAR_1 - (uintptr_t)VAR_0));
}
