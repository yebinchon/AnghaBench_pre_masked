
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int nkeys; int scandirection; int lockmode; int * data; int tuple_found; int * scankey; int index; int table; } ;
typedef TYPE_1__ ScannerCtx ;
typedef int ScanKeyData ;
typedef int Oid ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_8 ;
 int * FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

Oid
FUNC_6(int32 VAR_9)
{
 Catalog *VAR_10 = FUNC_4();
 Oid VAR_11 = VAR_7;
 ScanKeyData VAR_12[1];
 ScannerCtx VAR_13 = {
  .table = FUNC_3(VAR_10, VAR_5),
  .index = FUNC_2(VAR_10, VAR_5, VAR_6),
  .nkeys = 1,
  .scankey = VAR_12,
  .tuple_found = VAR_8,
  .data = &VAR_11,
  .lockmode = VAR_0,
  .scandirection = VAR_4,
 };


 FUNC_1(&VAR_12[0],
    VAR_1,
    VAR_2,
    VAR_3,
    FUNC_0(VAR_9));

 FUNC_5(&VAR_13);

 return VAR_11;
}
