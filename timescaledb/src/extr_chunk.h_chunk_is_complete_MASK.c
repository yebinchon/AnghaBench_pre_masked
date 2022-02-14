
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* constraints; } ;
struct TYPE_7__ {scalar_t__ num_dimensions; } ;
struct TYPE_6__ {scalar_t__ num_dimension_constraints; } ;
typedef TYPE_2__ Hyperspace ;
typedef TYPE_3__ Chunk ;



__attribute__((used)) static inline bool
FUNC_0(Chunk *VAR_0, Hyperspace *VAR_1)
{
 return VAR_1->num_dimensions == VAR_0->constraints->num_dimension_constraints;
}
