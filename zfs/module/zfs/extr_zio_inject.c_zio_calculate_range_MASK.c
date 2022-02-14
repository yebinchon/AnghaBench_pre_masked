
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zi_start; unsigned long long zi_end; scalar_t__ zi_level; int zi_object; int zi_objset; } ;
typedef TYPE_1__ zinject_record_t ;
typedef int objset_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
struct TYPE_7__ {int dn_datablkshift; scalar_t__ dn_nlevels; int dn_indblkshift; } ;
typedef TYPE_2__ dnode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *,int ,int ,TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,int ,int ,int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char const*,int ,int **) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_3, zinject_record_t *VAR_4)
{
 dsl_pool_t *VAR_5;
 dsl_dataset_t *VAR_6;
 objset_t *VAR_7 = ((void*)0);
 dnode_t *VAR_8 = ((void*)0);
 int VAR_9;




 VAR_9 = FUNC_6(VAR_3, VAR_1, &VAR_5);
 if (VAR_9)
  return (VAR_9);

 VAR_9 = FUNC_4(VAR_5, VAR_4->zi_objset, VAR_1, &VAR_6);
 FUNC_7(VAR_5, VAR_1);
 if (VAR_9)
  return (VAR_9);

 VAR_9 = FUNC_1(VAR_6, &VAR_7);
 FUNC_5(VAR_6, VAR_1);
 if (VAR_9)
  return (VAR_9);

 VAR_9 = FUNC_2(VAR_7, VAR_4->zi_object, VAR_1, &VAR_8);
 if (VAR_9)
  return (VAR_9);




 if (VAR_4->zi_start != 0 || VAR_4->zi_end != -1ULL) {
  VAR_4->zi_start >>= VAR_8->dn_datablkshift;
  VAR_4->zi_end >>= VAR_8->dn_datablkshift;
 }
 if (VAR_4->zi_level > 0) {
  if (VAR_4->zi_level >= VAR_8->dn_nlevels) {
   FUNC_3(VAR_8, VAR_1);
   return (FUNC_0(VAR_0));
  }

  if (VAR_4->zi_start != 0 || VAR_4->zi_end != 0) {
   int VAR_10 = VAR_8->dn_indblkshift - VAR_2;

   for (int VAR_11 = VAR_4->zi_level; VAR_11 > 0; VAR_11--) {
    VAR_4->zi_start >>= VAR_10;
    VAR_4->zi_end >>= VAR_10;
   }
  }
 }

 FUNC_3(VAR_8, VAR_1);
 return (0);
}
