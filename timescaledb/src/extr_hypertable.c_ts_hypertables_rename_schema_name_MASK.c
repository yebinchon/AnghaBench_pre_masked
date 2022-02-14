
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* data; int scandirection; int lockmode; int tuple_found; int index; int table; } ;
typedef TYPE_1__ ScannerCtx ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int * FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(const char *VAR_5, const char *VAR_6)
{
 const char *VAR_7[2] = { VAR_5, VAR_6 };
 Catalog *VAR_8 = FUNC_1();

 ScannerCtx VAR_9 = {
  .table = FUNC_0(VAR_8, VAR_1),
  .index = VAR_2,
  .tuple_found = VAR_4,
  .data = (void *) VAR_7,
  .lockmode = VAR_3,
  .scandirection = VAR_0,
 };

 FUNC_2(&VAR_9);
}
