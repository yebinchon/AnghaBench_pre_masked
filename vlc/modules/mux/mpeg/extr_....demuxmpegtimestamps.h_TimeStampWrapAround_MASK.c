
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stime_t ;



__attribute__((used)) static inline stime_t FUNC_0( stime_t VAR_0, stime_t VAR_1 )
{
    stime_t VAR_2 = 0;
    if( VAR_0 > 0x0FFFFFFFF && VAR_1 < 0x0FFFFFFFF )
        VAR_2 = 0x1FFFFFFFF;

    return VAR_1 + VAR_2;
}
