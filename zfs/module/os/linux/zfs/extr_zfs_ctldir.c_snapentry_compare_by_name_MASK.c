
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int se_name; } ;
typedef TYPE_1__ zfs_snapentry_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const zfs_snapentry_t *VAR_2 = VAR_0;
 const zfs_snapentry_t *VAR_3 = VAR_1;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->se_name, VAR_3->se_name);

 if (VAR_4 < 0)
  return (-1);
 else if (VAR_4 > 0)
  return (1);
 else
  return (0);
}
