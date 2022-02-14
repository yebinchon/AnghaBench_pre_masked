
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ contentSizeFlag; } ;
struct TYPE_8__ {TYPE_1__ fParams; } ;
struct TYPE_9__ {scalar_t__ pledgedSrcSizePlusOne; scalar_t__ consumedSrcSize; TYPE_2__ appliedParams; } ;
typedef TYPE_3__ ZSTD_CCtx ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (size_t const) ;
 int FUNC_2 (int,int ,char*,unsigned int,unsigned int) ;
 unsigned long long VAR_0 ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (TYPE_3__*,void*,size_t,void const*,size_t,int,int) ;
 size_t FUNC_5 (TYPE_3__*,char*,size_t const) ;
 int FUNC_6 (int) ;
 int VAR_1 ;

size_t FUNC_7 (ZSTD_CCtx* VAR_2,
                         void* VAR_3, size_t VAR_4,
                   const void* VAR_5, size_t VAR_6)
{
    size_t VAR_7;
    size_t const VAR_8 = FUNC_4(VAR_2,
                                VAR_3, VAR_4, VAR_5, VAR_6,
                                1 , 1 );
    FUNC_1(VAR_8);
    VAR_7 = FUNC_5(VAR_2, (char*)VAR_3 + VAR_8, VAR_4-VAR_8);
    FUNC_1(VAR_7);
    FUNC_6(!(VAR_2->appliedParams.fParams.contentSizeFlag && VAR_2->pledgedSrcSizePlusOne == 0));
    if (VAR_2->pledgedSrcSizePlusOne != 0) {
        FUNC_3(VAR_0 == (unsigned long long)-1);
        FUNC_0(4, "end of frame : controlling src size");
        FUNC_2(
            VAR_2->pledgedSrcSizePlusOne != VAR_2->consumedSrcSize+1,
            VAR_1,
             "error : pledgedSrcSize = %u, while realSrcSize = %u",
            (unsigned)VAR_2->pledgedSrcSizePlusOne-1,
            (unsigned)VAR_2->consumedSrcSize);
    }
    return VAR_8 + VAR_7;
}
