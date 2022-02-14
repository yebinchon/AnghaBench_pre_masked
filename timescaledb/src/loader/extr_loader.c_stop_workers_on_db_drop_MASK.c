
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int missing_ok; int dbname; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ DropdbStmt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(DropdbStmt *VAR_3)
{





 Oid VAR_4 = FUNC_2(VAR_3->dbname, VAR_3->missing_ok);

 if (VAR_4 != VAR_0)
 {
  FUNC_0(VAR_1,
    (FUNC_1("TimescaleDB background worker scheduler for database %u will be stopped",
      VAR_4)));
  FUNC_3(VAR_2, VAR_4);
 }
 return;
}
