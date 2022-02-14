
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typname; int typnamespace; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,char*,int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;

void
FUNC_9(Oid VAR_2, StringInfo VAR_3)
{
 Form_pg_type VAR_4;
 HeapTuple VAR_5 = FUNC_5(VAR_1, FUNC_3(VAR_2));
 char *VAR_6;
 if (!FUNC_1(VAR_5))
  FUNC_6(VAR_0, "cache lookup failed for type %u", VAR_2);

 VAR_4 = (Form_pg_type) FUNC_0(VAR_5);

 VAR_6 = FUNC_7(VAR_4->typnamespace);

 FUNC_8(VAR_3, VAR_6);
 FUNC_8(VAR_3, FUNC_2(VAR_4->typname));

 FUNC_4(VAR_5);
}
