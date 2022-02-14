
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(int VAR_0)
{
    if (FUNC_1(VAR_0))
 return VAR_0 - '0';
    VAR_0 = FUNC_0(VAR_0);
    if (VAR_0 >= 'a' && VAR_0 <= 'f')
 return VAR_0 - 'a' + 10;
    return -1000;
}
