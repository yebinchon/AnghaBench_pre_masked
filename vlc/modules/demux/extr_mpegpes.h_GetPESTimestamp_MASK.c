
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stime_t ;
typedef int int64_t ;



__attribute__((used)) static inline stime_t FUNC_0( const uint8_t *VAR_0 )
{
    return ((int64_t)(VAR_0[ 0]&0x0e ) << 29)|
             (int64_t)(VAR_0[1] << 22)|
            ((int64_t)(VAR_0[2]&0xfe) << 14)|
             (int64_t)(VAR_0[3] << 7)|
             (int64_t)(VAR_0[4] >> 1);
}
