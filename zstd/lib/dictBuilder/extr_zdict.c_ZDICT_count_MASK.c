
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (void const*) ;
 int FUNC_1 (size_t const) ;

__attribute__((used)) static size_t FUNC_2(const void* VAR_0, const void* VAR_1)
{
    const char* const VAR_2 = (const char*)VAR_0;
    for (;;) {
        size_t const VAR_3 = FUNC_0(VAR_1) ^ FUNC_0(VAR_0);
        if (!VAR_3) {
            VAR_0 = (const char*)VAR_0+sizeof(size_t);
            VAR_1 = (const char*)VAR_1+sizeof(size_t);
            continue;
        }
        VAR_0 = (const char*)VAR_0+FUNC_1(VAR_3);
        return (size_t)((const char*)VAR_0 - VAR_2);
    }
}
