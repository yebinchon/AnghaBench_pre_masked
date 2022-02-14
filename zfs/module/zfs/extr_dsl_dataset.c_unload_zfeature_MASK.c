
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct feature_type_uint64_array_arg {int length; struct feature_type_uint64_array_arg* array; } ;
typedef size_t spa_feature_t ;
struct TYPE_4__ {struct feature_type_uint64_array_arg** ds_feature; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_5__ {int fi_type; } ;




 int FUNC_0 (struct feature_type_uint64_array_arg*,int) ;
 int FUNC_1 (char*,int) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static void
FUNC_2(dsl_dataset_t *VAR_1, spa_feature_t VAR_2)
{
 switch (VAR_0[VAR_2].fi_type) {
 case 129:
  break;
 case 128:
 {
  struct feature_type_uint64_array_arg *VAR_3 = VAR_1->ds_feature[VAR_2];
  FUNC_0(VAR_3->array, VAR_3->length * sizeof (uint64_t));
  FUNC_0(VAR_3, sizeof (*VAR_3));
  break;
 }
 default:
  FUNC_1("Invalid zfeature type %d", VAR_0[VAR_2].fi_type);
 }
}
