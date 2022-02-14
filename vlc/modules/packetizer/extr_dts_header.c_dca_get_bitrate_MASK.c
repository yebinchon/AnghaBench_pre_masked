
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static unsigned int FUNC_0( uint8_t VAR_0 )
{

    const unsigned int VAR_1[32] = {
        32000, 56000, 64000, 96000, 112000,
        128000, 192000, 224000, 256000, 320000,
        384000, 448000, 512000, 576000, 640000,
        768000, 896000, 1024000, 1152000, 1280000,
        1344000, 1408000, 1411200, 1472000, 1536000,
        1920000, 2048000, 3072000, 3840000,


        0, 0, 0
    };

    if( VAR_0 >= 32 )
        return 0;
    return VAR_1[VAR_0];
}
