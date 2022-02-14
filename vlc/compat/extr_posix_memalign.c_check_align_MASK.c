
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(size_t VAR_1)
{
    if (VAR_1 & (VAR_1 - 1))
        return VAR_0;
    if (VAR_1 < sizeof (void *))
        return VAR_0;
    return 0;
}
