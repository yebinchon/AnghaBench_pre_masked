
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int
FUNC_0()
{
    int VAR_2 = 0;
    int VAR_3;
    int VAR_4;

    for (VAR_4 = 0; ; ++VAR_4)
    {
 VAR_3 = VAR_1[0];
 if (VAR_3 < '0' || VAR_3 > '9')
     break;
 VAR_2 *= 10;
 VAR_2 += VAR_3 - '0';
 ++VAR_1;
 VAR_0 = -1;
    }

    if (VAR_4 == 0)
 return -1;
    return VAR_2;
}
