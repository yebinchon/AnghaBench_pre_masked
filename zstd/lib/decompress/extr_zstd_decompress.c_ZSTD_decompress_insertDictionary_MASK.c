
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int litEntropy; int fseEntropy; int entropy; void* dictID; } ;
typedef TYPE_1__ ZSTD_DCtx ;
typedef scalar_t__ U32 ;


 void* FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_2 (size_t const) ;
 size_t FUNC_3 (int *,void const*,size_t) ;
 size_t FUNC_4 (TYPE_1__*,void const*,size_t) ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_5(ZSTD_DCtx* VAR_3, const void* VAR_4, size_t VAR_5)
{
    if (VAR_5 < 8) return FUNC_4(VAR_3, VAR_4, VAR_5);
    { U32 const VAR_6 = FUNC_0(VAR_4);
        if (VAR_6 != VAR_1) {
            return FUNC_4(VAR_3, VAR_4, VAR_5);
    } }
    VAR_3->dictID = FUNC_0((const char*)VAR_4 + VAR_0);


    { size_t const VAR_7 = FUNC_3(&VAR_3->entropy, VAR_4, VAR_5);
        FUNC_1(FUNC_2(VAR_7), VAR_2);
        VAR_4 = (const char*)VAR_4 + VAR_7;
        VAR_5 -= VAR_7;
    }
    VAR_3->litEntropy = VAR_3->fseEntropy = 1;


    return FUNC_4(VAR_3, VAR_4, VAR_5);
}
