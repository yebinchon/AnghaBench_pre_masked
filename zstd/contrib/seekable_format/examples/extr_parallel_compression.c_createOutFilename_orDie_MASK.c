
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t const) ;
 int FUNC_1 (void*,int ,size_t const) ;
 int FUNC_2 (void*,char const*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static const char* FUNC_4(const char* VAR_0)
{
    size_t const VAR_1 = FUNC_3(VAR_0);
    size_t const VAR_2 = VAR_1 + 5;
    void* VAR_3 = FUNC_0(VAR_2);
    FUNC_1(VAR_3, 0, VAR_2);
    FUNC_2(VAR_3, VAR_0);
    FUNC_2(VAR_3, ".zst");
    return (const char*)VAR_3;
}
