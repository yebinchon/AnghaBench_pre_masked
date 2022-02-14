
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_3__ {scalar_t__ dd_pool_guid; scalar_t__ dd_vdev_guid; int dd_func; int member_0; } ;
typedef TYPE_1__ dev_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(nvlist_t *VAR_6)
{
 dev_data_t VAR_7 = { 0 };

 if (FUNC_0(VAR_6, VAR_1,
     &VAR_7.dd_pool_guid) != 0 ||
     FUNC_0(VAR_6, VAR_2,
     &VAR_7.dd_vdev_guid) != 0 ||
     VAR_7.dd_vdev_guid == 0)
  return (0);

 FUNC_1(VAR_0, "zfs_deliver_check: pool '%llu', vdev %llu",
     VAR_7.dd_pool_guid, VAR_7.dd_vdev_guid);

 VAR_7.dd_func = VAR_5;

 (void) FUNC_2(VAR_3, VAR_4, &VAR_7);

 return (0);
}
