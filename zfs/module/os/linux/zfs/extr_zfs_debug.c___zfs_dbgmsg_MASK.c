
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zdm_size; int zdm_msg; int zdm_timestamp; } ;
typedef TYPE_1__ zfs_dbgmsg_t ;
struct TYPE_7__ {int pl_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

void
FUNC_9(char *VAR_4)
{
 int VAR_5 = sizeof (zfs_dbgmsg_t) + FUNC_7(VAR_4);
 zfs_dbgmsg_t *VAR_6 = FUNC_2(VAR_5, VAR_0);
 VAR_6->zdm_size = VAR_5;
 VAR_6->zdm_timestamp = FUNC_1();
 FUNC_6(VAR_6->zdm_msg, VAR_4);

 FUNC_3(&VAR_3.pl_lock);
 FUNC_5(&VAR_3, VAR_6);
 VAR_2 += VAR_5;
 FUNC_8(FUNC_0(VAR_1, 0));
 FUNC_4(&VAR_3.pl_lock);
}
