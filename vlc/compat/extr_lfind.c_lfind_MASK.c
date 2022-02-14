
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void *FUNC_0(const void *VAR_0, const void *VAR_1, size_t *VAR_2,
            size_t VAR_3, int(*VAR_4)(const void *, const void *))
{
    for (int VAR_5 = 0; VAR_5 < *VAR_2; ++VAR_5)
    {
        const void *VAR_6 = VAR_1 + VAR_5 * VAR_3;
        if (!VAR_4(VAR_0, VAR_6))
            return VAR_6;
    }
    return ((void*)0);
}
