
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_4__ {scalar_t__ natts; scalar_t__ tdhasoid; } ;



__attribute__((used)) static inline bool
FUNC_0(TupleDesc VAR_0, TupleDesc VAR_1)
{
 return (VAR_0->natts != VAR_1->natts || VAR_0->tdhasoid != VAR_1->tdhasoid);
}
