
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tuple_found_func ;
typedef int tuple_filter_func ;
struct TYPE_3__ {int nkeys; void* data; int scandirection; int lockmode; int filter; int tuple_found; int * scankey; int index; int table; } ;
typedef TYPE_1__ ScannerCtx ;
typedef int ScanKeyData ;
typedef int LOCKMODE ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int,char*) ;

__attribute__((used)) static bool
FUNC_4(int VAR_2, ScanKeyData VAR_3[], int VAR_4, tuple_found_func VAR_5,
       tuple_filter_func VAR_6, void *VAR_7, LOCKMODE VAR_8)
{
 Catalog *VAR_9 = FUNC_2();
 ScannerCtx VAR_10 = {
  .table = FUNC_1(VAR_9, VAR_0),
  .index = FUNC_0(VAR_9, VAR_0, VAR_2),
  .nkeys = VAR_4,
  .scankey = VAR_3,
  .tuple_found = VAR_5,
  .filter = VAR_6,
  .data = VAR_7,
  .lockmode = VAR_8,
  .scandirection = VAR_1,
 };

 return FUNC_3(&VAR_10, 0, "bgw job stat");
}
