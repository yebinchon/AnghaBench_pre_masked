
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleInfo ;
struct TYPE_2__ {int main_table_relid; int num_dimensions; int * dimensions; } ;
typedef int ScanTupleResult ;
typedef TYPE_1__ Hyperspace ;
typedef int Dimension ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_1(TupleInfo *VAR_1, void *VAR_2)
{
 Hyperspace *VAR_3 = VAR_2;
 Dimension *VAR_4 = &VAR_3->dimensions[VAR_3->num_dimensions++];

 FUNC_0(VAR_4, VAR_1, VAR_3->main_table_relid);

 return VAR_0;
}
