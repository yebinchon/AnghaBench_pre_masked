
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t kcf_ops_class_t ;
struct TYPE_3__ {int met_size; int * met_tab; } ;
typedef TYPE_1__ kcf_mech_entry_tab_t ;
typedef int kcf_mech_entry_t ;
typedef int crypto_mech_type_t ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

int
FUNC_3(crypto_mech_type_t VAR_5, kcf_mech_entry_t **VAR_6)
{
 kcf_ops_class_t VAR_7;
 int VAR_8;
 kcf_mech_entry_tab_t *VAR_9;

 FUNC_0(VAR_6 != ((void*)0));

 VAR_7 = FUNC_1(VAR_5);

 if ((VAR_7 < VAR_0) || (VAR_7 > VAR_2)) {

  return (VAR_1);
 }

 VAR_9 = &VAR_4[VAR_7];
 VAR_8 = FUNC_2(VAR_5);

 if ((VAR_8 < 0) || (VAR_8 >= VAR_9->met_size)) {
  return (VAR_1);
 }

 *VAR_6 = &((VAR_9->met_tab)[VAR_8]);

 return (VAR_3);
}
