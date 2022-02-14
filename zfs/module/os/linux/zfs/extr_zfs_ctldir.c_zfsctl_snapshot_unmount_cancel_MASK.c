
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int se_taskqid; } ;
typedef TYPE_1__ zfs_snapentry_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(zfs_snapentry_t *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2->se_taskqid) == 0) {
  VAR_2->se_taskqid = VAR_0;
  FUNC_1(VAR_2);
 }
}
