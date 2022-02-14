
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ z_id; scalar_t__ z_blksz; int z_lock; int z_sa_hdl; } ;
typedef TYPE_3__ znode_t ;
struct TYPE_14__ {scalar_t__ z_root; int z_os; scalar_t__ z_issnap; int z_max_blksz; } ;
typedef TYPE_4__ zfsvfs_t ;
typedef int uint32_t ;
typedef int u_longlong_t ;
struct kstat {scalar_t__ nlink; scalar_t__ ino; int blksize; int blocks; } ;
struct inode {TYPE_2__* i_sb; } ;
struct TYPE_12__ {TYPE_1__* s_root; } ;
struct TYPE_11__ {struct inode* d_inode; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,struct kstat*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,int *) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;

int
FUNC_12(struct inode *VAR_2, struct kstat *VAR_3)
{
 znode_t *VAR_4 = FUNC_0(VAR_2);
 zfsvfs_t *VAR_5 = FUNC_1(VAR_2);
 uint32_t VAR_6;
 u_longlong_t VAR_7;

 FUNC_2(VAR_5);
 FUNC_4(VAR_4);

 FUNC_7(&VAR_4->z_lock);

 FUNC_6(VAR_2, VAR_3);



 if ((VAR_4->z_id == VAR_5->z_root) && FUNC_11(VAR_4))
  if (VAR_3->nlink < VAR_1)
   VAR_3->nlink++;

 FUNC_9(VAR_4->z_sa_hdl, &VAR_6, &VAR_7);
 VAR_3->blksize = VAR_6;
 VAR_3->blocks = VAR_7;

 if (FUNC_10(VAR_4->z_blksz == 0)) {



  VAR_3->blksize = VAR_5->z_max_blksz;
 }

 FUNC_8(&VAR_4->z_lock);





 if (VAR_5->z_issnap) {
  if (VAR_2->i_sb->s_root->d_inode == VAR_2)
   VAR_3->ino = VAR_0 -
       FUNC_5(VAR_5->z_os);
 }

 FUNC_3(VAR_5);

 return (0);
}
