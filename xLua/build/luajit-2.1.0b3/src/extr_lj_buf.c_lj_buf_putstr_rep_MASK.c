
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef char uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ len; } ;
typedef int SBuf ;
typedef scalar_t__ MSize ;
typedef TYPE_1__ GCstr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 char* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (TYPE_1__*) ;

SBuf *FUNC_6(SBuf *VAR_1, GCstr *VAR_2, int32_t VAR_3)
{
  MSize VAR_4 = VAR_2->len;
  if (VAR_3 > 0 && VAR_4) {
    uint64_t VAR_5 = (uint64_t)VAR_3 * VAR_4;
    char *VAR_6;
    if (FUNC_0(VAR_5 > VAR_0))
      FUNC_2(FUNC_3(VAR_1));
    VAR_6 = FUNC_1(VAR_1, (MSize)VAR_5);
    if (VAR_4 == 1) {
      uint32_t VAR_7 = FUNC_5(VAR_2)[0];
      do { *VAR_6++ = VAR_7; } while (--VAR_3 > 0);
    } else {
      const char *VAR_8 = FUNC_5(VAR_2) + VAR_4;
      do {
 const char *VAR_9 = FUNC_5(VAR_2);
 do { *VAR_6++ = *VAR_9++; } while (VAR_9 < VAR_8);
      } while (--VAR_3 > 0);
    }
    FUNC_4(VAR_1, VAR_6);
  }
  return VAR_1;
}
