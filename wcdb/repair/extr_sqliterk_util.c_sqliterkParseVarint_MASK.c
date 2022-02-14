
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*,int,int*,scalar_t__*) ;

int FUNC_1(const unsigned char *VAR_2,
                        int VAR_3,
                        int *VAR_4,
                        int *VAR_5)
{
    if (!VAR_5) {
        return VAR_0;
    }
    int64_t VAR_6;
    int VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_6);
    if (VAR_7 != VAR_1) {
        return VAR_7;
    }
    *VAR_5 = (int) VAR_6;
    return VAR_1;
}
