
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_outBuffer ;
struct TYPE_3__ {void const* member_0; size_t member_1; scalar_t__ pos; scalar_t__ size; int member_2; } ;
typedef TYPE_1__ ZSTD_inBuffer ;
typedef int ZSTD_CStream ;


 size_t FUNC_0 (int *,int *,TYPE_1__*) ;
 size_t FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (size_t const) ;

__attribute__((used)) static int
FUNC_3(ZSTD_CStream *VAR_0, ZSTD_outBuffer VAR_1, const void *VAR_2, size_t VAR_3)
{
  ZSTD_inBuffer VAR_4 = { VAR_2, VAR_3, 0 };
  while (VAR_4.pos < VAR_4.size) {
    ZSTD_outBuffer VAR_5 = VAR_1;
    const size_t VAR_6 = FUNC_0(VAR_0, &VAR_5, &VAR_4);
    if (FUNC_2(VAR_6)) return 1;
  }
  { ZSTD_outBuffer VAR_7 = VAR_1;
    const size_t VAR_8 = FUNC_1(VAR_0, &VAR_7);
    if (VAR_8 != 0) { return 1; }
  }
  return 0;
}
