
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_lock; int z_sa_hdl; scalar_t__ z_is_sa; } ;
typedef TYPE_1__ znode_t ;
typedef int zfsvfs_t ;
typedef int uio_t ;
struct inode {int dummy; } ;
typedef int cred_t ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int * FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;

int
FUNC_10(struct inode *VAR_0, uio_t *VAR_1, cred_t *VAR_2)
{
 znode_t *VAR_3 = FUNC_0(VAR_0);
 zfsvfs_t *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 FUNC_3(VAR_4);
 FUNC_5(VAR_3);

 FUNC_6(&VAR_3->z_lock);
 if (VAR_3->z_is_sa)
  VAR_5 = FUNC_8(VAR_3->z_sa_hdl,
      FUNC_2(VAR_4), VAR_1);
 else
  VAR_5 = FUNC_9(VAR_3, VAR_1);
 FUNC_7(&VAR_3->z_lock);

 FUNC_4(VAR_4);
 return (VAR_5);
}
