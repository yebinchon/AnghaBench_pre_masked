
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int z_pflags; scalar_t__ z_size; int z_blksz; int z_sa_hdl; scalar_t__ z_is_mapped; int z_rangelock; int z_id; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_18__ {int z_kstat; scalar_t__ z_log; TYPE_1__* z_os; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int zfs_locked_range_t ;
struct TYPE_19__ {scalar_t__ xu_type; } ;
typedef TYPE_4__ xuio_t ;
struct TYPE_20__ {scalar_t__ uio_loffset; int uio_resid; scalar_t__ uio_extflg; } ;
typedef TYPE_5__ uio_t ;
typedef int uint64_t ;
struct inode {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ offset_t ;
typedef int int64_t ;
typedef int cred_t ;
typedef int boolean_t ;
struct TYPE_16__ {scalar_t__ os_sync; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int FUNC_4 (int,scalar_t__) ;
 int VAR_6 ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,int) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ VAR_11 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int ,TYPE_5__*,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (TYPE_4__*,int ,int ,int) ;
 int FUNC_16 (TYPE_4__*,int) ;
 int FUNC_17 (struct inode*,int,TYPE_5__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 (struct inode*) ;
 int * FUNC_21 (int *,scalar_t__,int,int ) ;
 int FUNC_22 (int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_23 (scalar_t__,int ) ;

int
FUNC_24(struct inode *VAR_13, uio_t *VAR_14, int VAR_15, cred_t *VAR_16)
{
 int VAR_17 = 0;
 boolean_t VAR_18 = VAR_0;

 znode_t *VAR_19 = FUNC_2(VAR_13);
 zfsvfs_t *VAR_20 = FUNC_3(VAR_13);
 FUNC_9(VAR_20);
 FUNC_11(VAR_19);

 if (VAR_19->z_pflags & VAR_10) {
  FUNC_10(VAR_20);
  return (FUNC_8(VAR_1));
 }




 if (VAR_14->uio_loffset < (offset_t)0) {
  FUNC_10(VAR_20);
  return (FUNC_8(VAR_3));
 }




 if (VAR_14->uio_resid == 0) {
  FUNC_10(VAR_20);
  return (0);
 }
 if (VAR_20->z_log &&
     (VAR_18 || VAR_20->z_os->os_sync == VAR_11))
  FUNC_23(VAR_20->z_log, VAR_19->z_id);




 zfs_locked_range_t *VAR_21 = FUNC_21(&VAR_19->z_rangelock,
     VAR_14->uio_loffset, VAR_14->uio_resid, VAR_7);





 if (VAR_14->uio_loffset >= VAR_19->z_size) {
  VAR_17 = 0;
  goto out;
 }

 FUNC_0(VAR_14->uio_loffset < VAR_19->z_size);
 ssize_t VAR_22 = FUNC_4(VAR_14->uio_resid, VAR_19->z_size - VAR_14->uio_loffset);
 ssize_t VAR_23 = VAR_22;
 while (VAR_22 > 0) {
  ssize_t VAR_24 = FUNC_4(VAR_22, VAR_12 -
      FUNC_6(VAR_14->uio_loffset, VAR_12));

  if (VAR_19->z_is_mapped && !(VAR_15 & VAR_6)) {
   VAR_17 = FUNC_17(VAR_13, VAR_24, VAR_14);
  } else {
   VAR_17 = FUNC_13(FUNC_18(VAR_19->z_sa_hdl),
       VAR_14, VAR_24);
  }

  if (VAR_17) {

   if (VAR_17 == VAR_2)
    VAR_17 = FUNC_8(VAR_4);
   break;
  }

  VAR_22 -= VAR_24;
 }

 int64_t VAR_25 = VAR_23 - VAR_22;
 FUNC_12(&VAR_20->z_kstat, VAR_25);
 FUNC_19(VAR_25);
out:
 FUNC_22(VAR_21);

 FUNC_10(VAR_20);
 return (VAR_17);
}
