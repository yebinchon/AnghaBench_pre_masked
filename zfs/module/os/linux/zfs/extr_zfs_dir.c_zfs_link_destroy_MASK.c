
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct TYPE_18__ {int z_pflags; int z_size; int z_lock; int z_sa_hdl; void* z_unlinked; int z_id; } ;
typedef TYPE_1__ znode_t ;
typedef int zfsvfs_t ;
struct TYPE_19__ {TYPE_1__* dl_dzp; } ;
typedef TYPE_2__ zfs_dirlock_t ;
typedef int uint64_t ;
typedef int sa_bulk_attr_t ;
typedef int mtime ;
typedef int links ;
typedef int dmu_tx_t ;
typedef int ctime ;
typedef void* boolean_t ;
struct TYPE_17__ {int i_nlink; int i_mode; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int ,int *,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 TYPE_11__* FUNC_9 (TYPE_1__*) ;
 int * FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_11__*) ;
 int FUNC_12 (TYPE_11__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *,int,int *) ;
 int FUNC_16 (TYPE_11__*,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int *,int) ;
 int FUNC_19 (char*,int ,int,int) ;
 int FUNC_20 (TYPE_1__*,int ,int*,int*) ;
 int FUNC_21 (TYPE_1__*,int *) ;

int
FUNC_22(zfs_dirlock_t *VAR_6, znode_t *VAR_7, dmu_tx_t *VAR_8, int VAR_9,
    boolean_t *VAR_10)
{
 znode_t *VAR_11 = VAR_6->dl_dzp;
 zfsvfs_t *VAR_12 = FUNC_10(VAR_11);
 int VAR_13 = FUNC_8(FUNC_9(VAR_7)->i_mode);
 boolean_t VAR_14 = VAR_0;
 sa_bulk_attr_t VAR_15[5];
 uint64_t VAR_16[2], VAR_17[2];
 uint64_t VAR_18;
 int VAR_19 = 0;
 int VAR_20;

 if (!(VAR_9 & VAR_5)) {
  FUNC_13(&VAR_7->z_lock);

  if (VAR_13 && !FUNC_17(VAR_7)) {
   FUNC_14(&VAR_7->z_lock);
   return (FUNC_7(VAR_3));
  }






  VAR_20 = FUNC_18(VAR_6, VAR_7, VAR_11, VAR_8, VAR_9);
  if (VAR_20 != 0) {
   FUNC_14(&VAR_7->z_lock);
   return (VAR_20);
  }

  if (FUNC_9(VAR_7)->i_nlink <= VAR_13) {
   FUNC_19("zfs: link count on %lu is %u, "
       "should be at least %u", VAR_7->z_id,
       (int)FUNC_9(VAR_7)->i_nlink, VAR_13 + 1);
   FUNC_16(FUNC_9(VAR_7), VAR_13 + 1);
  }
  FUNC_12(FUNC_9(VAR_7));
  if (FUNC_9(VAR_7)->i_nlink == VAR_13) {
   VAR_7->z_unlinked = VAR_1;
   FUNC_11(FUNC_9(VAR_7));
   VAR_14 = VAR_1;
  } else {
   FUNC_1(VAR_15, VAR_19, FUNC_2(VAR_12),
       ((void*)0), &VAR_17, sizeof (VAR_17));
   FUNC_1(VAR_15, VAR_19, FUNC_3(VAR_12),
       ((void*)0), &VAR_7->z_pflags, sizeof (VAR_7->z_pflags));
   FUNC_20(VAR_7, VAR_4, VAR_16,
       VAR_17);
  }
  VAR_18 = FUNC_9(VAR_7)->i_nlink;
  FUNC_1(VAR_15, VAR_19, FUNC_4(VAR_12),
      ((void*)0), &VAR_18, sizeof (VAR_18));
  VAR_20 = FUNC_15(VAR_7->z_sa_hdl, VAR_15, VAR_19, VAR_8);
  VAR_19 = 0;
  FUNC_0(VAR_20 == 0);
  FUNC_14(&VAR_7->z_lock);
 } else {
  VAR_20 = FUNC_18(VAR_6, VAR_7, VAR_11, VAR_8, VAR_9);
  if (VAR_20 != 0)
   return (VAR_20);
 }

 FUNC_13(&VAR_11->z_lock);
 VAR_11->z_size--;
 if (VAR_13)
  FUNC_12(FUNC_9(VAR_11));
 VAR_18 = FUNC_9(VAR_11)->i_nlink;
 FUNC_1(VAR_15, VAR_19, FUNC_4(VAR_12),
     ((void*)0), &VAR_18, sizeof (VAR_18));
 FUNC_1(VAR_15, VAR_19, FUNC_6(VAR_12),
     ((void*)0), &VAR_11->z_size, sizeof (VAR_11->z_size));
 FUNC_1(VAR_15, VAR_19, FUNC_2(VAR_12),
     ((void*)0), VAR_17, sizeof (VAR_17));
 FUNC_1(VAR_15, VAR_19, FUNC_5(VAR_12),
     ((void*)0), VAR_16, sizeof (VAR_16));
 FUNC_1(VAR_15, VAR_19, FUNC_3(VAR_12),
     ((void*)0), &VAR_11->z_pflags, sizeof (VAR_11->z_pflags));
 FUNC_20(VAR_11, VAR_2, VAR_16, VAR_17);
 VAR_20 = FUNC_15(VAR_11->z_sa_hdl, VAR_15, VAR_19, VAR_8);
 FUNC_0(VAR_20 == 0);
 FUNC_14(&VAR_11->z_lock);

 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_14;
 else if (VAR_14)
  FUNC_21(VAR_7, VAR_8);

 return (0);
}
