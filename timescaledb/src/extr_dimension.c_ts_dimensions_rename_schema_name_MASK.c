
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nkeys; char** data; int scandirection; int lockmode; int tuple_found; int * scankey; int index; int table; } ;
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
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_8 ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(char *VAR_9, char *VAR_10)
{
 NameData VAR_11;
 ScanKeyData VAR_12[1];
 Catalog *VAR_13 = FUNC_4();
 char *VAR_14[2] = { VAR_9, VAR_10 };

 ScannerCtx VAR_15 = {
  .table = FUNC_2(VAR_13, VAR_3),
  .index = VAR_6,
  .nkeys = 1,
  .scankey = VAR_12,
  .tuple_found = VAR_8,
  .data = VAR_14,
  .lockmode = VAR_7,
  .scandirection = VAR_5,
 };

 FUNC_3(&VAR_11, VAR_9);

 FUNC_1(&VAR_12[0],
    VAR_1,
    VAR_2,
    VAR_4,
    FUNC_0(&VAR_11));

 FUNC_5(&VAR_15);

 FUNC_1(&VAR_12[0],
    VAR_0,
    VAR_2,
    VAR_4,
    FUNC_0(&VAR_11));

 FUNC_5(&VAR_15);
}
