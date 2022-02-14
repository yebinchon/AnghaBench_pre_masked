
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int z_lock; int z_sa_hdl; int ******** z_mode; int z_atime_dirty; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_15__ {int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int **** uint64_t ;
struct inode {int ******** i_mode; int i_ctime; int i_mtime; int i_atime; } ;
typedef int sa_bulk_attr_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int,int ,int *,int ******,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int *****) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int *,int,int *) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int *,TYPE_1__*) ;

int
FUNC_22(struct inode *VAR_4, int VAR_5)
{
 znode_t *VAR_6 = FUNC_0(VAR_4);
 zfsvfs_t *VAR_7 = FUNC_1(VAR_4);
 dmu_tx_t *VAR_8;
 uint64_t VAR_9, VAR_10[2], VAR_11[2], VAR_12[2];
 sa_bulk_attr_t VAR_13[4];
 int VAR_14 = 0;
 int VAR_15 = 0;

 if (FUNC_20(VAR_7) || FUNC_11(VAR_7->z_os))
  return (0);

 FUNC_7(VAR_7);
 FUNC_10(VAR_6);
 VAR_8 = FUNC_15(VAR_7->z_os);

 FUNC_16(VAR_8, VAR_6->z_sa_hdl, VAR_0);
 FUNC_21(VAR_8, VAR_6);

 VAR_14 = FUNC_13(VAR_8, VAR_3);
 if (VAR_14) {
  FUNC_12(VAR_8);
  goto out;
 }

 FUNC_17(&VAR_6->z_lock);
 VAR_6->z_atime_dirty = VAR_0;

 FUNC_2(VAR_13, VAR_15, FUNC_5(VAR_7), ((void*)0), &VAR_9, 8);
 FUNC_2(VAR_13, VAR_15, FUNC_3(VAR_7), ((void*)0), &VAR_10, 16);
 FUNC_2(VAR_13, VAR_15, FUNC_6(VAR_7), ((void*)0), &VAR_11, 16);
 FUNC_2(VAR_13, VAR_15, FUNC_4(VAR_7), ((void*)0), &VAR_12, 16);


 FUNC_9(&VAR_4->i_atime, VAR_10);
 FUNC_9(&VAR_4->i_mtime, VAR_11);
 FUNC_9(&VAR_4->i_ctime, VAR_12);
 VAR_9 = VAR_4->i_mode;

 VAR_6->z_mode = VAR_9;

 VAR_14 = FUNC_19(VAR_6->z_sa_hdl, VAR_13, VAR_15, VAR_8);
 FUNC_18(&VAR_6->z_lock);

 FUNC_14(VAR_8);
out:
 FUNC_8(VAR_7);
 return (VAR_14);
}
