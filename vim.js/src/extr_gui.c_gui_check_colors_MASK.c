
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_2__ {scalar_t__ norm_pixel; scalar_t__ back_pixel; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2()
{
    if (VAR_1.norm_pixel == VAR_1.back_pixel || VAR_1.norm_pixel == VAR_0)
    {
 FUNC_0((char_u *)"White");
 if (VAR_1.norm_pixel == VAR_1.back_pixel || VAR_1.norm_pixel == VAR_0)
     FUNC_1((char_u *)"Black");
    }
}
