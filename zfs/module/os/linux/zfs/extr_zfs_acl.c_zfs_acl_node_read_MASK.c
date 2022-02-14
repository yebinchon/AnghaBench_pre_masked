
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {int z_acl_count; int z_acl_bytes; int z_acl; } ;
typedef TYPE_1__ zfs_acl_t ;
struct TYPE_15__ {int z_ace_data; scalar_t__ z_acl_extern_obj; } ;
typedef TYPE_2__ zfs_acl_phys_t ;
struct TYPE_16__ {int z_ace_count; int z_size; int z_acldata; } ;
typedef TYPE_3__ zfs_acl_node_t ;
struct znode {int z_lock; TYPE_1__* z_acl_cached; int z_sa_hdl; int z_is_sa; int z_acl_lock; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {int z_os; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (int ) ;
 TYPE_11__* FUNC_4 (struct znode*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,scalar_t__,int ,int,int ,int ) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int ,int) ;
 TYPE_1__* FUNC_11 (int) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_3__* FUNC_13 (int) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (struct znode*,int*,int*,TYPE_2__*) ;
 int FUNC_16 (struct znode*) ;

int
FUNC_17(struct znode *VAR_5, boolean_t VAR_6, zfs_acl_t **VAR_7,
    boolean_t VAR_8)
{
 zfs_acl_t *VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 zfs_acl_node_t *VAR_12;
 zfs_acl_phys_t VAR_13;
 int VAR_14;
 int VAR_15;
 boolean_t VAR_16 = VAR_0;

 FUNC_0(FUNC_1(&VAR_5->z_acl_lock));

 if (VAR_5->z_acl_cached && !VAR_8) {
  *VAR_7 = VAR_5->z_acl_cached;
  return (0);
 }
 if (!VAR_5->z_is_sa && !VAR_6) {
  FUNC_8(&VAR_5->z_lock);
  VAR_16 = VAR_1;
 }
 VAR_14 = FUNC_16(VAR_5);

 if ((VAR_15 = FUNC_15(VAR_5, &VAR_10,
     &VAR_11, &VAR_13)) != 0) {
  goto done;
 }

 VAR_9 = FUNC_11(VAR_14);

 VAR_9->z_acl_count = VAR_11;
 VAR_9->z_acl_bytes = VAR_10;

 VAR_12 = FUNC_13(VAR_10);
 VAR_12->z_ace_count = VAR_9->z_acl_count;
 VAR_12->z_size = VAR_10;

 if (!VAR_5->z_is_sa) {
  if (VAR_13.z_acl_extern_obj) {
   VAR_15 = FUNC_6(FUNC_4(VAR_5)->z_os,
       VAR_13.z_acl_extern_obj, 0, VAR_12->z_size,
       VAR_12->z_acldata, VAR_2);
  } else {
   FUNC_5(VAR_13.z_ace_data, VAR_12->z_acldata,
       VAR_12->z_size);
  }
 } else {
  VAR_15 = FUNC_10(VAR_5->z_sa_hdl, FUNC_2(FUNC_4(VAR_5)),
      VAR_12->z_acldata, VAR_12->z_size);
 }

 if (VAR_15 != 0) {
  FUNC_12(VAR_9);
  FUNC_14(VAR_12);

  if (VAR_15 == VAR_3)
   VAR_15 = FUNC_3(VAR_4);
  goto done;
 }

 FUNC_7(&VAR_9->z_acl, VAR_12);

 *VAR_7 = VAR_9;
 if (!VAR_8)
  VAR_5->z_acl_cached = VAR_9;
done:
 if (VAR_16)
  FUNC_9(&VAR_5->z_lock);
 return (VAR_15);
}
