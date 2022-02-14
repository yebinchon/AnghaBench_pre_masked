
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_u ;
typedef int EventModifiers ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int_u
FUNC_0(EventModifiers VAR_11)
{
    int_u VAR_12 = 0x00;

    if (VAR_11 & (VAR_10 | VAR_9))
 VAR_12 |= VAR_3;
    if (VAR_11 & (VAR_5 | VAR_7))
 VAR_12 |= VAR_2;
    if (VAR_11 & (VAR_6 | VAR_8))
 VAR_12 |= VAR_0;




    return (VAR_12);
}
