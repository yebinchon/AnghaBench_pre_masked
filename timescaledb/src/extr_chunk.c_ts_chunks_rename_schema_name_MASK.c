
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nkeys; char* data; int scandirection; int lockmode; int tuple_found; int * scankey; int index; int table; } ;
typedef TYPE_1__ ScannerCtx ;
typedef int ScanKeyData ;
typedef int NameData ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_7 ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(char *VAR_8, char *VAR_9)
{
 NameData VAR_10;
 ScanKeyData VAR_11[1];
 Catalog *VAR_12 = FUNC_5();
 ScannerCtx VAR_13 = {
  .table = FUNC_3(VAR_12, VAR_2),
  .index = FUNC_2(VAR_12, VAR_2, VAR_3),
  .nkeys = 1,
  .scankey = VAR_11,
  .tuple_found = VAR_7,
  .data = VAR_9,
  .lockmode = VAR_6,
  .scandirection = VAR_5,
 };

 FUNC_4(&VAR_10, VAR_8);

 FUNC_1(&VAR_11[0],
    VAR_0,
    VAR_1,
    VAR_4,
    FUNC_0(&VAR_10));

 FUNC_6(&VAR_13);
}
