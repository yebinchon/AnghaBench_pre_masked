
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tgname; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_trigger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,int ,int,int *,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static bool
FUNC_10(Oid VAR_6, char *VAR_7)
{
 Relation VAR_8;
 ScanKeyData VAR_9[1];
 SysScanDesc VAR_10;
 HeapTuple VAR_11;
 bool VAR_12 = 0;

 VAR_8 = FUNC_5(VAR_4, VAR_0);
 FUNC_3(&VAR_9[0],
    VAR_1,
    VAR_2,
    VAR_3,
    FUNC_2(VAR_6));

 VAR_10 = FUNC_7(VAR_8, VAR_5, 1, ((void*)0), 1, VAR_9);

 while (FUNC_1(VAR_11 = FUNC_9(VAR_10)))
 {
  Form_pg_trigger VAR_13 = (Form_pg_trigger) FUNC_0(VAR_11);
  if (FUNC_6(&(VAR_13->tgname), VAR_7) == 0)
  {
   VAR_12 = 1;
   break;
  }
 }
 FUNC_8(VAR_10);
 FUNC_4(VAR_8, VAR_0);
 return VAR_12;
}
