
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 size_t FUNC_2 (void*,size_t,int const*,size_t,int ) ;
 size_t FUNC_3 (int ,void const*,size_t) ;

__attribute__((used)) static size_t FUNC_4 (void* VAR_3, size_t VAR_4, const void* VAR_5, size_t VAR_6)
{
    FUNC_1(VAR_0, VAR_2);
    const BYTE* VAR_7 = (const BYTE*) VAR_5;
    size_t VAR_8;

    VAR_8 = FUNC_3 (VAR_0, VAR_5, VAR_6);
    if (FUNC_0(VAR_8)) return VAR_8;
    if (VAR_8 >= VAR_6) return (size_t)-VAR_1;
    VAR_7 += VAR_8;
    VAR_6 -= VAR_8;

    return FUNC_2 (VAR_3, VAR_4, VAR_7, VAR_6, VAR_0);
}
