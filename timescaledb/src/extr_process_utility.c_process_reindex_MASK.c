
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int id; } ;
struct TYPE_14__ {TYPE_1__ fd; } ;
struct TYPE_13__ {scalar_t__ parsetree; } ;
struct TYPE_12__ {int kind; int * relation; } ;
typedef TYPE_2__ ReindexStmt ;
typedef TYPE_3__ ProcessUtilityArgs ;
typedef int Oid ;
typedef TYPE_4__ Hypertable ;
typedef int Cache ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;


 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_4__*,int ,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;
 TYPE_4__* FUNC_11 (int *,int ) ;
 int * FUNC_12 () ;
 int FUNC_13 (int ) ;

__attribute__((used)) static bool
FUNC_14(ProcessUtilityArgs *VAR_4)
{
 ReindexStmt *VAR_5 = (ReindexStmt *) VAR_4->parsetree;
 Oid VAR_6;
 Cache *VAR_7;
 Hypertable *VAR_8;
 bool VAR_9 = 0;

 if (((void*)0) == VAR_5->relation)

  return 0;

 VAR_6 = FUNC_3(VAR_5->relation, VAR_2, 1);

 if (!FUNC_1(VAR_6))
  return 0;

 VAR_7 = FUNC_12();

 switch (VAR_5->kind)
 {
  case 128:
   VAR_8 = FUNC_11(VAR_7, VAR_6);

   if (((void*)0) != VAR_8)
   {
    FUNC_2("REINDEX");
    FUNC_13(VAR_8->fd.id);

    if (FUNC_8(VAR_8, VAR_3, VAR_5) >= 0)
     VAR_9 = 1;

    FUNC_9(VAR_4, VAR_8);
   }
   break;
  case 129:
   VAR_8 = FUNC_11(VAR_7, FUNC_0(VAR_6, 1));

   if (((void*)0) != VAR_8)
   {
    FUNC_9(VAR_4, VAR_8);
    FUNC_13(VAR_8->fd.id);






    FUNC_4(VAR_1,
      (FUNC_5(VAR_0),
       FUNC_7("reindexing of a specific index on a hypertable is unsupported"),
       FUNC_6(
        "As a workaround, it is possible to run REINDEX TABLE to reindex all "
        "indexes on a hypertable, including all indexes on chunks.")));
   }
   break;
  default:
   break;
 }

 FUNC_10(VAR_7);

 return VAR_9;
}
