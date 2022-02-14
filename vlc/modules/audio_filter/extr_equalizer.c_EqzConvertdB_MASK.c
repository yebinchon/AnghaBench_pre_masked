
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float FUNC_0 (float,float) ;

__attribute__((used)) static inline float FUNC_1( float VAR_1 )
{
    if( VAR_1 < -20.0f )
        VAR_1 = -20.0f;
    else if( VAR_1 > 20.0f )
        VAR_1 = 20.0f;
    return VAR_0 * ( FUNC_0( 10.0f, VAR_1 / 20.0f ) - 1.0f );
}
