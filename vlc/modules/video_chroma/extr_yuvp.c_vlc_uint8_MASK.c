
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline uint8_t FUNC_0( int VAR_0 )
{
    if( VAR_0 > 255 )
        return 255;
    else if( VAR_0 < 0 )
        return 0;
    return VAR_0;
}
