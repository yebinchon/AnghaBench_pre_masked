
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ z_relatime; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int uio_seg_t ;
struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
struct file {unsigned int f_flags; TYPE_1__* f_mapping; } ;
typedef int ssize_t ;
typedef int cred_t ;
struct TYPE_4__ {struct inode* host; } ;


 int * FUNC_0 () ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct file*) ;
 unsigned int FUNC_7 (struct kiocb*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct iovec const*,size_t,unsigned long,int *,int ,unsigned int,int *,size_t) ;

__attribute__((used)) static ssize_t
FUNC_10(struct kiocb *VAR_0, const struct iovec *VAR_1,
    unsigned long VAR_2, size_t VAR_3, uio_seg_t VAR_4, size_t VAR_5)
{
 cred_t *VAR_6 = FUNC_0();
 struct file *VAR_7 = VAR_0->ki_filp;
 struct inode *VAR_8 = VAR_7->f_mapping->host;
 zfsvfs_t *VAR_9 = FUNC_3(FUNC_2(VAR_8));
 ssize_t VAR_10;
 unsigned int VAR_11 = VAR_7->f_flags;

 VAR_11 |= FUNC_7(VAR_0);
 FUNC_5(VAR_6);
 VAR_10 = FUNC_9(VAR_7->f_mapping->host, VAR_1, VAR_3,
     VAR_2, &VAR_0->ki_pos, VAR_4, VAR_11, VAR_6, VAR_5);
 FUNC_4(VAR_6);
 if (!FUNC_1(VAR_8) && VAR_9->z_relatime) {
  if (FUNC_8(VAR_8))
   FUNC_6(VAR_7);
 } else {
  FUNC_6(VAR_7);
 }

 return (VAR_10);
}
