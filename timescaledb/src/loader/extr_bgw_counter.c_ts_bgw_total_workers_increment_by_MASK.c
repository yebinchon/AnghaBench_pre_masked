
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_workers; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

extern bool
FUNC_2(int VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4 = VAR_1;

 FUNC_0(&VAR_0->mutex);
 if (VAR_0->total_workers + VAR_2 <= VAR_4)
 {
  VAR_0->total_workers += VAR_2;
  VAR_3 = 1;
 }
 FUNC_1(&VAR_0->mutex);
 return VAR_3;
}
