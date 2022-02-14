
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct v4l2_fract {int denominator; scalar_t__ numerator; } ;
typedef int int64_t ;



__attribute__((used)) static int64_t FUNC_0 (const struct v4l2_fract *VAR_0,
                     const struct v4l2_fract *VAR_1)
{
    return (uint64_t)VAR_0->numerator * VAR_1->denominator
         - (uint64_t)VAR_1->numerator * VAR_0->denominator;
}
