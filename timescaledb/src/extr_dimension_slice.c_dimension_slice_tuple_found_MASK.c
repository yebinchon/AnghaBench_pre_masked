
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tuple; int mctx; } ;
typedef TYPE_1__ TupleInfo ;
typedef int ScanTupleResult ;
typedef int MemoryContext ;
typedef int DimensionSlice ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_2(TupleInfo *VAR_1, void *VAR_2)
{
 DimensionSlice **VAR_3 = VAR_2;
 MemoryContext VAR_4 = FUNC_0(VAR_1->mctx);

 *VAR_3 = FUNC_1(VAR_1->tuple);
 FUNC_0(VAR_4);
 return VAR_0;
}
