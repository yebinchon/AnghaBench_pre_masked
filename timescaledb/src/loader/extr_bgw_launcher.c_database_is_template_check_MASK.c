
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ datistemplate; } ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_database ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 Form_pg_database VAR_3;
 HeapTuple VAR_4;

 VAR_4 = FUNC_4(VAR_0, FUNC_2(VAR_2));
 if (!FUNC_1(VAR_4))
  FUNC_5(VAR_1,
    (FUNC_6("TimescaleDB background worker failed to find entry for database in "
      "syscache")));

 VAR_3 = (Form_pg_database) FUNC_0(VAR_4);
 if (VAR_3->datistemplate)
  FUNC_5(VAR_1,
    (FUNC_6("TimescaleDB background worker connected to template database, exiting")));

 FUNC_3(VAR_4);
}
