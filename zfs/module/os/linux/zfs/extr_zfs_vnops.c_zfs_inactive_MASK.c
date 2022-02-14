
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ z_unlinked; int z_lock; scalar_t__ z_atime_dirty; int * z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_9__ {int z_teardown_inactive_lock; int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int uint64_t ;
struct inode {int i_atime; } ;
typedef int dmu_tx_t ;
typedef int atime ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,void*,int,int *) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;

void
FUNC_17(struct inode *VAR_3)
{
 znode_t *VAR_4 = FUNC_0(VAR_3);
 zfsvfs_t *VAR_5 = FUNC_1(VAR_3);
 uint64_t VAR_6[2];
 int VAR_7;
 int VAR_8 = 0;


 if (!FUNC_2(&VAR_5->z_teardown_inactive_lock)) {
  VAR_8 = 1;
  FUNC_12(&VAR_5->z_teardown_inactive_lock, VAR_1);
 }
 if (VAR_4->z_sa_hdl == ((void*)0)) {
  if (VAR_8)
   FUNC_13(&VAR_5->z_teardown_inactive_lock);
  return;
 }

 if (VAR_4->z_atime_dirty && VAR_4->z_unlinked == VAR_0) {
  dmu_tx_t *VAR_9 = FUNC_8(VAR_5->z_os);

  FUNC_9(VAR_9, VAR_4->z_sa_hdl, VAR_0);
  FUNC_15(VAR_9, VAR_4);
  VAR_7 = FUNC_6(VAR_9, VAR_2);
  if (VAR_7) {
   FUNC_5(VAR_9);
  } else {
   FUNC_4(&VAR_3->i_atime, VAR_6);
   FUNC_10(&VAR_4->z_lock);
   (void) FUNC_14(VAR_4->z_sa_hdl, FUNC_3(VAR_5),
       (void *)&VAR_6, sizeof (VAR_6), VAR_9);
   VAR_4->z_atime_dirty = VAR_0;
   FUNC_11(&VAR_4->z_lock);
   FUNC_7(VAR_9);
  }
 }

 FUNC_16(VAR_4);
 if (VAR_8)
  FUNC_13(&VAR_5->z_teardown_inactive_lock);
}
