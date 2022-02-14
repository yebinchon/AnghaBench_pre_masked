
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int z_lock; int z_sa_hdl; int z_pflags; int z_size; int z_id; int z_mode; scalar_t__ z_unlinked; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_21__ {int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_22__ {int dl_name; TYPE_1__* dl_dzp; } ;
typedef TYPE_3__ zfs_dirlock_t ;
typedef int uint64_t ;
typedef int sa_bulk_attr_t ;
typedef int mtime ;
typedef int links ;
typedef int dmu_tx_t ;
typedef int ctime ;
struct TYPE_23__ {int i_nlink; int i_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ,int *,int *,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__* FUNC_10 (TYPE_1__*) ;
 TYPE_2__* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_8__*) ;
 int FUNC_13 (TYPE_8__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *,int,int *) ;
 int FUNC_17 (int ,int ,int ,int,int,int *,int *) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int FUNC_19 (TYPE_1__*,int ,int *,int *) ;

int
FUNC_20(zfs_dirlock_t *VAR_6, znode_t *VAR_7, dmu_tx_t *VAR_8, int VAR_9)
{
 znode_t *VAR_10 = VAR_6->dl_dzp;
 zfsvfs_t *VAR_11 = FUNC_11(VAR_7);
 uint64_t VAR_12;
 int VAR_13 = FUNC_9(FUNC_10(VAR_7)->i_mode);
 sa_bulk_attr_t VAR_14[5];
 uint64_t VAR_15[2], VAR_16[2];
 uint64_t VAR_17;
 int VAR_18 = 0;
 int VAR_19;

 FUNC_14(&VAR_7->z_lock);

 if (!(VAR_9 & VAR_5)) {
  if (VAR_7->z_unlinked) {
   FUNC_0(!(VAR_9 & (VAR_4 | VAR_3)));
   FUNC_15(&VAR_7->z_lock);
   return (FUNC_8(VAR_1));
  }
  if (!(VAR_9 & VAR_4)) {




   FUNC_13(FUNC_10(VAR_7));
   VAR_17 = FUNC_10(VAR_7)->i_nlink;
   FUNC_1(VAR_14, VAR_18, FUNC_4(VAR_11),
       ((void*)0), &VAR_17, sizeof (VAR_17));
  }
 }

 VAR_12 = FUNC_18(VAR_7, VAR_7->z_mode);
 VAR_19 = FUNC_17(FUNC_11(VAR_7)->z_os, VAR_10->z_id, VAR_6->dl_name, 8, 1,
     &VAR_12, VAR_8);







 if (VAR_19 != 0) {
  if (!(VAR_9 & VAR_5) && !(VAR_9 & VAR_4))
   FUNC_12(FUNC_10(VAR_7));
  FUNC_15(&VAR_7->z_lock);
  return (VAR_19);
 }

 FUNC_1(VAR_14, VAR_18, FUNC_6(VAR_11), ((void*)0),
     &VAR_10->z_id, sizeof (VAR_10->z_id));
 FUNC_1(VAR_14, VAR_18, FUNC_3(VAR_11), ((void*)0),
     &VAR_7->z_pflags, sizeof (VAR_7->z_pflags));

 if (!(VAR_9 & VAR_4)) {
  FUNC_1(VAR_14, VAR_18, FUNC_2(VAR_11), ((void*)0),
      VAR_16, sizeof (VAR_16));
  FUNC_19(VAR_7, VAR_2, VAR_15,
      VAR_16);
 }
 VAR_19 = FUNC_16(VAR_7->z_sa_hdl, VAR_14, VAR_18, VAR_8);
 FUNC_0(VAR_19 == 0);

 FUNC_15(&VAR_7->z_lock);

 FUNC_14(&VAR_10->z_lock);
 VAR_10->z_size++;
 if (VAR_13)
  FUNC_13(FUNC_10(VAR_10));
 VAR_17 = FUNC_10(VAR_10)->i_nlink;
 VAR_18 = 0;
 FUNC_1(VAR_14, VAR_18, FUNC_7(VAR_11), ((void*)0),
     &VAR_10->z_size, sizeof (VAR_10->z_size));
 FUNC_1(VAR_14, VAR_18, FUNC_4(VAR_11), ((void*)0),
     &VAR_17, sizeof (VAR_17));
 FUNC_1(VAR_14, VAR_18, FUNC_5(VAR_11), ((void*)0),
     VAR_15, sizeof (VAR_15));
 FUNC_1(VAR_14, VAR_18, FUNC_2(VAR_11), ((void*)0),
     VAR_16, sizeof (VAR_16));
 FUNC_1(VAR_14, VAR_18, FUNC_3(VAR_11), ((void*)0),
     &VAR_10->z_pflags, sizeof (VAR_10->z_pflags));
 FUNC_19(VAR_10, VAR_0, VAR_15, VAR_16);
 VAR_19 = FUNC_16(VAR_10->z_sa_hdl, VAR_14, VAR_18, VAR_8);
 FUNC_0(VAR_19 == 0);
 FUNC_15(&VAR_10->z_lock);

 return (0);
}
