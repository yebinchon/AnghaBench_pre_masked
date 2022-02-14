
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int id; } ;
struct TYPE_13__ {TYPE_2__ fd; } ;
struct TYPE_12__ {int set_not_null; int skip; int type; int * colname; int dimension_id; int if_not_exists; TYPE_1__* ht; int coltype; int table_relid; int interval_type; scalar_t__ num_slices_is_set; } ;
struct TYPE_10__ {int space; } ;
typedef int HeapTuple ;
typedef TYPE_3__ DimensionInfo ;
typedef TYPE_4__ Dimension ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;



 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,...) ;
 TYPE_4__* FUNC_16 (int ,int,int ) ;

void
FUNC_17(DimensionInfo *VAR_8)
{
 Dimension *VAR_9;
 HeapTuple VAR_10;
 Datum VAR_11;
 bool VAR_12 = 0;

 if (!FUNC_1(VAR_8))
  FUNC_13(VAR_6,
    (FUNC_14(VAR_3), FUNC_15("invalid dimension info")));

 if (VAR_8->num_slices_is_set && FUNC_6(VAR_8->interval_type))
  FUNC_13(VAR_6,
    (FUNC_14(VAR_3),
     FUNC_15("cannot specify both the number of partitions and an interval")));


 VAR_10 = FUNC_8(VAR_8->table_relid, FUNC_5(*VAR_8->colname));

 if (!FUNC_4(VAR_10))
  FUNC_13(VAR_6,
    (FUNC_14(VAR_5),
     FUNC_15("column \"%s\" does not exist", FUNC_5(*VAR_8->colname))));

 VAR_11 = FUNC_9(VAR_0, VAR_10, VAR_2, &VAR_12);
 FUNC_0(!VAR_12);

 VAR_8->coltype = FUNC_3(VAR_11);

 VAR_11 = FUNC_9(VAR_0, VAR_10, VAR_1, &VAR_12);
 FUNC_0(!VAR_12);

 VAR_8->set_not_null = !FUNC_2(VAR_11);

 FUNC_7(VAR_10);

 if (((void*)0) != VAR_8->ht)
 {

  VAR_9 = FUNC_16(VAR_8->ht->space,
              130,
              FUNC_5(*VAR_8->colname));

  if (((void*)0) != VAR_9)
  {
   if (!VAR_8->if_not_exists)
    FUNC_13(VAR_6,
      (FUNC_14(VAR_4),
       FUNC_15("column \"%s\" is already a dimension", FUNC_5(*VAR_8->colname))));

   VAR_8->dimension_id = VAR_9->fd.id;
   VAR_8->skip = 1;

   FUNC_13(VAR_7,
     (FUNC_15("column \"%s\" is already a dimension, skipping",
       FUNC_5(*VAR_8->colname))));
   return;
  }
 }

 switch (VAR_8->type)
 {
  case 129:
   FUNC_10(VAR_8);
   break;
  case 128:
   FUNC_11(VAR_8);
   break;
  case 130:
   FUNC_12(VAR_6, "invalid dimension type in configuration");
   break;
 }
}
