
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_5__ {int tdhasoid; int natts; } ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static inline bool
FUNC_1(TupleDesc VAR_0, TupleDesc VAR_1)
{
 return FUNC_0(VAR_0->natts, VAR_0->tdhasoid, VAR_1);
}
