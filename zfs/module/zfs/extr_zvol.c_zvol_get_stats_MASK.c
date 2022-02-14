
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;
struct TYPE_5__ {int doi_data_block_size; } ;
typedef TYPE_1__ dmu_object_info_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *,int ,char*,int,int,int *) ;

int
FUNC_6(objset_t *VAR_5, nvlist_t *VAR_6)
{
 int VAR_7;
 dmu_object_info_t *VAR_8;
 uint64_t VAR_9;

 VAR_7 = FUNC_5(VAR_5, VAR_4, "size", 8, 1, &VAR_9);
 if (VAR_7)
  return (FUNC_0(VAR_7));

 FUNC_2(VAR_6, VAR_2, VAR_9);
 VAR_8 = FUNC_3(sizeof (dmu_object_info_t), VAR_0);
 VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_8);

 if (VAR_7 == 0) {
  FUNC_2(VAR_6, VAR_1,
      VAR_8->doi_data_block_size);
 }

 FUNC_4(VAR_8, sizeof (dmu_object_info_t));

 return (FUNC_0(VAR_7));
}
