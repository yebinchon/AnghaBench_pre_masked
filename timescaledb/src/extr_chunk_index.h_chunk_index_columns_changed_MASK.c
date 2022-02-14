
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_3__ {int natts; int tdhasoid; } ;



__attribute__((used)) static inline bool
FUNC_0(int VAR_0, bool VAR_1, TupleDesc VAR_2)
{





 return !(VAR_0 == VAR_2->natts && VAR_1 == VAR_2->tdhasoid);
}
