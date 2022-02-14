
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct feature_type_uint64_array_arg {int array; scalar_t__ length; } ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {int ds_object; struct feature_type_uint64_array_arg** ds_feature; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int,size_t,struct feature_type_uint64_array_arg*,int *) ;
 int FUNC_2 (int,int ) ;
 struct feature_type_uint64_array_arg* FUNC_3 (int,int ) ;

void
FUNC_4(dsl_dataset_t *VAR_2, uint64_t *VAR_3,
    uint64_t VAR_4, dmu_tx_t *VAR_5)
{
 uint64_t VAR_6 = VAR_2->ds_object;
 struct feature_type_uint64_array_arg *VAR_7 =
     FUNC_3(sizeof (*VAR_7), VAR_0);
 VAR_7->length = (int64_t)VAR_4;
 if (VAR_4 > 0) {
  VAR_7->array = FUNC_2(VAR_4 * sizeof (uint64_t),
      VAR_0);
  FUNC_0(VAR_3, VAR_7->array, VAR_4 *
      sizeof (uint64_t));
 }
 FUNC_1(VAR_6, VAR_1,
     VAR_7, VAR_5);
 VAR_2->ds_feature[VAR_1] = VAR_7;
}
