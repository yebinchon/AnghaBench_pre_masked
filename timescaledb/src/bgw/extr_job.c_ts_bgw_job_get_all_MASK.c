
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t alloc_size; int * list; } ;
struct TYPE_4__ {int result_mctx; int scandirection; int lockmode; int tuple_found; TYPE_2__* data; int index; int table; } ;
typedef TYPE_1__ ScannerCtx ;
typedef int MemoryContext ;
typedef int List ;
typedef int Catalog ;
typedef TYPE_2__ AccumData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

extern List *
FUNC_3(size_t VAR_6, MemoryContext VAR_7)
{
 Catalog *VAR_8 = FUNC_1();
 AccumData VAR_9 = {
  .list = VAR_4,
  .alloc_size = VAR_6,
 };
 ScannerCtx VAR_10 = {
  .table = FUNC_0(VAR_8, VAR_1),
  .index = VAR_3,
  .data = &VAR_9,
  .tuple_found = VAR_5,
  .lockmode = VAR_0,
  .scandirection = VAR_2,
  .result_mctx = VAR_7,
 };

 FUNC_2(&VAR_10);
 return VAR_9.list;
}
