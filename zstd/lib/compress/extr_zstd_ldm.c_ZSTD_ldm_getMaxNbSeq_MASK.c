
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t minMatchLength; scalar_t__ enableLdm; } ;
typedef TYPE_1__ ldmParams_t ;



size_t FUNC_0(ldmParams_t VAR_0, size_t VAR_1)
{
    return VAR_0.enableLdm ? (VAR_1 / VAR_0.minMatchLength) : 0;
}
