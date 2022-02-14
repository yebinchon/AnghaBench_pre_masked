
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static unsigned int FUNC_0( uint8_t VAR_0 )
{

    const unsigned int VAR_1[16] = {
        0, 8000, 16000, 32000, 0, 0, 11025, 22050, 44100, 0, 0,
        12000, 24000, 48000, 96000, 192000
    };

    if( VAR_0 >= 16 )
        return 0;
    return VAR_1[VAR_0];
}
