
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int z_pflags; scalar_t__ z_size; int z_sync_cnt; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_10__ {scalar_t__ z_vscan; } ;
typedef TYPE_2__ zfsvfs_t ;
struct inode {int i_mode; } ;
typedef int cred_t ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct inode*,int *,int) ;

int
FUNC_10(struct inode *VAR_2, int VAR_3, cred_t *VAR_4)
{
 znode_t *VAR_5 = FUNC_0(VAR_2);
 zfsvfs_t *VAR_6 = FUNC_1(VAR_2);

 FUNC_4(VAR_6);
 FUNC_6(VAR_5);


 if (VAR_3 & VAR_0)
  FUNC_7(&VAR_5->z_sync_cnt);

 if (!FUNC_8(VAR_5) && VAR_6->z_vscan && FUNC_2(VAR_2->i_mode) &&
     !(VAR_5->z_pflags & VAR_1) && VAR_5->z_size > 0)
  FUNC_3(FUNC_9(VAR_2, VAR_4, 1) == 0);

 FUNC_5(VAR_6);
 return (0);
}
