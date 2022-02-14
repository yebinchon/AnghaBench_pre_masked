
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int z_id; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_11__ {int z_log; TYPE_1__* z_os; } ;
typedef TYPE_3__ zfsvfs_t ;
struct inode {int dummy; } ;
typedef int cred_t ;
struct TYPE_9__ {scalar_t__ os_sync; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(struct inode *VAR_3, int VAR_4, cred_t *VAR_5)
{
 znode_t *VAR_6 = FUNC_0(VAR_3);
 zfsvfs_t *VAR_7 = FUNC_1(VAR_3);

 (void) FUNC_5(VAR_2, (void *)VAR_1);

 if (VAR_7->z_os->os_sync != VAR_0) {
  FUNC_2(VAR_7);
  FUNC_4(VAR_6);
  FUNC_6(VAR_7->z_log, VAR_6->z_id);
  FUNC_3(VAR_7);
 }
 FUNC_5(VAR_2, ((void*)0));

 return (0);
}
