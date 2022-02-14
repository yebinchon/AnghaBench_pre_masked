
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int i_flags; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(block_t *VAR_8, uint16_t VAR_9)
{
    if (VAR_9 & VAR_6)
        VAR_8->i_flags = VAR_1;
    else if ((VAR_9 & VAR_7) || (VAR_9 & VAR_5))
        VAR_8->i_flags = VAR_2;
    else if (VAR_9 & VAR_4)
        VAR_8->i_flags = VAR_0;
    else
        VAR_8->i_flags = VAR_3;
}
