
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ schema_id; int owner_uid; int database_name; int database_id; } ;
typedef TYPE_1__ CatalogDatabaseInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(CatalogDatabaseInfo *VAR_5)
{
 VAR_5->database_id = VAR_3;
 FUNC_0(VAR_5->database_name, FUNC_3(VAR_3), VAR_4);
 VAR_5->schema_id = FUNC_4(VAR_0, 0);
 VAR_5->owner_uid = FUNC_1();

 if (VAR_5->schema_id == VAR_2)
  FUNC_2(VAR_1, "OID lookup failed for schema \"%s\"", VAR_0);
}
