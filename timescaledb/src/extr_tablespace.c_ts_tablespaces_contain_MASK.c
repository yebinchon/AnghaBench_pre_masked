
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_tablespaces; TYPE_1__* tablespaces; } ;
typedef TYPE_2__ Tablespaces ;
struct TYPE_4__ {scalar_t__ tablespace_oid; } ;
typedef scalar_t__ Oid ;



bool
FUNC_0(Tablespaces *VAR_0, Oid VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_tablespaces; VAR_2++)
  if (VAR_1 == VAR_0->tablespaces[VAR_2].tablespace_oid)
   return 1;

 return 0;
}
