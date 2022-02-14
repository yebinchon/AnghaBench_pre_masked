
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_5__ {int fd; } ;
typedef int ScanTupleResult ;
typedef int FormData_dimension_slice ;
typedef TYPE_2__ DimensionSlice ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static ScanTupleResult
FUNC_2(TupleInfo *VAR_1, void *VAR_2)
{
 DimensionSlice **VAR_3 = VAR_2;

 FUNC_1(&(*VAR_3)->fd, FUNC_0(VAR_1->tuple), sizeof(FormData_dimension_slice));
 return VAR_0;
}
