
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int16 ;
struct TYPE_10__ {TYPE_1__* col_meta; } ;
struct TYPE_9__ {scalar_t__ contype; int conname; } ;
struct TYPE_8__ {int main_table_relid; } ;
struct TYPE_7__ {int segmentby_column_index; int orderby_column_index; int attname; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int Name ;
typedef int List ;
typedef TYPE_2__ Hypertable ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_constraint ;
typedef int Datum ;
typedef TYPE_4__ CompressColInfo ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int ,int ,int ) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,int ,...) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ,int ,int*) ;
 int FUNC_20 (int ,int ) ;
 int * FUNC_21 (int *,int ) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ,int,int *,int,int *) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;

__attribute__((used)) static List *
FUNC_27(Hypertable *VAR_16, CompressColInfo *VAR_17)
{
 Oid VAR_18 = VAR_16->main_table_relid;
 Relation VAR_19;
 SysScanDesc VAR_20;
 ScanKeyData VAR_21;
 HeapTuple VAR_22;
 List *VAR_23 = VAR_15;
 ArrayType *VAR_24;

 VAR_19 = FUNC_20(VAR_8, VAR_0);

 FUNC_12(&VAR_21,
    VAR_2,
    VAR_3,
    VAR_12,
    FUNC_10(VAR_18));

 VAR_20 = FUNC_24(VAR_19, VAR_9, 1, ((void*)0), 1, &VAR_21);
 while (FUNC_8(VAR_22 = FUNC_26(VAR_20)))
 {
  Form_pg_constraint VAR_25 = (Form_pg_constraint) FUNC_6(VAR_22);





  if (VAR_25->contype == VAR_4 || VAR_25->contype == VAR_7)
   continue;
  else if (VAR_25->contype == VAR_5)
  {
   FUNC_14(VAR_11,
     (FUNC_15(VAR_10),
      FUNC_17("constraint %s is not supported for compression",
       FUNC_9(VAR_25->conname)),
      FUNC_16("Exclusion constraints are not supported on hypertables that are "
        "compressed.")));
  }
  else
  {
   int VAR_26, VAR_27;
   int16 *VAR_28;
   bool VAR_29;

   Datum VAR_30 = FUNC_19(VAR_22,
          VAR_1,
          FUNC_11(VAR_19),
          &VAR_29);
   if (VAR_29)
    FUNC_13(VAR_11, "null conkey for constraint %u", FUNC_7(VAR_22));
   VAR_24 = FUNC_5(VAR_30);
   VAR_27 = FUNC_1(VAR_24)[0];
   if (FUNC_4(VAR_24) != 1 || VAR_27 < 0 || FUNC_3(VAR_24) ||
    FUNC_2(VAR_24) != VAR_13)
    FUNC_13(VAR_11, "conkey is not a 1-D smallint array");
   VAR_28 = (int16 *) FUNC_0(VAR_24);
   for (VAR_26 = 0; VAR_26 < VAR_27; VAR_26++)
   {
    int16 VAR_31 = VAR_28[VAR_26] - 1;
    if (VAR_25->contype == VAR_6)
    {

     if (VAR_17->col_meta[VAR_31].segmentby_column_index < 1)
     {
      FUNC_14(VAR_11,
        (FUNC_15(VAR_10),
         FUNC_17("constraint %s requires column %s to be a segment_by "
          "column for compression",
          FUNC_9(VAR_25->conname),
          FUNC_9(VAR_17->col_meta[VAR_31].attname)),
         FUNC_16("Only segment by columns can be used in foreign key"
           "constraints on hypertables that are compressed.")));
     }
     else
     {
      Name VAR_32 = FUNC_23(VAR_14);
      FUNC_22(VAR_32, &VAR_25->conname);
      VAR_23 = FUNC_21(VAR_23, VAR_32);
     }
    }
    else
    {

     if (VAR_17->col_meta[VAR_31].segmentby_column_index < 1 &&
      VAR_17->col_meta[VAR_31].orderby_column_index < 1)
      FUNC_14(VAR_11,
        (FUNC_15(VAR_10),
         FUNC_17("constraint %s requires column %s to be a segment_by or "
          "order_by column for compression",
          FUNC_9(VAR_25->conname),
          FUNC_9(VAR_17->col_meta[VAR_31].attname)),
         FUNC_16("Only segment by and order by columns can be used in "
           "constraints on hypertables that are compressed.")));
    }
   }
  }
 }

 FUNC_25(VAR_20);
 FUNC_18(VAR_19, VAR_0);
 return VAR_23;
}
