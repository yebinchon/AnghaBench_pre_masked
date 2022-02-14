
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct continuum {scalar_t__ value; scalar_t__ index; } ;


 int FUNC_0 (int) ;

uint32_t
FUNC_1(struct continuum *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
    struct continuum *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;

    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != 0);

    VAR_3 = VAR_5 = VAR_0;
    VAR_4 = VAR_6 = VAR_0 + VAR_1;

    while (VAR_5 < VAR_6) {
        VAR_7 = VAR_5 + (VAR_6 - VAR_5) / 2;
        if (VAR_7->value < VAR_2) {
          VAR_5 = VAR_7 + 1;
        } else {
          VAR_6 = VAR_7;
        }
    }

    if (VAR_6 == VAR_4) {
        VAR_6 = VAR_3;
    }

    return VAR_6->index;
}
