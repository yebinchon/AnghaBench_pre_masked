
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct feature_type_uint64_array_arg {int length; int * array; } ;
typedef size_t spa_feature_t ;
struct TYPE_5__ {struct feature_type_uint64_array_arg** ds_feature; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int boolean_t ;
struct TYPE_6__ {int fi_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 TYPE_2__* VAR_3 ;

boolean_t
FUNC_2(dsl_dataset_t *VAR_4, spa_feature_t VAR_5,
    uint64_t *VAR_6, uint64_t **VAR_7)
{
 FUNC_0(VAR_3[VAR_5].fi_type & VAR_2);
 if (!FUNC_1(VAR_4, VAR_5)) {
  return (VAR_0);
 }
 struct feature_type_uint64_array_arg *VAR_8 = VAR_4->ds_feature[VAR_5];
 *VAR_7 = VAR_8->array;
 *VAR_6 = VAR_8->length;
 return (VAR_1);
}
