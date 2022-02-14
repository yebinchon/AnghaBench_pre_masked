
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ datistemplate; int datallowconn; } ;
typedef int Relation ;
typedef int HeapTuple ;
typedef int HeapScanDesc ;
typedef int HTAB ;
typedef TYPE_1__* Form_pg_database ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void
FUNC_12(HTAB *VAR_3)
{
 Relation VAR_4;
 HeapScanDesc VAR_5;
 HeapTuple VAR_6;





 FUNC_5();
 (void) FUNC_2();

 VAR_4 = FUNC_11(VAR_1, VAR_0);
 VAR_5 = FUNC_7(VAR_4, 0, ((void*)0));

 while (FUNC_4(VAR_6 = FUNC_10(VAR_5, VAR_2)))
 {
  Form_pg_database VAR_7 = (Form_pg_database) FUNC_1(VAR_6);

  if (!VAR_7->datallowconn || VAR_7->datistemplate)
   continue;


  FUNC_6(VAR_3, FUNC_3(VAR_6));
 }
 FUNC_9(VAR_5);
 FUNC_8(VAR_4, VAR_0);

 FUNC_0();
}
