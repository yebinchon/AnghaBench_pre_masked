
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ char_u ;
struct TYPE_2__ {int dying; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__* FUNC_2 (scalar_t__*) ;

int
FUNC_3(void)
{
    char_u *VAR_6;


    VAR_6 = FUNC_2((char_u *)"DISPLAY");
    if (VAR_6 == ((void*)0) || *VAR_6 == VAR_1)
    {
 VAR_5.dying = VAR_3;
 FUNC_0(FUNC_1((char *)VAR_4));
 return VAR_0;
    }
    return VAR_2;
}
