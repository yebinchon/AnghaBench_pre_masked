
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_16__ {int attno; int type; int typid; } ;
struct TYPE_15__ {int num_columns; int hypertable_compression_info; TYPE_6__* columns; int varattno_map; } ;
struct TYPE_14__ {scalar_t__ segmentby_column_index; } ;
struct TYPE_13__ {int atttypid; int attname; } ;
struct TYPE_12__ {TYPE_1__* ss_ScanTupleSlot; } ;
struct TYPE_11__ {int tts_tupleDescriptor; } ;
typedef TYPE_2__ ScanState ;
typedef int ListCell ;
typedef TYPE_3__* Form_pg_attribute ;
typedef TYPE_4__ FormData_hypertable_compression ;
typedef TYPE_5__ DecompressChunkState ;
typedef TYPE_6__ DecompressChunkColumnState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 TYPE_4__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 TYPE_6__* FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(DecompressChunkState *VAR_5)
{
 ScanState *VAR_6 = (ScanState *) VAR_5;
 TupleDesc VAR_7 = VAR_6->ss_ScanTupleSlot->tts_tupleDescriptor;
 ListCell *VAR_8;
 int VAR_9;

 VAR_5->num_columns = FUNC_7(VAR_5->varattno_map);

 VAR_5->columns = FUNC_9(VAR_5->num_columns * sizeof(DecompressChunkColumnState));

 for (VAR_9 = 0, VAR_8 = FUNC_6(VAR_5->varattno_map); VAR_9 < VAR_5->num_columns; VAR_8 = FUNC_8(VAR_8), VAR_9++)
 {
  DecompressChunkColumnState *VAR_10 = &VAR_5->columns[VAR_9];
  VAR_10->attno = FUNC_5(VAR_8);

  if (VAR_10->attno > 0)
  {

   Form_pg_attribute VAR_11 =
    FUNC_2(VAR_7, FUNC_0(FUNC_5(VAR_8)));
   FormData_hypertable_compression *VAR_12 =
    FUNC_4(VAR_5->hypertable_compression_info,
             FUNC_1(VAR_11->attname));

   VAR_10->typid = VAR_11->atttypid;

   if (VAR_12->segmentby_column_index > 0)
    VAR_10->type = VAR_3;
   else
    VAR_10->type = VAR_0;
  }
  else
  {

   switch (VAR_10->attno)
   {
    case 129:
     VAR_10->type = VAR_1;
     break;
    case 128:
     VAR_10->type = VAR_4;
     break;
    default:
     FUNC_3(VAR_2, "Invalid column attno \"%d\"", VAR_10->attno);
     break;
   }
  }
 }
}
