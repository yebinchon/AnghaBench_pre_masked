
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tuple; } ;
typedef TYPE_1__ TupleInfo ;
typedef int ScanTupleResult ;
typedef int DimensionVec ;
typedef int DimensionSlice ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int **,int *) ;

__attribute__((used)) static ScanTupleResult
FUNC_2(TupleInfo *VAR_1, void *VAR_2)
{
 DimensionVec **VAR_3 = VAR_2;
 DimensionSlice *VAR_4 = FUNC_0(VAR_1->tuple);

 *VAR_3 = FUNC_1(VAR_3, VAR_4);

 return VAR_0;
}
