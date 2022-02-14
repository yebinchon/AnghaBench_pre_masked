
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ se_spa; scalar_t__ se_objsetid; } ;
typedef TYPE_1__ zfs_snapentry_t ;
typedef scalar_t__ ulong_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const zfs_snapentry_t *VAR_2 = VAR_0;
 const zfs_snapentry_t *VAR_3 = VAR_1;

 if (VAR_2->se_spa != VAR_3->se_spa)
  return ((ulong_t)VAR_2->se_spa < (ulong_t)VAR_3->se_spa ? -1 : 1);

 if (VAR_2->se_objsetid < VAR_3->se_objsetid)
  return (-1);
 else if (VAR_2->se_objsetid > VAR_3->se_objsetid)
  return (1);
 else
  return (0);
}
