
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cSpeed; double cSize; } ;
typedef TYPE_1__ BMK_benchResult_t ;


 double VAR_0 ;

__attribute__((used)) static double
FUNC_0(const BMK_benchResult_t VAR_1, const BMK_benchResult_t VAR_2)
{
    double VAR_3 = (VAR_1 / VAR_2.cSpeed) - 1;
    double VAR_4 = ((double)VAR_2.cSize / VAR_1) - 1;
    if(VAR_4 < 0 || VAR_3 < 0) {
        return 0.0;
    }
    return VAR_4 * VAR_0 + VAR_3;
}
