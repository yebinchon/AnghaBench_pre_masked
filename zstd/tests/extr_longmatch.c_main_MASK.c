
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int params ;
typedef int match ;
struct TYPE_7__ {int windowLog; int chainLog; int hashLog; int searchLog; int minMatch; int targetLength; int strategy; } ;
struct TYPE_8__ {TYPE_1__ cParams; } ;
typedef TYPE_2__ ZSTD_parameters ;
struct TYPE_9__ {char* member_0; int member_1; int member_2; } ;
typedef TYPE_3__ ZSTD_outBuffer ;
typedef int ZSTD_CStream ;
typedef int U64 ;


 int FUNC_0 (int) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 size_t FUNC_2 (int *,int *,int ,TYPE_2__,int ) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__,char*,size_t const) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (char*) ;
 size_t const FUNC_9 () ;

int FUNC_10(int VAR_1, const char** VAR_2)
{
  ZSTD_CStream* VAR_3;
  ZSTD_parameters VAR_4;
  size_t VAR_5;
  unsigned VAR_6;
  (void)VAR_1;
  (void)VAR_2;

  VAR_3 = FUNC_1();
  if (!VAR_3) { return 1; }

  FUNC_7(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.cParams.windowLog = 18;
  VAR_4.cParams.chainLog = 13;
  VAR_4.cParams.hashLog = 14;
  VAR_4.cParams.searchLog = 1;
  VAR_4.cParams.minMatch = 7;
  VAR_4.cParams.targetLength = 16;
  VAR_4.cParams.strategy = VAR_0;
  VAR_6 = VAR_4.cParams.windowLog;

  VAR_5 = FUNC_2(VAR_3, ((void*)0), 0, VAR_4, 0);
  if (FUNC_3(VAR_5)) { return 2; }
  {
    U64 VAR_7 = 0;
    const U64 VAR_8 = ((U64)1) << 33;
    const size_t VAR_9 = 1 << VAR_6;
    size_t VAR_10 = 0;
    char *VAR_11 = (char*) FUNC_6(1 << VAR_6);
    char *VAR_12 = (char*) FUNC_6(FUNC_0(1 << VAR_6));
    ZSTD_outBuffer VAR_13 = { VAR_12, FUNC_0(1 << VAR_6), 0 };
    const char VAR_14[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const size_t VAR_15 = (1 << VAR_6) - 2*sizeof(VAR_14);
    size_t VAR_16;
    FUNC_8("\n ===   Long Match Test   === \n");
    FUNC_8("Creating random data to produce long matches \n");
    for (VAR_16 = 0; VAR_16 < sizeof(VAR_14); ++VAR_16) {
      VAR_11[VAR_16] = VAR_14[VAR_16];
    }
    for (VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16) {
      VAR_11[sizeof(VAR_14) + VAR_16] = (char)(FUNC_9() & 0xFF);
    }
    for (VAR_16 = 0; VAR_16 < sizeof(VAR_14); ++VAR_16) {
      VAR_11[sizeof(VAR_14) + VAR_15 + VAR_16] = VAR_14[VAR_16];
    }
    FUNC_8("Compressing, trying to generate a segfault \n");
    if (FUNC_4(VAR_3, VAR_13, VAR_11, VAR_9)) {
      return 1;
    }
    VAR_7 += VAR_9;
    while (VAR_7 < VAR_8) {
      const size_t VAR_17 = FUNC_9() % (VAR_9 - VAR_10 + 1);
      if (VAR_10 == VAR_9) { VAR_10 = 0; }
      if (FUNC_4(VAR_3, VAR_13, VAR_11 + VAR_10, VAR_17)) {
        return 1;
      }
      VAR_10 += VAR_17;
      VAR_7 += VAR_17;
    }
    FUNC_8("Compression completed successfully (no error triggered)\n");
    FUNC_5(VAR_11);
    FUNC_5(VAR_12);
  }
  return 0;
}
