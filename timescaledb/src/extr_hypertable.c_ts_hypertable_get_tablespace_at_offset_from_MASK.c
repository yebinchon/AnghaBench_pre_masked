
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
typedef int int16 ;
struct TYPE_5__ {int num_tablespaces; TYPE_2__* tablespaces; } ;
typedef TYPE_1__ Tablespaces ;
struct TYPE_6__ {scalar_t__ tablespace_oid; } ;
typedef TYPE_2__ Tablespace ;
typedef scalar_t__ Oid ;


 TYPE_1__* FUNC_0 (int ) ;

Tablespace *
FUNC_1(int32 VAR_0, Oid VAR_1, int16 VAR_2)
{
 Tablespaces *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 0;

 if (((void*)0) == VAR_3 || VAR_3->num_tablespaces == 0)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_tablespaces; VAR_4++)
 {
  if (VAR_1 == VAR_3->tablespaces[VAR_4].tablespace_oid)
   return &VAR_3->tablespaces[(VAR_4 + VAR_2) % VAR_3->num_tablespaces];
 }

 return ((void*)0);
}
