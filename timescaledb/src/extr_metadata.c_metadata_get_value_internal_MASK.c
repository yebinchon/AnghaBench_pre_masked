
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int isnull; int value; int typeid; } ;
struct TYPE_4__ {int nkeys; int scandirection; int lockmode; TYPE_2__* data; int tuple_found; int * scankey; int index; int table; } ;
typedef TYPE_1__ ScannerCtx ;
typedef int ScanKeyData ;
typedef int Oid ;
typedef int LOCKMODE ;
typedef TYPE_2__ DatumValue ;
typedef int Datum ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int * FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static Datum
FUNC_6(Datum VAR_7, Oid VAR_8, Oid VAR_9, bool *VAR_10,
       LOCKMODE VAR_11)
{
 ScanKeyData VAR_12[1];
 DatumValue VAR_13 = {
  .typeid = VAR_9,
  .isnull = 1,
 };
 Catalog *VAR_14 = FUNC_4();
 ScannerCtx VAR_15 = {
  .table = FUNC_2(VAR_14, VAR_4),
  .index = FUNC_1(VAR_14, VAR_4, VAR_5),
  .nkeys = 1,
  .scankey = VAR_12,
  .tuple_found = VAR_6,
  .data = &VAR_13,
  .lockmode = VAR_11,
  .scandirection = VAR_3,
 };

 FUNC_0(&VAR_12[0],
    VAR_0,
    VAR_1,
    VAR_2,
    FUNC_3(VAR_7, VAR_8));

 FUNC_5(&VAR_15);

 if (((void*)0) != VAR_10)
  *VAR_10 = VAR_13.isnull;

 return VAR_13.value;
}
