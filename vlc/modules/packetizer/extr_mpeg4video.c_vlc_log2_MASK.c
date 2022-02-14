
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0( unsigned int VAR_0 )
{
    int VAR_1 = 0;
    static const int VAR_2[16] =
    {
        0,0,1,1,2,2,2,2, 3,3,3,3,3,3,3,3
    };

    if( VAR_0&0xffff0000 )
    {
        VAR_0 >>= 16;
        VAR_1 += 16;
    }
    if( VAR_0&0xff00 )
    {
        VAR_0 >>= 8;
        VAR_1 += 8;
    }
    if( VAR_0&0xf0 )
    {
        VAR_0 >>= 4;
        VAR_1 += 4;
    }
    VAR_1 += VAR_2[VAR_0];

    return VAR_1;
}
