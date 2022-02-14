
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef size_t ssize_t ;



__attribute__((used)) static ssize_t FUNC_0 (stream_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    char *VAR_3 = VAR_0->p_sys, *VAR_4 = VAR_1;
    size_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2 && *VAR_3 != '\0'; VAR_5++)
        *(VAR_4++) = *(VAR_3++);

    VAR_0->p_sys = VAR_3;
    return VAR_5;
}
