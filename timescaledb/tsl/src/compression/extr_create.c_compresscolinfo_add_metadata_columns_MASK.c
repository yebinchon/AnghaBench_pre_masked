
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int lt_opr; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_17__ {int numcols; TYPE_4__* col_meta; void* coldeflist; } ;
struct TYPE_16__ {scalar_t__ orderby_column_index; int attname; } ;
struct TYPE_15__ {int atttypid; } ;
struct TYPE_14__ {int rd_id; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* Form_pg_attribute ;
typedef TYPE_4__ FormData_hypertable_compression ;
typedef TYPE_5__ CompressColInfo ;
typedef int AttrNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_5 ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 void* FUNC_12 (void*,int ) ;
 TYPE_1__* FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_15(CompressColInfo *VAR_6, Relation VAR_7)
{



 int VAR_8;


 VAR_6->coldeflist = FUNC_12(VAR_6->coldeflist,


        FUNC_14(VAR_0,
             VAR_4,
             -1 ,
             0 ));

 VAR_6->coldeflist = FUNC_12(VAR_6->coldeflist,


        FUNC_14(VAR_1,
             VAR_4,
             -1 ,
             0 ));

 for (VAR_8 = 0; VAR_8 < VAR_6->numcols; VAR_8++)
 {
  if (VAR_6->col_meta[VAR_8].orderby_column_index > 0)
  {
   FormData_hypertable_compression VAR_9 = VAR_6->col_meta[VAR_8];
   AttrNumber VAR_10 = FUNC_11(VAR_7->rd_id, FUNC_1(VAR_9.attname));
   Form_pg_attribute VAR_11 = FUNC_4(FUNC_3(VAR_7),
               FUNC_0(VAR_10));
   TypeCacheEntry *VAR_12 = FUNC_13(VAR_11->atttypid, VAR_5);

   if (!FUNC_2(VAR_12->lt_opr))
    FUNC_7(VAR_3,
      (FUNC_8(VAR_2),
       FUNC_9("invalid order by column type: could not identify an less-than "
        "operator for type %s",
        FUNC_10(VAR_11->atttypid))));


   VAR_6->coldeflist =
    FUNC_12(VAR_6->coldeflist,
      FUNC_14(FUNC_6(&VAR_6->col_meta[VAR_8]),
           VAR_11->atttypid,
           -1 ,
           0 ));
   VAR_6->coldeflist =
    FUNC_12(VAR_6->coldeflist,
      FUNC_14(FUNC_5(&VAR_6->col_meta[VAR_8]),
           VAR_11->atttypid,
           -1 ,
           0 ));
  }
 }
}
