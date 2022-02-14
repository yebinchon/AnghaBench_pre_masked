
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
typedef int * cvt_t ;
struct TYPE_2__ {scalar_t__ src; scalar_t__ dst; int * convert; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static cvt_t FUNC_0(vlc_fourcc_t VAR_1, vlc_fourcc_t VAR_2)
{
    for (int VAR_3 = 0; VAR_0[VAR_3].convert; VAR_3++) {
        if (VAR_0[VAR_3].src == VAR_1 &&
            VAR_0[VAR_3].dst == VAR_2)
            return VAR_0[VAR_3].convert;
    }
    return ((void*)0);
}
