
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0( int VAR_0 )
{



    static const int VAR_1[20] = { 300, 300, 300, 330, 363, 399, 438, 481, 529, 581,
                                    639, 702, 772, 849, 933, 1026, 1128, 1240, 1364, 1500 };

    if( VAR_0 < 1 )
    {
        return 0;
    }

    if( VAR_0 > 20 )
    {
        VAR_0 = 20;
    }

    return VAR_1[VAR_0 - 1];
}
