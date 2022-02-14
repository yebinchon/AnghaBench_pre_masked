
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_4__ {scalar_t__ num_coords; int cardinality; } ;
typedef TYPE_1__ Point ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static Point *
FUNC_2(int16 VAR_0)
{
 Point *VAR_1 = FUNC_1(FUNC_0(VAR_0));

 VAR_1->cardinality = VAR_0;
 VAR_1->num_coords = 0;

 return VAR_1;
}
