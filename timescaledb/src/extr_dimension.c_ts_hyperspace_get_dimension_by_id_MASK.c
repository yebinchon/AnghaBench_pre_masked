
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_8__ {int id; } ;
struct TYPE_10__ {TYPE_1__ fd; } ;
struct TYPE_9__ {int num_dimensions; int dimensions; } ;
typedef TYPE_2__ Hyperspace ;
typedef TYPE_3__ Dimension ;


 TYPE_3__* FUNC_0 (TYPE_3__*,int ,int ,int,int ) ;
 int VAR_0 ;

Dimension *
FUNC_1(Hyperspace *VAR_1, int32 VAR_2)
{
 Dimension VAR_3 = {
  .fd.id = VAR_2,
 };

 return FUNC_0(&VAR_3, VAR_1->dimensions, VAR_1->num_dimensions, sizeof(Dimension), VAR_0);
}
