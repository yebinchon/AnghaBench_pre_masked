
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int desc; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_5__ {int typeid; int value; int isnull; } ;
typedef int ScanTupleResult ;
typedef TYPE_2__ DatumValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;

__attribute__((used)) static ScanTupleResult
FUNC_2(TupleInfo *VAR_2, void *VAR_3)
{
 DatumValue *VAR_4 = VAR_3;

 VAR_4->value = FUNC_1(VAR_2->tuple, VAR_0, VAR_2->desc, &VAR_4->isnull);

 if (!VAR_4->isnull)
  VAR_4->value = FUNC_0(VAR_4->value, VAR_4->typeid);

 return VAR_1;
}
