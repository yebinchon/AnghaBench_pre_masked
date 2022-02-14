
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int long_u ;
typedef scalar_t__ guicolor_T ;
struct TYPE_5__ {int drawarea; } ;
struct TYPE_4__ {scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;
typedef TYPE_1__ GdkColor ;


 int FUNC_0 (int ,unsigned long,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_0 ;

long_u
FUNC_2(guicolor_T VAR_1)
{
    GdkColor VAR_2;
    FUNC_0(FUNC_1(VAR_0.drawarea),
        (unsigned long)VAR_1, &VAR_2);

    return (((unsigned)VAR_2.red & 0xff00) << 8)
  | ((unsigned)VAR_2.green & 0xff00)
  | (((unsigned)VAR_2.blue & 0xff00) >> 8);
}
