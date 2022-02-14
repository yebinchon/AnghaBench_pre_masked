
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Path {TYPE_1__* pathtarget; } ;
struct AggClauseCosts {int numAggs; scalar_t__ transitionSpace; } ;
struct TYPE_2__ {int width; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

size_t
FUNC_2(struct Path *VAR_1, const struct AggClauseCosts *VAR_2,
         double VAR_3)
{
 size_t VAR_4;


 VAR_4 = FUNC_0(VAR_1->pathtarget->width) + FUNC_0(VAR_0);


 VAR_4 += VAR_2->transitionSpace;

 VAR_4 += FUNC_1(VAR_2->numAggs);







 return VAR_4 * VAR_3;
}
