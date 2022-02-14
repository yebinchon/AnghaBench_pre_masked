
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int numerator; unsigned int denominator; } ;
struct v4l2_cropcap {TYPE_1__ pixelaspect; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,struct v4l2_cropcap*) ;

__attribute__((used)) static void FUNC_1 (int VAR_2, unsigned *restrict VAR_3, unsigned *restrict VAR_4)
{
    struct v4l2_cropcap VAR_5 = { .type = VAR_0 };


    if (FUNC_0 (VAR_2, VAR_1, &VAR_5) < 0)
    {
        *VAR_3 = *VAR_4 = 1;
        return;
    }
    *VAR_3 = VAR_5.pixelaspect.numerator;
    *VAR_4 = VAR_5.pixelaspect.denominator;
}
