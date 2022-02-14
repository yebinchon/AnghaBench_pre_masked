
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int z_pflags; scalar_t__ z_projid; } ;
typedef TYPE_3__ znode_t ;
struct TYPE_13__ {int z_os; int z_max_blksz; } ;
typedef TYPE_4__ zfsvfs_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_11__ {int* val; } ;
struct kstatfs {int f_blocks; int f_bfree; int f_bavail; int f_ffree; int f_files; int f_spare; scalar_t__ f_namelen; int f_type; TYPE_2__ f_fsid; int f_bsize; int f_frsize; } ;
struct dentry {int d_inode; TYPE_1__* d_sb; } ;
struct TYPE_10__ {TYPE_4__* s_fs_info; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int*,int*,int*,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_4__*,TYPE_3__*,struct kstatfs*,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

int
FUNC_13(struct dentry *VAR_4, struct kstatfs *VAR_5)
{
 zfsvfs_t *VAR_6 = VAR_4->d_sb->s_fs_info;
 uint64_t VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;

 FUNC_3(VAR_6);

 FUNC_9(VAR_6->z_os,
     &VAR_7, &VAR_8, &VAR_9, &VAR_10);

 uint64_t VAR_12 = FUNC_6(VAR_6->z_os);
 VAR_5->f_frsize = VAR_6->z_max_blksz;
 VAR_5->f_bsize = VAR_6->z_max_blksz;
 uint32_t VAR_13 = FUNC_10(VAR_5->f_bsize) - 1;
 VAR_7 = FUNC_2(VAR_7, VAR_5->f_bsize);
 VAR_5->f_blocks = (VAR_7 + VAR_8) >> VAR_13;
 VAR_5->f_bfree = VAR_8 >> VAR_13;
 VAR_5->f_bavail = VAR_5->f_bfree;
 VAR_5->f_ffree = FUNC_1(VAR_10, VAR_8 >> VAR_0);
 VAR_5->f_files = VAR_5->f_ffree + VAR_9;
 VAR_5->f_fsid.val[0] = (uint32_t)VAR_12;
 VAR_5->f_fsid.val[1] = (uint32_t)(VAR_12 >> 32);
 VAR_5->f_type = VAR_3;
 VAR_5->f_namelen = VAR_1 - 1;





 FUNC_5(VAR_5->f_spare, sizeof (VAR_5->f_spare));

 if (FUNC_7(VAR_6->z_os) &&
     FUNC_8(VAR_6->z_os)) {
  znode_t *VAR_14 = FUNC_0(VAR_4->d_inode);

  if (VAR_14->z_pflags & VAR_2 && VAR_14->z_projid &&
      FUNC_12(VAR_14->z_projid))
   VAR_11 = FUNC_11(VAR_6, VAR_14, VAR_5, VAR_13);
 }

 FUNC_4(VAR_6);
 return (VAR_11);
}
