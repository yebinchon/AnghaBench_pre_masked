
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t k; size_t d; } ;
typedef TYPE_1__ ZDICT_fastCover_params_t ;
typedef size_t U32 ;
struct TYPE_11__ {size_t const nbDmers; scalar_t__ samples; } ;
struct TYPE_10__ {scalar_t__ score; scalar_t__ begin; scalar_t__ end; } ;
typedef TYPE_2__ FASTCOVER_segment_t ;
typedef TYPE_3__ FASTCOVER_ctx_t ;
typedef int BYTE ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*,size_t) ;
 TYPE_2__ FUNC_2 (TYPE_3__ const*,size_t*,size_t const,size_t const,TYPE_1__) ;
 size_t FUNC_3 (int,size_t) ;
 size_t FUNC_4 (scalar_t__,size_t) ;
 int FUNC_5 (int * const,scalar_t__,size_t) ;

__attribute__((used)) static size_t FUNC_6(const FASTCOVER_ctx_t *VAR_0, U32 *VAR_1,
                                    void *VAR_2,
                                    size_t VAR_3,
                                    ZDICT_fastCover_params_t VAR_4){
  BYTE *const VAR_5 = (BYTE *)VAR_2;
  size_t VAR_6 = VAR_3;



  const U32 VAR_7 = FUNC_3(1, (U32)(VAR_3 / VAR_4.k));
  const U32 VAR_8 = (U32)(VAR_0->nbDmers / VAR_7);
  size_t VAR_9;
  FUNC_0(2, "Breaking content into %u epochs of size %u\n", VAR_7,
               VAR_8);



  for (VAR_9 = 0; VAR_6 > 0; VAR_9 = (VAR_9 + 1) % VAR_7) {
    const U32 VAR_10 = (U32)(VAR_9 * VAR_8);
    const U32 VAR_11 = VAR_10 + VAR_8;
    size_t VAR_12;

    FASTCOVER_segment_t VAR_13 = FUNC_2(
        VAR_0, VAR_1, VAR_10, VAR_11, VAR_4);


    if (VAR_13.score == 0) {
      break;
    }


    VAR_12 = FUNC_4(VAR_13.end - VAR_13.begin + VAR_4.d - 1, VAR_6);
    if (VAR_12 < VAR_4.d) {
      break;
    }




    VAR_6 -= VAR_12;
    FUNC_5(VAR_5 + VAR_6, VAR_0->samples + VAR_13.begin, VAR_12);
    FUNC_1(
        2, "\r%u%%       ",
        (U32)(((VAR_3 - VAR_6) * 100) / VAR_3));
  }
  FUNC_0(2, "\r%79s\r", "");
  return VAR_6;
}
