
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ht_oids; int table_name; int schema_name; } ;
typedef int Name ;
typedef int MemoryContext ;
typedef int List ;
typedef int Catalog ;
typedef TYPE_1__ AccumHypertable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_1__*,int,int ,int,int ) ;
 int VAR_4 ;
 int * FUNC_2 () ;

List *
FUNC_3(Name VAR_5, Name VAR_6, MemoryContext VAR_7)
{
 Catalog *VAR_8 = FUNC_2();
 AccumHypertable VAR_9 = {
  .ht_oids = VAR_3,
  .schema_name = VAR_5,
  .table_name = VAR_6,
 };

 FUNC_1(((void*)0),
           0,
           FUNC_0(VAR_8, VAR_1, VAR_2),
           VAR_4,
           &VAR_9,
           -1,
           VAR_0,
           0,
           VAR_7);

 return VAR_9.ht_oids;
}
