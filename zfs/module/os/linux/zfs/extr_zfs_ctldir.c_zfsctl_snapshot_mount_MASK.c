
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* z_os; struct TYPE_11__* z_parent; TYPE_1__* z_vfs; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int zfs_snapentry_t ;
struct path {TYPE_2__* mnt; struct dentry* dentry; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_12__ {int os_spa; } ;
struct TYPE_10__ {int mnt_flags; } ;
struct TYPE_9__ {char* vfs_mntpoint; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_4 (char*,char**,char**,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 char* FUNC_6 (struct dentry*) ;
 int FUNC_7 (char*,char*,char*) ;
 scalar_t__ FUNC_8 (struct path*) ;
 int FUNC_9 (char*,int ) ;
 char* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct path*) ;
 int FUNC_12 (struct path*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int ,char*,char*,char*) ;
 int FUNC_16 (char*,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (char*,char*,int ,int ,struct dentry*) ;
 scalar_t__ FUNC_19 (char*) ;
 int FUNC_20 (TYPE_3__*,char*,int ,char*) ;
 int FUNC_21 (int *,int ) ;

int
FUNC_22(struct path *VAR_10, int VAR_11)
{
 struct dentry *VAR_12 = VAR_10->dentry;
 struct inode *VAR_13 = VAR_12->d_inode;
 zfsvfs_t *VAR_14;
 zfsvfs_t *VAR_15;
 zfs_snapentry_t *VAR_16;
 char *VAR_17, *VAR_18;
 char *VAR_19[] = { "/usr/bin/env", "mount", "-t", "zfs", "-n", ((void*)0), ((void*)0),
     ((void*)0) };
 char *VAR_20[] = { ((void*)0) };
 int VAR_21;
 struct path VAR_22;

 if (VAR_13 == ((void*)0))
  return (FUNC_1(VAR_0));

 VAR_14 = FUNC_0(VAR_13);
 FUNC_2(VAR_14);

 VAR_17 = FUNC_10(VAR_7, VAR_1);
 VAR_18 = FUNC_10(VAR_2, VAR_1);

 VAR_21 = FUNC_20(VAR_14, FUNC_6(VAR_12),
     VAR_7, VAR_17);
 if (VAR_21)
  goto error;






 FUNC_15(VAR_18, VAR_2, "%s/.zfs/snapshot/%s",
     VAR_14->z_vfs->vfs_mntpoint ? VAR_14->z_vfs->vfs_mntpoint : "",
     FUNC_6(VAR_12));





 if (FUNC_19(VAR_17)) {
  VAR_21 = 0;
  goto error;
 }
 FUNC_7("mount; name=%s path=%s\n", VAR_17, VAR_18);
 VAR_19[5] = VAR_17;
 VAR_19[6] = VAR_18;
 VAR_21 = FUNC_4(VAR_19[0], VAR_19, VAR_20, VAR_6);
 if (VAR_21) {
  if (!(VAR_21 & VAR_4 << 8)) {
   FUNC_16("Unable to automount %s error=%d",
       VAR_18, VAR_21);
   VAR_21 = FUNC_1(VAR_0);
  } else {
   VAR_21 = 0;
  }
  goto error;
 }





 VAR_22 = *VAR_10;
 FUNC_11(&VAR_22);
 if (FUNC_8(&VAR_22)) {
  VAR_15 = FUNC_0(VAR_22.dentry->d_inode);
  VAR_15->z_parent = VAR_14;
  VAR_12 = VAR_22.dentry;
  VAR_22.mnt->mnt_flags |= VAR_3;

  FUNC_13(&VAR_9, VAR_5);
  VAR_16 = FUNC_18(VAR_17, VAR_18,
      VAR_15->z_os->os_spa, FUNC_5(VAR_15->z_os),
      VAR_12);
  FUNC_17(VAR_16);
  FUNC_21(VAR_16, VAR_8);
  FUNC_14(&VAR_9);
 }
 FUNC_12(&VAR_22);
error:
 FUNC_9(VAR_17, VAR_7);
 FUNC_9(VAR_18, VAR_2);

 FUNC_3(VAR_14);

 return (VAR_21);
}
