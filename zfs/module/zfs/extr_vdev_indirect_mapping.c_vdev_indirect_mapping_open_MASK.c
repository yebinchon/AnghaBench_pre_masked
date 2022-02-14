
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int vim_havecounts; int vim_entries; int vim_object; TYPE_1__* vim_phys; TYPE_10__* vim_dbuf; int * vim_objset; } ;
typedef TYPE_2__ vdev_indirect_mapping_t ;
typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_14__ {scalar_t__ doi_bonus_size; } ;
typedef TYPE_3__ dmu_object_info_t ;
struct TYPE_12__ {scalar_t__ vimp_num_entries; } ;
struct TYPE_11__ {TYPE_1__* db_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,TYPE_2__*,TYPE_10__**) ;
 int FUNC_3 (int *,int ,TYPE_3__*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ) ;
 TYPE_2__* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int ) ;

vdev_indirect_mapping_t *
FUNC_9(objset_t *VAR_3, uint64_t VAR_4)
{
 vdev_indirect_mapping_t *VAR_5 = FUNC_5(sizeof (*VAR_5), VAR_1);
 dmu_object_info_t VAR_6;
 FUNC_1(FUNC_3(VAR_3, VAR_4, &VAR_6));

 VAR_5->vim_objset = VAR_3;
 VAR_5->vim_object = VAR_4;

 FUNC_1(FUNC_2(VAR_3, VAR_5->vim_object, VAR_5,
     &VAR_5->vim_dbuf));
 VAR_5->vim_phys = VAR_5->vim_dbuf->db_data;

 VAR_5->vim_havecounts =
     (VAR_6.doi_bonus_size > VAR_2);

 if (VAR_5->vim_phys->vimp_num_entries > 0) {
  uint64_t VAR_7 = FUNC_6(VAR_5);
  VAR_5->vim_entries = FUNC_8(VAR_7, VAR_1);
  FUNC_1(FUNC_4(VAR_3, VAR_5->vim_object, 0, VAR_7,
      VAR_5->vim_entries, VAR_0));
 }

 FUNC_0(FUNC_7(VAR_5));

 return (VAR_5);
}
