
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void BYTE ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (void*,size_t const,void const*,size_t const) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void const*) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_4(void* VAR_1, size_t* VAR_2,
                                const void* VAR_3, size_t VAR_4)
{
    const BYTE* VAR_5 = (const BYTE*)VAR_3;

    const size_t VAR_6 = (FUNC_3(VAR_3) & 0x1FFFFF) >> 2;
    const size_t VAR_7 = (FUNC_3(VAR_5+2) & 0xFFFFFF) >> 5;

    if (VAR_6 > *VAR_2) return FUNC_0(VAR_0);
    if (VAR_7 + 5 > VAR_4) return FUNC_0(VAR_0);

    if (FUNC_2(FUNC_1(VAR_1, VAR_6, VAR_5+5, VAR_7))) return FUNC_0(VAR_0);

    *VAR_2 = VAR_6;
    return VAR_7 + 5;
}
