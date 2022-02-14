
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static int
FUNC_1()
{
    int VAR_1 = 0;
    int VAR_2;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 3 && VAR_1 < 040; ++VAR_3)
    {
 VAR_2 = VAR_0[0];
 if (VAR_2 < '0' || VAR_2 > '7')
     break;
 VAR_1 <<= 3;
 VAR_1 |= FUNC_0(VAR_2);
 ++VAR_0;
    }

    if (VAR_3 == 0)
 return -1;
    return VAR_1;
}
