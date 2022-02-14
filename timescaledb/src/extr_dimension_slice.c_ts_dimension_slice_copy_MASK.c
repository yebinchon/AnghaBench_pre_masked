
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * storage_free; int * storage; } ;
typedef TYPE_1__ DimensionSlice ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,int) ;
 TYPE_1__* FUNC_2 (int) ;

DimensionSlice *
FUNC_3(const DimensionSlice *VAR_0)
{
 DimensionSlice *VAR_1 = FUNC_2(sizeof(DimensionSlice));

 FUNC_0(VAR_0->storage == ((void*)0));
 FUNC_0(VAR_0->storage_free == ((void*)0));

 FUNC_1(VAR_1, VAR_0, sizeof(DimensionSlice));
 return VAR_1;
}
