
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
typedef int uint32_t ;
struct array {void* elem; scalar_t__ size; } ;


 int FUNC_0 (int) ;

uint32_t
FUNC_1(struct array *VAR_0, void *VAR_1)
{
    uint8_t *VAR_2, *VAR_3;
    uint32_t VAR_4, VAR_5;

    FUNC_0(VAR_1 >= VAR_0->elem);

    VAR_2 = VAR_0->elem;
    VAR_3 = VAR_1;
    VAR_4 = (uint32_t)(VAR_3 - VAR_2);

    FUNC_0(VAR_4 % (uint32_t)VAR_0->size == 0);

    VAR_5 = VAR_4 / (uint32_t)VAR_0->size;

    return VAR_5;
}
