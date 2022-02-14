
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tuple_found_func ;
struct TYPE_3__ {int nkeys; int limit; void* data; int result_mctx; int scandirection; int lockmode; int tuple_found; int * scankey; int index; int table; } ;
typedef TYPE_1__ ScannerCtx ;
typedef int ScanKeyData ;
typedef int MemoryContext ;
typedef int LOCKMODE ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(ScanKeyData *VAR_2, int VAR_3, tuple_found_func VAR_4, void *VAR_5,
      int VAR_6, int VAR_7, LOCKMODE VAR_8, MemoryContext VAR_9)
{
 Catalog *VAR_10 = FUNC_2();
 ScannerCtx VAR_11 = {
  .table = FUNC_1(VAR_10, VAR_0),
  .index = FUNC_0(VAR_10, VAR_0, VAR_7),
  .nkeys = VAR_3,
  .limit = VAR_6,
  .scankey = VAR_2,
  .data = VAR_5,
  .tuple_found = VAR_4,
  .lockmode = VAR_8,
  .scandirection = VAR_1,
  .result_mctx = VAR_9,
 };

 return FUNC_3(&VAR_11);
}
