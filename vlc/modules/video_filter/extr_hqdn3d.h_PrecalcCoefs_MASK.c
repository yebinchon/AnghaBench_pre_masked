
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double,double) ;

__attribute__((used)) static void FUNC_3(int *VAR_0, double VAR_1)
{
    double VAR_2, VAR_3, VAR_4;

    VAR_2 = FUNC_1(0.25) / FUNC_1(1.0 - VAR_1/255.0 - 0.00001);

    for (int VAR_5 = -255*16; VAR_5 <= 255*16; VAR_5++)
    {
        VAR_3 = 1.0 - FUNC_0(VAR_5) / (16*255.0);
        VAR_4 = FUNC_2(VAR_3, VAR_2) * 65536.0 * (double)VAR_5 / 16.0;
        VAR_0[16*256+VAR_5] = (VAR_4<0) ? (VAR_4-0.5) : (VAR_4+0.5);
    }

    VAR_0[0] = (VAR_1 != 0);
}
