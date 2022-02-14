
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stime_t ;
typedef int int64_t ;



__attribute__((used)) static inline stime_t FUNC_0( const uint8_t *VAR_0 )
{
    return ((int64_t)(VAR_0[ 0]&0x38 ) << 27)|
            ((int64_t)(VAR_0[0]&0x03 ) << 28)|
             (int64_t)(VAR_0[1] << 20)|
            ((int64_t)(VAR_0[2]&0xf8 ) << 12)|
            ((int64_t)(VAR_0[2]&0x03 ) << 13)|
             (int64_t)(VAR_0[3] << 5) |
             (int64_t)(VAR_0[4] >> 3);
}
