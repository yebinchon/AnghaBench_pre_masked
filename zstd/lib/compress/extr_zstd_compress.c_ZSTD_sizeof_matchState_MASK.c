
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_optimal_t ;
typedef int ZSTD_match_t ;
struct TYPE_3__ {scalar_t__ strategy; size_t chainLog; size_t hashLog; int minMatch; int windowLog; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
typedef int U32 ;


 int FUNC_0 (int,char*,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t FUNC_2 (int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static size_t
FUNC_3(const ZSTD_compressionParameters* const VAR_8,
                       const U32 VAR_9)
{
    size_t const VAR_10 = (VAR_8->strategy == VAR_7) ? 0 : ((size_t)1 << VAR_8->chainLog);
    size_t const VAR_11 = ((size_t)1) << VAR_8->hashLog;
    U32 const VAR_12 = (VAR_9 && VAR_8->minMatch==3) ? FUNC_1(VAR_4, VAR_8->windowLog) : 0;
    size_t const VAR_13 = VAR_12 ? ((size_t)1) << VAR_12 : 0;


    size_t const VAR_14 = VAR_10 * sizeof(U32)
                            + VAR_11 * sizeof(U32)
                            + VAR_13 * sizeof(U32);
    size_t const VAR_15 =
        FUNC_2((VAR_2+1) * sizeof(U32))
      + FUNC_2((VAR_1+1) * sizeof(U32))
      + FUNC_2((VAR_3+1) * sizeof(U32))
      + FUNC_2((1<<VAR_0) * sizeof(U32))
      + FUNC_2((VAR_5+1) * sizeof(ZSTD_match_t))
      + FUNC_2((VAR_5+1) * sizeof(ZSTD_optimal_t));
    size_t const VAR_16 = (VAR_9 && (VAR_8->strategy >= VAR_6))
                                ? VAR_15
                                : 0;
    FUNC_0(4, "chainSize: %u - hSize: %u - h3Size: %u",
                (U32)VAR_10, (U32)VAR_11, (U32)VAR_13);
    return VAR_14 + VAR_16;
}
