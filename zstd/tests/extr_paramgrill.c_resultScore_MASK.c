
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cMem; scalar_t__ dSpeed; scalar_t__ cSpeed; } ;
typedef TYPE_1__ constraint_t ;
typedef scalar_t__ U32 ;
struct TYPE_6__ {double cSpeed; double dSpeed; double cMem; double cSize; } ;
typedef TYPE_2__ BMK_benchResult_t ;


 double const FUNC_0 (int ,int ) ;
 double const FUNC_1 (int,double) ;
 int FUNC_2 (double) ;

__attribute__((used)) static double
FUNC_3(const BMK_benchResult_t VAR_0, const size_t VAR_1, const constraint_t VAR_2)
{
    double VAR_3 = 0., VAR_4 = 0., VAR_5, VAR_6 = 0.;
    const double VAR_7 = 1, VAR_8 = 0.1, VAR_9 = 0.5;
    double VAR_10;
    if(VAR_2.cSpeed) { VAR_3 = VAR_0.cSpeed / (double)VAR_2.cSpeed; }
    if(VAR_2.dSpeed) { VAR_4 = VAR_0.dSpeed / (double)VAR_2.dSpeed; }
    if(VAR_2.cMem != (U32)-1) { VAR_6 = (double)VAR_2.cMem / VAR_0.cMem; }
    VAR_5 = ((double)VAR_1 / VAR_0.cSize);

    VAR_10 = (FUNC_1(1, VAR_3) + FUNC_1(1, VAR_4) + FUNC_1(1, VAR_6))*VAR_7 + VAR_5 * VAR_9 +
         (FUNC_0(0, FUNC_2(VAR_3))+ FUNC_0(0, FUNC_2(VAR_4))+ FUNC_0(0, FUNC_2(VAR_6))) * VAR_8;

    return VAR_10;
}
