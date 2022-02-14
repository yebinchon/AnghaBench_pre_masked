
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int desc; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
typedef int DimensionType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline DimensionType
FUNC_2(TupleInfo *VAR_6)
{
 if (FUNC_1(VAR_6->tuple, VAR_0, VAR_6->desc) &&
  !FUNC_1(VAR_6->tuple, VAR_1, VAR_6->desc))
  return VAR_3;

 if (!FUNC_1(VAR_6->tuple, VAR_0, VAR_6->desc) &&
  FUNC_1(VAR_6->tuple, VAR_1, VAR_6->desc))
  return VAR_4;

 FUNC_0(VAR_5, "invalid partitioning dimension");

 return VAR_2;
}
