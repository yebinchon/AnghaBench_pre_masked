
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static inline int16_t FUNC_0( float VAR_0 )
{
    if( VAR_0 >= 1.0 )
        return 32767;
    else if( VAR_0 < -1.0 )
        return -32768;
    else
        return (int16_t)( VAR_0 * 32768.0 );
}
