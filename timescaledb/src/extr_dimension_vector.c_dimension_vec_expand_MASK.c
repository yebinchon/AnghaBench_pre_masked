
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_7__ {scalar_t__ capacity; } ;
typedef TYPE_1__ DimensionVec ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static DimensionVec *
FUNC_3(DimensionVec *VAR_0, int32 VAR_1)
{
 if (VAR_0 != ((void*)0) && VAR_0->capacity >= VAR_1)
  return VAR_0;

 if (((void*)0) == VAR_0)
  VAR_0 = FUNC_1(FUNC_0(VAR_1));
 else
  VAR_0 = FUNC_2(VAR_0, FUNC_0(VAR_1));

 VAR_0->capacity = VAR_1;

 return VAR_0;
}
