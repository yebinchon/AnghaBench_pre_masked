
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relrowsecurity; int relforcerowsecurity; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;

bool
FUNC_6(Oid VAR_2)
{
 HeapTuple VAR_3;
 Form_pg_class VAR_4;
 bool VAR_5;
 bool VAR_6;


 VAR_3 = FUNC_4(VAR_1, FUNC_2(VAR_2));
 if (!FUNC_1(VAR_3))
  FUNC_5(VAR_0, "cache lookup failed for relid %d", VAR_2);
 VAR_4 = (Form_pg_class) FUNC_0(VAR_3);
 VAR_5 = VAR_4->relrowsecurity;
 VAR_6 = VAR_4->relforcerowsecurity;
 FUNC_3(VAR_3);
 return (VAR_5 || VAR_6);
}
