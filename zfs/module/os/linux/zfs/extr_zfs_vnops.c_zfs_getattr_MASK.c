
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;


struct TYPE_25__ {int z_pflags; scalar_t__ z_id; scalar_t__ z_blksz; int z_sa_hdl; int z_lock; int z_projid; int z_mode; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_26__ {scalar_t__ z_root; int z_max_blksz; scalar_t__ z_use_fuids; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int xvattr_t ;
struct TYPE_27__ {int xoa_archive; int xoa_readonly; int xoa_system; int xoa_hidden; int xoa_nounlink; int xoa_immutable; int xoa_appendonly; int xoa_nodump; int xoa_opaque; int xoa_av_quarantined; int xoa_av_modified; int xoa_reparse; int xoa_offline; int xoa_sparse; int xoa_projinherit; int xoa_projid; int xoa_generation; int xoa_createtime; } ;
typedef TYPE_4__ xoptattr_t ;
struct TYPE_28__ {scalar_t__ va_nodeid; int va_blksize; int va_nblocks; int va_ctime; int va_mtime; int va_atime; int va_seq; int va_rdev; int va_size; int va_nlink; int va_fsid; int va_mode; int va_type; int va_uid; int va_gid; } ;
typedef TYPE_5__ vattr_t ;
typedef scalar_t__ uint64_t ;
typedef int times ;
struct inode {int i_generation; int i_mode; int i_rdev; } ;
typedef int sa_bulk_attr_t ;
typedef int cred_t ;
typedef int boolean_t ;
struct TYPE_24__ {int s_dev; } ;
struct TYPE_23__ {scalar_t__ i_nlink; TYPE_1__* i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,int,int ,int *,scalar_t__**,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_13 (int *,scalar_t__*) ;
 int FUNC_14 (TYPE_2__*) ;
 TYPE_12__* FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int *,int) ;
 int FUNC_21 (int ,int ,scalar_t__*,int) ;
 int FUNC_22 (int ,int *,int *) ;
 int FUNC_23 (int ) ;
 TYPE_4__* FUNC_24 (int *) ;
 int FUNC_25 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_26 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*,int ,int ,int ,int *) ;

int
FUNC_29(struct inode *VAR_40, vattr_t *VAR_41, int VAR_42, cred_t *VAR_43)
{
 znode_t *VAR_44 = FUNC_0(VAR_40);
 zfsvfs_t *VAR_45 = FUNC_1(VAR_40);
 int VAR_46 = 0;
 uint64_t VAR_47;
 uint64_t VAR_48[2], VAR_49[2], VAR_50[2];
 xvattr_t *VAR_51 = (xvattr_t *)VAR_41;
 xoptattr_t *VAR_52 = ((void*)0);
 boolean_t VAR_53 = (VAR_42 & VAR_1) ? VAR_3 : VAR_2;
 sa_bulk_attr_t VAR_54[3];
 int VAR_55 = 0;

 FUNC_11(VAR_45);
 FUNC_14(VAR_44);

 FUNC_25(VAR_44, VAR_43, &VAR_41->va_uid, &VAR_41->va_gid);

 FUNC_3(VAR_54, VAR_55, FUNC_4(VAR_45), ((void*)0), &VAR_48, 16);
 FUNC_3(VAR_54, VAR_55, FUNC_7(VAR_45), ((void*)0), &VAR_49, 16);
 FUNC_3(VAR_54, VAR_55, FUNC_6(VAR_45), ((void*)0), &VAR_50, 16);

 if ((VAR_46 = FUNC_20(VAR_44->z_sa_hdl, VAR_54, VAR_55)) != 0) {
  FUNC_12(VAR_45);
  return (VAR_46);
 }






 if (!(VAR_44->z_pflags & VAR_23) &&
     (VAR_41->va_uid != FUNC_16(VAR_43))) {
  if ((VAR_46 = FUNC_28(VAR_44, VAR_0, 0,
      VAR_53, VAR_43))) {
   FUNC_12(VAR_45);
   return (VAR_46);
  }
 }






 FUNC_18(&VAR_44->z_lock);
 VAR_41->va_type = FUNC_23(VAR_44->z_mode);
 VAR_41->va_mode = VAR_44->z_mode;
 VAR_41->va_fsid = FUNC_15(VAR_44)->i_sb->s_dev;
 VAR_41->va_nodeid = VAR_44->z_id;
 if ((VAR_44->z_id == VAR_45->z_root) && FUNC_27(VAR_44))
  VAR_47 = FUNC_15(VAR_44)->i_nlink + 1;
 else
  VAR_47 = FUNC_15(VAR_44)->i_nlink;
 VAR_41->va_nlink = FUNC_2(VAR_47, VAR_30);
 VAR_41->va_size = FUNC_17(VAR_40);
 VAR_41->va_rdev = VAR_40->i_rdev;
 VAR_41->va_seq = VAR_40->i_generation;





 if ((VAR_52 = FUNC_24(VAR_51)) != ((void*)0) && VAR_45->z_use_fuids) {
  if (FUNC_9(VAR_51, VAR_5)) {
   VAR_52->xoa_archive =
       ((VAR_44->z_pflags & VAR_25) != 0);
   FUNC_10(VAR_51, VAR_5);
  }

  if (FUNC_9(VAR_51, VAR_19)) {
   VAR_52->xoa_readonly =
       ((VAR_44->z_pflags & VAR_36) != 0);
   FUNC_10(VAR_51, VAR_19);
  }

  if (FUNC_9(VAR_51, VAR_22)) {
   VAR_52->xoa_system =
       ((VAR_44->z_pflags & VAR_39) != 0);
   FUNC_10(VAR_51, VAR_22);
  }

  if (FUNC_9(VAR_51, VAR_11)) {
   VAR_52->xoa_hidden =
       ((VAR_44->z_pflags & VAR_28) != 0);
   FUNC_10(VAR_51, VAR_11);
  }

  if (FUNC_9(VAR_51, VAR_14)) {
   VAR_52->xoa_nounlink =
       ((VAR_44->z_pflags & VAR_32) != 0);
   FUNC_10(VAR_51, VAR_14);
  }

  if (FUNC_9(VAR_51, VAR_12)) {
   VAR_52->xoa_immutable =
       ((VAR_44->z_pflags & VAR_29) != 0);
   FUNC_10(VAR_51, VAR_12);
  }

  if (FUNC_9(VAR_51, VAR_4)) {
   VAR_52->xoa_appendonly =
       ((VAR_44->z_pflags & VAR_24) != 0);
   FUNC_10(VAR_51, VAR_4);
  }

  if (FUNC_9(VAR_51, VAR_13)) {
   VAR_52->xoa_nodump =
       ((VAR_44->z_pflags & VAR_31) != 0);
   FUNC_10(VAR_51, VAR_13);
  }

  if (FUNC_9(VAR_51, VAR_16)) {
   VAR_52->xoa_opaque =
       ((VAR_44->z_pflags & VAR_34) != 0);
   FUNC_10(VAR_51, VAR_16);
  }

  if (FUNC_9(VAR_51, VAR_7)) {
   VAR_52->xoa_av_quarantined =
       ((VAR_44->z_pflags & VAR_27) != 0);
   FUNC_10(VAR_51, VAR_7);
  }

  if (FUNC_9(VAR_51, VAR_6)) {
   VAR_52->xoa_av_modified =
       ((VAR_44->z_pflags & VAR_26) != 0);
   FUNC_10(VAR_51, VAR_6);
  }

  if (FUNC_9(VAR_51, VAR_8) &&
      FUNC_8(VAR_40->i_mode)) {
   FUNC_26(VAR_44, VAR_51);
  }

  if (FUNC_9(VAR_51, VAR_9)) {
   uint64_t VAR_56[2];

   (void) FUNC_21(VAR_44->z_sa_hdl, FUNC_5(VAR_45),
       VAR_56, sizeof (VAR_56));
   FUNC_13(&VAR_52->xoa_createtime, VAR_56);
   FUNC_10(VAR_51, VAR_9);
  }

  if (FUNC_9(VAR_51, VAR_20)) {
   VAR_52->xoa_reparse = ((VAR_44->z_pflags & VAR_37) != 0);
   FUNC_10(VAR_51, VAR_20);
  }
  if (FUNC_9(VAR_51, VAR_10)) {
   VAR_52->xoa_generation = VAR_40->i_generation;
   FUNC_10(VAR_51, VAR_10);
  }

  if (FUNC_9(VAR_51, VAR_15)) {
   VAR_52->xoa_offline =
       ((VAR_44->z_pflags & VAR_33) != 0);
   FUNC_10(VAR_51, VAR_15);
  }

  if (FUNC_9(VAR_51, VAR_21)) {
   VAR_52->xoa_sparse =
       ((VAR_44->z_pflags & VAR_38) != 0);
   FUNC_10(VAR_51, VAR_21);
  }

  if (FUNC_9(VAR_51, VAR_18)) {
   VAR_52->xoa_projinherit =
       ((VAR_44->z_pflags & VAR_35) != 0);
   FUNC_10(VAR_51, VAR_18);
  }

  if (FUNC_9(VAR_51, VAR_17)) {
   VAR_52->xoa_projid = VAR_44->z_projid;
   FUNC_10(VAR_51, VAR_17);
  }
 }

 FUNC_13(&VAR_41->va_atime, VAR_48);
 FUNC_13(&VAR_41->va_mtime, VAR_49);
 FUNC_13(&VAR_41->va_ctime, VAR_50);

 FUNC_19(&VAR_44->z_lock);

 FUNC_22(VAR_44->z_sa_hdl, &VAR_41->va_blksize, &VAR_41->va_nblocks);

 if (VAR_44->z_blksz == 0) {



  VAR_41->va_blksize = VAR_45->z_max_blksz;
 }

 FUNC_12(VAR_45);
 return (0);
}
