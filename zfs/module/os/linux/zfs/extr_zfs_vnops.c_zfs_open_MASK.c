
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct inode*,int *,int ) ;

int
FUNC_10(struct inode *VAR_7, int VAR_8, int VAR_9, cred_t *VAR_10)
{
 znode_t *VAR_11 = FUNC_0(VAR_7);
 zfsvfs_t *VAR_12 = FUNC_1(VAR_7);

 FUNC_4(VAR_12);
 FUNC_6(VAR_11);


 if ((VAR_8 & VAR_2) && (VAR_11->z_pflags & VAR_5) &&
     ((VAR_9 & VAR_3) == 0)) {
  FUNC_5(VAR_12);
  return (FUNC_2(VAR_1));
 }


 if (!FUNC_8(VAR_11) && VAR_12->z_vscan && FUNC_3(VAR_7->i_mode) &&
     !(VAR_11->z_pflags & VAR_6) && VAR_11->z_size > 0) {
  if (FUNC_9(VAR_7, VAR_10, 0) != 0) {
   FUNC_5(VAR_12);
   return (FUNC_2(VAR_0));
  }
 }


 if (VAR_9 & VAR_4)
  FUNC_7(&VAR_11->z_sync_cnt);

 FUNC_5(VAR_12);
 return (0);
}
