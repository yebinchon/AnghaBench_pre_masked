
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
    if (VAR_0 < 0) {
        return 0;
    }
    static int VAR_1[12] = {0, 1, 2, 3, 4, 6,
                                                           8, 8, 0, 0, 0, 0};
    if (VAR_0 < 12) {
        return VAR_1[VAR_0];
    }
    return (VAR_0 - 12 - VAR_0 % 2) / 2;
}
