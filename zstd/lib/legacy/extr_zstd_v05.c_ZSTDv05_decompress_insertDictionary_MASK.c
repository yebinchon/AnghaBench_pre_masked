
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTDv05_DCtx ;
typedef scalar_t__ U32 ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (size_t) ;
 size_t FUNC_3 (int *,void const*,size_t) ;
 int FUNC_4 (int *,void const*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_5(ZSTDv05_DCtx* VAR_2, const void* VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    U32 VAR_6 = FUNC_1(VAR_3);
    if (VAR_6 != VAR_0) {

        FUNC_4(VAR_2, VAR_3, VAR_4);
        return 0;
    }

    VAR_3 = (const char*)VAR_3 + 4;
    VAR_4 -= 4;
    VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
    if (FUNC_2(VAR_5)) return FUNC_0(VAR_1);


    VAR_3 = (const char*)VAR_3 + VAR_5;
    VAR_4 -= VAR_5;
    FUNC_4(VAR_2, VAR_3, VAR_4);

    return 0;
}
