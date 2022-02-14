
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int d; int k; } ;
typedef TYPE_1__ ZDICT_cover_params_t ;
typedef size_t U32 ;
struct TYPE_14__ {int samples; scalar_t__ suffixSize; } ;
struct TYPE_13__ {int num; size_t size; } ;
struct TYPE_12__ {scalar_t__ score; int end; int begin; } ;
typedef TYPE_2__ COVER_segment_t ;
typedef int COVER_map_t ;
typedef TYPE_3__ COVER_epoch_info_t ;
typedef TYPE_4__ COVER_ctx_t ;
typedef int BYTE ;


 TYPE_3__ FUNC_0 (size_t,size_t,int ,int) ;
 TYPE_2__ FUNC_1 (TYPE_4__ const*,size_t*,int *,size_t const,size_t const,TYPE_1__) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,char*,unsigned int) ;
 size_t FUNC_4 (int,size_t) ;
 size_t FUNC_5 (int,size_t) ;
 int FUNC_6 (int * const,int,size_t) ;

__attribute__((used)) static size_t FUNC_7(const COVER_ctx_t *VAR_0, U32 *VAR_1,
                                    COVER_map_t *VAR_2, void *VAR_3,
                                    size_t VAR_4,
                                    ZDICT_cover_params_t VAR_5) {
  BYTE *const VAR_6 = (BYTE *)VAR_3;
  size_t VAR_7 = VAR_4;

  const COVER_epoch_info_t VAR_8 = FUNC_0(
      (U32)VAR_4, (U32)VAR_0->suffixSize, VAR_5.k, 4);
  const size_t VAR_9 = FUNC_4(10, FUNC_5(100, VAR_8.num >> 3));
  size_t VAR_10 = 0;
  size_t VAR_11;
  FUNC_2(2, "Breaking content into %u epochs of size %u\n",
                (U32)VAR_8.num, (U32)VAR_8.size);



  for (VAR_11 = 0; VAR_7 > 0; VAR_11 = (VAR_11 + 1) % VAR_8.num) {
    const U32 VAR_12 = (U32)(VAR_11 * VAR_8.size);
    const U32 VAR_13 = VAR_12 + VAR_8.size;
    size_t VAR_14;

    COVER_segment_t VAR_15 = FUNC_1(
        VAR_0, VAR_1, VAR_2, VAR_12, VAR_13, VAR_5);



    if (VAR_15.score == 0) {
      if (++VAR_10 >= VAR_9) {
          break;
      }
      continue;
    }
    VAR_10 = 0;

    VAR_14 = FUNC_5(VAR_15.end - VAR_15.begin + VAR_5.d - 1, VAR_7);
    if (VAR_14 < VAR_5.d) {
      break;
    }



    VAR_7 -= VAR_14;
    FUNC_6(VAR_6 + VAR_7, VAR_0->samples + VAR_15.begin, VAR_14);
    FUNC_3(
        2, "\r%u%%       ",
        (unsigned)(((VAR_4 - VAR_7) * 100) / VAR_4));
  }
  FUNC_2(2, "\r%79s\r", "");
  return VAR_7;
}
