
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint_fast32_t ;
typedef int uint8_t ;
struct vlc_h2_frame {int* data; } ;



__attribute__((used)) static uint_fast32_t FUNC_0(const struct vlc_h2_frame *VAR_0)
{
    const uint8_t *VAR_1 = VAR_0->data;
    return (VAR_1[0] << 16) | (VAR_1[1] << 8) | VAR_1[2];
}
