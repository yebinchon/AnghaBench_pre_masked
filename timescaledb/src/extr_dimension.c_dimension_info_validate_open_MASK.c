
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int adaptive_chunking; int interval_datum; int interval_type; int * colname; int interval; int partitioning_func; int coltype; } ;
typedef int Oid ;
typedef TYPE_1__ DimensionInfo ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_10(DimensionInfo *VAR_3)
{
 Oid VAR_4 = VAR_3->coltype;

 FUNC_0(VAR_3->type == VAR_0);

 if (FUNC_2(VAR_3->partitioning_func))
 {
  if (!FUNC_9(VAR_3->partitioning_func, VAR_3->type, VAR_3->coltype))
   FUNC_4(VAR_2,
     (FUNC_5(VAR_1),
      FUNC_7("invalid partitioning function"),
      FUNC_6("A valid partitioning function for open (time) dimensions must be "
        "IMMUTABLE, "
        "take the column type as input, and return an integer or "
        "timestamp type.")));

  VAR_4 = FUNC_8(VAR_3->partitioning_func);
 }

 VAR_3->interval = FUNC_3(FUNC_1(*VAR_3->colname),
             VAR_4,
             VAR_3->interval_type,
             VAR_3->interval_datum,
             VAR_3->adaptive_chunking);
}
