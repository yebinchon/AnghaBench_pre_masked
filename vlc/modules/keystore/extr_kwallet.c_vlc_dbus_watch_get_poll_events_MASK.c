
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DBusWatch ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 unsigned int FUNC_0 (int *) ;

__attribute__((used)) static short
FUNC_1( DBusWatch *VAR_4 )
{
    unsigned int VAR_5 = FUNC_0( VAR_4 );
    short VAR_6 = 0;

    if( VAR_5 & VAR_0 )
        VAR_6 |= VAR_2;
    if( VAR_5 & VAR_1 )
        VAR_6 |= VAR_3;
    return VAR_6;
}
