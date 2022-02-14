
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0( vlc_fourcc_t VAR_0 )
{
    uint8_t *VAR_1 = (uint8_t*)&VAR_0;
    return VAR_1[0] | (VAR_1[1] << 8) | (VAR_1[2] << 16) | (VAR_1[3] << 24);
}
