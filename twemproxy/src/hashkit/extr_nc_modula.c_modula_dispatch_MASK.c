
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct continuum {int index; } ;


 int FUNC_0 (int) ;

uint32_t
FUNC_1(struct continuum *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
    struct continuum *VAR_3;

    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != 0);

    VAR_3 = VAR_0 + VAR_2 % VAR_1;

    return VAR_3->index;
}
