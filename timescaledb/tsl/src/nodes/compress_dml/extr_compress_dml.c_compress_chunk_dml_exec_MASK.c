
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_2__ {int chunk_relid; } ;
typedef int Oid ;
typedef int CustomScanState ;
typedef TYPE_1__ CompressChunkDmlState ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static TupleTableSlot *
FUNC_2(CustomScanState *VAR_1)
{
 CompressChunkDmlState *VAR_2 = (CompressChunkDmlState *) VAR_1;
 Oid VAR_3 = VAR_2->chunk_relid;
 FUNC_0(VAR_0,
   "cannot update/delete rows from chunk \"%s\" as it is compressed",
   FUNC_1(VAR_3));
 return ((void*)0);
}
