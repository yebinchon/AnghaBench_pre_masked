
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,char const*,size_t,int ) ;

ssize_t
FUNC_1(int VAR_2, const void *VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    ssize_t VAR_6;
    const char *VAR_7;

    VAR_7 = VAR_3;
    VAR_5 = VAR_4;
    while (VAR_5 > 0) {
        VAR_6 = FUNC_0(VAR_2, VAR_7, VAR_5, 0);
        if (VAR_6 < 0) {
            if (VAR_1 == VAR_0) {
                continue;
            }
            return VAR_6;
        }
        if (VAR_6 == 0) {
            return -1;
        }

        VAR_5 -= (size_t)VAR_6;
        VAR_7 += VAR_6;
    }

    return (ssize_t)VAR_4;
}
