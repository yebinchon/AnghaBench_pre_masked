
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt; } ;
struct file {int va_nblocks; int va_rdev; int va_ctime; int va_mtime; int va_atime; int va_blksize; int va_size; int va_nlink; int va_nodeid; scalar_t__ va_fsid; int va_gid; int va_uid; int va_mode; int va_type; int f_dentry; TYPE_1__ f_path; struct file* v_file; } ;
typedef struct file vnode_t ;
typedef struct file vattr_t ;
struct kstat {int blocks; int rdev; int ctime; int mtime; int atime; int blksize; int size; int nlink; int ino; int gid; int uid; int mode; } ;


 int FUNC_0 (struct file*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,struct kstat*,...) ;
 int FUNC_4 (int ) ;

int
FUNC_5(vnode_t *VAR_2, vattr_t *VAR_3, int VAR_4, void *VAR_5, void *VAR_6)
{
 struct file *VAR_7;
 struct kstat VAR_8;
 int VAR_9;

 FUNC_0(VAR_2);
 FUNC_0(VAR_2->v_file);
 FUNC_0(VAR_3);

 VAR_7 = VAR_2->v_file;







 VAR_9 = FUNC_3(VAR_7->f_path.mnt, VAR_7->f_dentry, &VAR_8);

 if (VAR_9)
  return (-VAR_9);

 VAR_3->va_type = FUNC_4(VAR_8.mode);
 VAR_3->va_mode = VAR_8.mode;
 VAR_3->va_uid = FUNC_2(VAR_8.uid);
 VAR_3->va_gid = FUNC_1(VAR_8.gid);
 VAR_3->va_fsid = 0;
 VAR_3->va_nodeid = VAR_8.ino;
 VAR_3->va_nlink = VAR_8.nlink;
 VAR_3->va_size = VAR_8.size;
 VAR_3->va_blksize = VAR_8.blksize;
 VAR_3->va_atime = VAR_8.atime;
 VAR_3->va_mtime = VAR_8.mtime;
 VAR_3->va_ctime = VAR_8.ctime;
 VAR_3->va_rdev = VAR_8.rdev;
 VAR_3->va_nblocks = VAR_8.blocks;

 return (0);
}
