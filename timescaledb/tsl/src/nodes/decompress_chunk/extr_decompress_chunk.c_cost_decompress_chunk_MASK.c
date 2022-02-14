
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rows; int startup_cost; int total_cost; } ;
typedef TYPE_1__ Path ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(Path *VAR_2, Path *VAR_3)
{

 if (VAR_3->rows > 0)
  VAR_2->startup_cost = VAR_3->total_cost / VAR_3->rows;


 VAR_2->total_cost = VAR_3->total_cost + VAR_2->rows * VAR_1;
 VAR_2->rows = VAR_3->rows * VAR_0;
}
