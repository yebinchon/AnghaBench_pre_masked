
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ZSTD_DDict ;
struct TYPE_7__ {size_t staticSize; int format; } ;
typedef TYPE_1__ ZSTD_DCtx ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (size_t const) ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (size_t,int ,char*) ;
 void* FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_6 (TYPE_1__*,void*) ;
 size_t const FUNC_7 (TYPE_1__*,int const*) ;
 size_t const FUNC_8 (TYPE_1__*,void const*,size_t) ;
 size_t FUNC_9 (TYPE_1__*,void*,size_t,void const**,size_t*) ;
 size_t FUNC_10 (void*,size_t,void const*,size_t const,void const*,size_t) ;
 scalar_t__ VAR_3 ;
 size_t FUNC_11 (void const*,size_t) ;
 scalar_t__ FUNC_12 (size_t const) ;
 scalar_t__ FUNC_13 (size_t const) ;
 scalar_t__ FUNC_14 (void const*,size_t) ;
 size_t FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int VAR_4 ;
 size_t FUNC_17 (void const*,size_t) ;
 int VAR_5 ;

__attribute__((used)) static size_t FUNC_18(ZSTD_DCtx* VAR_6,
                                        void* VAR_7, size_t VAR_8,
                                  const void* VAR_9, size_t VAR_10,
                                  const void* VAR_11, size_t VAR_12,
                                  const ZSTD_DDict* VAR_13)
{
    void* const VAR_14 = VAR_7;
    int VAR_15 = 0;

    FUNC_0(5, "ZSTD_decompressMultiFrame");
    FUNC_16(VAR_11==((void*)0) || VAR_13==((void*)0));

    if (VAR_13) {
        VAR_11 = FUNC_4(VAR_13);
        VAR_12 = FUNC_5(VAR_13);
    }

    while (VAR_10 >= FUNC_15(VAR_6->format)) {
        { U32 const VAR_16 = FUNC_2(VAR_9);
            FUNC_0(4, "reading magic number %08X (expecting %08X)",
                        (unsigned)VAR_16, VAR_0);
            if ((VAR_16 & VAR_1) == VAR_2) {
                size_t const VAR_17 = FUNC_17(VAR_9, VAR_10);
                FUNC_1(VAR_17);
                FUNC_16(VAR_17 <= VAR_10);

                VAR_9 = (const BYTE *)VAR_9 + VAR_17;
                VAR_10 -= VAR_17;
                continue;
        } }

        if (VAR_13) {

            FUNC_1(FUNC_7(VAR_6, VAR_13));
        } else {


            FUNC_1(FUNC_8(VAR_6, VAR_11, VAR_12));
        }
        FUNC_6(VAR_6, VAR_7);

        { const size_t VAR_18 = FUNC_9(VAR_6, VAR_7, VAR_8,
                                                    &VAR_9, &VAR_10);
            FUNC_3(
                (FUNC_12(VAR_18) == VAR_3)
             && (VAR_15==1),
                VAR_5,
                "at least one frame successfully completed, but following "
                "bytes are garbage: it's more likely to be a srcSize error, "
                "specifying more bytes than compressed size of frame(s). This "
                "error message replaces ERROR(prefix_unknown), which would be "
                "confusing, as the first header is actually correct. Note that "
                "one could be unlucky, it might be a corruption error instead, "
                "happening right at the place where we expect zstd magic "
                "bytes. But this is _much_ less likely than a srcSize field "
                "error.");
            if (FUNC_13(VAR_18)) return VAR_18;
            FUNC_16(VAR_18 <= VAR_8);
            VAR_7 = (BYTE*)VAR_7 + VAR_18;
            VAR_8 -= VAR_18;
        }
        VAR_15 = 1;
    }

    FUNC_3(VAR_10, VAR_5, "input not entirely consumed");

    return (BYTE*)VAR_7 - (BYTE*)VAR_14;
}
