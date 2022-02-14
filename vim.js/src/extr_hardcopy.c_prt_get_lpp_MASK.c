
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double bbox_min_y; double bbox_max_y; } ;


 scalar_t__ FUNC_0 (float,double) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 int FUNC_1 () ;
 float VAR_3 ;
 TYPE_1__* VAR_4 ;
 float VAR_5 ;

__attribute__((used)) static int
FUNC_2()
{
    int VAR_6;






    VAR_0 = (float)FUNC_0(VAR_3,
        VAR_4->bbox_min_y);
    if ((VAR_4->bbox_max_y - VAR_4->bbox_min_y) < 1000.0)
    {
 VAR_0 -= (float)FUNC_0(VAR_3,
    (1000.0 - (VAR_4->bbox_max_y -
         VAR_4->bbox_min_y)) / 2);
    }


    VAR_2 = VAR_3 + VAR_0;


    VAR_6 = (int)((VAR_5 - VAR_1) / VAR_3);


    VAR_5 -= VAR_3 * FUNC_1();

    return VAR_6 - FUNC_1();
}
