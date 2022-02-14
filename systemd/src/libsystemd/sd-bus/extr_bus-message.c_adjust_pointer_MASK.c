
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;



__attribute__((used)) static void *FUNC_0(const void *VAR_0, void *VAR_1, size_t VAR_2, void *VAR_3) {

        if (!VAR_0)
                return ((void*)0);

        if (VAR_1 == VAR_3)
                return (void*) VAR_0;

        if ((uint8_t*) VAR_0 < (uint8_t*) VAR_1)
                return (void*) VAR_0;

        if ((uint8_t*) VAR_0 >= (uint8_t*) VAR_1 + VAR_2)
                return (void*) VAR_0;

        return (uint8_t*) VAR_3 + ((uint8_t*) VAR_0 - (uint8_t*) VAR_1);
}
