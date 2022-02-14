
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int znode_t ;
typedef int zilog_t ;
struct TYPE_7__ {TYPE_1__* z_os; int * z_log; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int vsecattr_t ;
struct inode {int dummy; } ;
typedef int cred_t ;
typedef int boolean_t ;
struct TYPE_6__ {scalar_t__ os_sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int *,int ) ;

int
FUNC_7(struct inode *VAR_4, vsecattr_t *VAR_5, int VAR_6, cred_t *VAR_7)
{
 znode_t *VAR_8 = FUNC_0(VAR_4);
 zfsvfs_t *VAR_9 = FUNC_1(VAR_4);
 int VAR_10;
 boolean_t VAR_11 = (VAR_6 & VAR_0) ? VAR_2 : VAR_1;
 zilog_t *VAR_12 = VAR_9->z_log;

 FUNC_2(VAR_9);
 FUNC_4(VAR_8);

 VAR_10 = FUNC_5(VAR_8, VAR_5, VAR_11, VAR_7);

 if (VAR_9->z_os->os_sync == VAR_3)
  FUNC_6(VAR_12, 0);

 FUNC_3(VAR_9);
 return (VAR_10);
}
