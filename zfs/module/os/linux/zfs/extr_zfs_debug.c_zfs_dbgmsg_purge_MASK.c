
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zdm_size; } ;
typedef TYPE_1__ zfs_dbgmsg_t ;
struct TYPE_6__ {int pl_list; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(int VAR_2)
{
 while (VAR_0 > VAR_2) {
  zfs_dbgmsg_t *VAR_3 = FUNC_1(&VAR_1.pl_list);
  if (VAR_3 == ((void*)0))
   return;

  int VAR_4 = VAR_3->zdm_size;
  FUNC_0(VAR_3, VAR_4);
  VAR_0 -= VAR_4;
 }
}
