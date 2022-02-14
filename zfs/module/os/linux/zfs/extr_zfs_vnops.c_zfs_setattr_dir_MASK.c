
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ z_projid; int z_pflags; int z_sa_hdl; int z_lock; int z_id; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_15__ {int * z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int zfs_dirlock_t ;
typedef int zap_cursor_t ;
struct TYPE_16__ {int za_integer_length; int za_num_integers; scalar_t__ za_name; } ;
typedef TYPE_3__ zap_attribute_t ;
typedef int uint64_t ;
typedef int uid ;
struct inode {int i_gid; int i_uid; } ;
typedef int sa_bulk_attr_t ;
typedef int objset_t ;
typedef int gid ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ,int *,int*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (struct inode*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int *,int,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int *,int ) ;
 int FUNC_22 (int *,TYPE_3__*) ;
 int FUNC_23 (int **,TYPE_1__*,char*,TYPE_1__**,int ,int *,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct inode*) ;

__attribute__((used)) static int
FUNC_27(znode_t *VAR_7)
{
 struct inode *VAR_8 = FUNC_8(VAR_7);
 struct inode *VAR_9 = ((void*)0);
 zfsvfs_t *VAR_10 = FUNC_0(VAR_8);
 objset_t *VAR_11 = VAR_10->z_os;
 zap_cursor_t VAR_12;
 zap_attribute_t VAR_13;
 zfs_dirlock_t *VAR_14;
 znode_t *VAR_15;
 dmu_tx_t *VAR_16 = ((void*)0);
 uint64_t VAR_17, VAR_18;
 sa_bulk_attr_t VAR_19[4];
 int VAR_20;
 int VAR_21;

 FUNC_21(&VAR_12, VAR_11, VAR_7->z_id);
 while ((VAR_21 = FUNC_22(&VAR_12, &VAR_13)) == 0) {
  VAR_20 = 0;
  if (VAR_13.za_integer_length != 8 || VAR_13.za_num_integers != 1) {
   VAR_21 = VAR_3;
   break;
  }

  VAR_21 = FUNC_23(&VAR_14, VAR_7, (char *)VAR_13.za_name, &VAR_15,
      VAR_5, ((void*)0), ((void*)0));
  if (VAR_21 == VAR_2)
   goto next;
  if (VAR_21)
   break;

  VAR_9 = FUNC_8(VAR_15);
  if (FUNC_2(VAR_9->i_uid) == FUNC_2(VAR_8->i_uid) &&
      FUNC_1(VAR_9->i_gid) == FUNC_1(VAR_8->i_gid) &&
      VAR_15->z_projid == VAR_7->z_projid)
   goto next;

  VAR_16 = FUNC_12(VAR_11);
  if (!(VAR_15->z_pflags & VAR_6))
   FUNC_13(VAR_16, VAR_15->z_sa_hdl, VAR_1);
  else
   FUNC_13(VAR_16, VAR_15->z_sa_hdl, VAR_0);

  VAR_21 = FUNC_10(VAR_16, VAR_4);
  if (VAR_21)
   break;

  FUNC_16(&VAR_7->z_lock);

  if (FUNC_2(VAR_9->i_uid) != FUNC_2(VAR_8->i_uid)) {
   VAR_9->i_uid = VAR_8->i_uid;
   VAR_17 = FUNC_26(VAR_8);
   FUNC_3(VAR_19, VAR_20, FUNC_7(VAR_10), ((void*)0),
       &VAR_17, sizeof (VAR_17));
  }

  if (FUNC_1(VAR_9->i_gid) != FUNC_1(VAR_8->i_gid)) {
   VAR_9->i_gid = VAR_8->i_gid;
   VAR_18 = FUNC_25(VAR_8);
   FUNC_3(VAR_19, VAR_20, FUNC_5(VAR_10), ((void*)0),
       &VAR_18, sizeof (VAR_18));
  }

  if (VAR_15->z_projid != VAR_7->z_projid) {
   if (!(VAR_15->z_pflags & VAR_6)) {
    VAR_15->z_pflags |= VAR_6;
    FUNC_3(VAR_19, VAR_20,
        FUNC_4(VAR_10), ((void*)0), &VAR_15->z_pflags,
        sizeof (VAR_15->z_pflags));
   }

   VAR_15->z_projid = VAR_7->z_projid;
   FUNC_3(VAR_19, VAR_20, FUNC_6(VAR_10),
       ((void*)0), &VAR_15->z_projid, sizeof (VAR_15->z_projid));
  }

  FUNC_17(&VAR_7->z_lock);

  if (FUNC_15(VAR_20 > 0)) {
   VAR_21 = FUNC_18(VAR_15->z_sa_hdl, VAR_19, VAR_20, VAR_16);
   FUNC_11(VAR_16);
  } else {
   FUNC_9(VAR_16);
  }
  VAR_16 = ((void*)0);
  if (VAR_21 != 0 && VAR_21 != VAR_2)
   break;

next:
  if (VAR_9) {
   FUNC_14(VAR_9);
   VAR_9 = ((void*)0);
   FUNC_24(VAR_14);
  }
  FUNC_19(&VAR_12);
 }

 if (VAR_16)
  FUNC_9(VAR_16);
 if (VAR_9) {
  FUNC_14(VAR_9);
  FUNC_24(VAR_14);
 }
 FUNC_20(&VAR_12);

 return (VAR_21 == VAR_2 ? 0 : VAR_21);
}
