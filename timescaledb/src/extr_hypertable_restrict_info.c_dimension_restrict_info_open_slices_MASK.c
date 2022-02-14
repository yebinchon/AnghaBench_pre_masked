
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* dimension; } ;
struct TYPE_9__ {int lower_bound; int lower_strategy; int upper_bound; int upper_strategy; TYPE_3__ base; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {TYPE_1__ fd; } ;
typedef int DimensionVec ;
typedef TYPE_4__ DimensionRestrictInfoOpen ;


 int * FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static DimensionVec *
FUNC_1(DimensionRestrictInfoOpen *VAR_0)
{

 return FUNC_0(VAR_0->base.dimension->fd.id,
              VAR_0->upper_strategy,
              VAR_0->upper_bound,
              VAR_0->lower_strategy,
              VAR_0->lower_bound,
              0);
}
