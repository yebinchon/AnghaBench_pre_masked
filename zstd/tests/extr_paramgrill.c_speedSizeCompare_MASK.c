
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cSpeed; scalar_t__ cSize; } ;
typedef TYPE_1__ BMK_benchResult_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(const BMK_benchResult_t VAR_4, const BMK_benchResult_t VAR_5)
{
    if(VAR_4 < VAR_5) {
        if(VAR_4 >= VAR_5) {
            return VAR_0;
        }
        return VAR_2;
    } else {
        if(VAR_4 <= VAR_5) {
            return VAR_3;
        }
        return VAR_1;
    }
}
