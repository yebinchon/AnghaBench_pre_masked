
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_1(bool VAR_0, int64_t VAR_1, bool VAR_2, int64_t VAR_3)
{
    if (VAR_0 && VAR_2)
        return FUNC_0(VAR_1, VAR_3);

    if (!VAR_0 && !VAR_2)
        return 0;

    return VAR_1 ? 1 : -1;
}
