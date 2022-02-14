
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int z_pflags; scalar_t__ z_unlinked; int z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_14__ {int z_root; struct inode* z_ctldir; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_15__ {scalar_t__* zf_gen; scalar_t__* zf_object; } ;
typedef TYPE_3__ zfid_short_t ;
struct TYPE_16__ {scalar_t__* zf_setgen; scalar_t__* zf_setid; } ;
typedef TYPE_4__ zfid_long_t ;
typedef int uint64_t ;
struct super_block {TYPE_2__* s_fs_info; } ;
struct inode {int dummy; } ;
struct TYPE_17__ {scalar_t__ fid_len; } ;
typedef TYPE_5__ fid_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_7 ;
 struct inode* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,int,int,...) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int VAR_8 ;
 int FUNC_11 (int ,int ,int*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,int,TYPE_1__**) ;
 scalar_t__ FUNC_14 (struct inode*,char*,struct inode**,int ,int ,int *,int *) ;
 int FUNC_15 (struct super_block*,int,int,struct inode**) ;

int
FUNC_16(struct super_block *VAR_9, struct inode **VAR_10, fid_t *VAR_11)
{
 zfsvfs_t *VAR_12 = VAR_9->s_fs_info;
 znode_t *VAR_13;
 uint64_t VAR_14 = 0;
 uint64_t VAR_15 = 0;
 uint64_t VAR_16;
 uint64_t VAR_17;
 int VAR_18, VAR_19;

 *VAR_10 = ((void*)0);

 if (VAR_11->fid_len == VAR_3 || VAR_11->fid_len == VAR_2) {
  zfid_short_t *VAR_20 = (zfid_short_t *)VAR_11;

  for (VAR_18 = 0; VAR_18 < sizeof (VAR_20->zf_object); VAR_18++)
   VAR_14 |= ((uint64_t)VAR_20->zf_object[VAR_18]) << (8 * VAR_18);

  for (VAR_18 = 0; VAR_18 < sizeof (VAR_20->zf_gen); VAR_18++)
   VAR_15 |= ((uint64_t)VAR_20->zf_gen[VAR_18]) << (8 * VAR_18);
 } else {
  return (FUNC_3(VAR_0));
 }


 if (VAR_11->fid_len == VAR_2) {
  zfid_long_t *VAR_21 = (zfid_long_t *)VAR_11;
  uint64_t VAR_22 = 0;
  uint64_t VAR_23 = 0;

  for (VAR_18 = 0; VAR_18 < sizeof (VAR_21->zf_setid); VAR_18++)
   VAR_22 |= ((uint64_t)VAR_21->zf_setid[VAR_18]) << (8 * VAR_18);

  for (VAR_18 = 0; VAR_18 < sizeof (VAR_21->zf_setgen); VAR_18++)
   VAR_23 |= ((uint64_t)VAR_21->zf_setgen[VAR_18]) << (8 * VAR_18);

  if (VAR_22 != VAR_6 - VAR_14) {
   FUNC_8("snapdir fid: objsetid (%llu) != "
       "ZFSCTL_INO_SNAPDIRS (%llu) - object (%llu)\n",
       VAR_22, VAR_6, VAR_14);

   return (FUNC_3(VAR_0));
  }

  if (VAR_15 > 1 || VAR_23 != 0) {
   FUNC_8("snapdir fid: fid_gen (%llu) and setgen "
       "(%llu)\n", VAR_15, VAR_23);
   return (FUNC_3(VAR_0));
  }

  return (FUNC_15(VAR_9, VAR_22, VAR_15, VAR_10));
 }

 FUNC_5(VAR_12);

 if (VAR_15 == 0 &&
     (VAR_14 == VAR_4 || VAR_14 == VAR_5)) {
  *VAR_10 = VAR_12->z_ctldir;
  FUNC_0(*VAR_10 != ((void*)0));
  if (VAR_14 == VAR_5) {
   FUNC_4(FUNC_14(*VAR_10, "snapshot", VAR_10,
       0, VAR_8, ((void*)0), ((void*)0)) == 0);
  } else {
   FUNC_9(*VAR_10);
  }
  FUNC_6(VAR_12);
  return (0);
 }

 VAR_16 = -1ULL >> (64 - 8 * VAR_18);

 FUNC_8("getting %llu [%llu mask %llx]\n", VAR_14, VAR_15, VAR_16);
 if ((VAR_19 = FUNC_13(VAR_12, VAR_14, &VAR_13))) {
  FUNC_6(VAR_12);
  return (VAR_19);
 }


 if (VAR_13->z_pflags & VAR_7) {
  FUNC_10(FUNC_7(VAR_13));
  FUNC_6(VAR_12);
  return (FUNC_3(VAR_1));
 }

 (void) FUNC_11(VAR_13->z_sa_hdl, FUNC_2(VAR_12), &VAR_17,
     sizeof (uint64_t));
 VAR_17 = VAR_17 & VAR_16;
 if (VAR_17 == 0)
  VAR_17 = 1;
 if ((VAR_15 == 0) && (VAR_12->z_root == VAR_14))
  VAR_15 = VAR_17;
 if (VAR_13->z_unlinked || VAR_17 != VAR_15) {
  FUNC_8("znode gen (%llu) != fid gen (%llu)\n", VAR_17,
      VAR_15);
  FUNC_10(FUNC_7(VAR_13));
  FUNC_6(VAR_12);
  return (FUNC_3(VAR_1));
 }

 *VAR_10 = FUNC_7(VAR_13);
 if (*VAR_10)
  FUNC_12(FUNC_1(*VAR_10));

 FUNC_6(VAR_12);
 return (0);
}
