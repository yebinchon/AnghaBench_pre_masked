
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef int cTValue ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_5__ {scalar_t__ len; } ;
typedef int SBuf ;
typedef scalar_t__ MSize ;
typedef int GCtab ;
typedef TYPE_1__ GCstr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,scalar_t__) ;
 char* FUNC_2 (char*,int ,scalar_t__) ;
 int * FUNC_3 (int *,int ,int ) ;
 char* FUNC_4 (char*,int ) ;
 int * FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 TYPE_3__* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;

SBuf *FUNC_14(SBuf *VAR_2, GCtab *VAR_3, GCstr *VAR_4, int32_t VAR_5, int32_t VAR_6)
{
  MSize VAR_7 = VAR_4 ? VAR_4->len : 0;
  if (VAR_5 <= VAR_6) {
    for (;;) {
      cTValue *VAR_8 = FUNC_5(VAR_3, VAR_5);
      char *VAR_9;
      if (!VAR_8) {
      badtype:
 FUNC_7(VAR_2, (void *)(intptr_t)VAR_5);
 return ((void*)0);
      } else if (FUNC_13(VAR_8)) {
 MSize VAR_10 = FUNC_8(VAR_8)->len;
 VAR_9 = FUNC_2(FUNC_1(VAR_2, VAR_10 + VAR_7), FUNC_9(VAR_8), VAR_10);
      } else if (FUNC_11(VAR_8)) {
 VAR_9 = FUNC_4(FUNC_1(VAR_2, VAR_1+VAR_7), FUNC_0(VAR_8));
      } else if (FUNC_12(VAR_8)) {
 VAR_9 = FUNC_1(FUNC_3(VAR_2, VAR_0, FUNC_6(VAR_8)), VAR_7);
      } else {
 goto badtype;
      }
      if (VAR_5++ == VAR_6) {
 FUNC_7(VAR_2, VAR_9);
 break;
      }
      if (VAR_7) VAR_9 = FUNC_2(VAR_9, FUNC_10(VAR_4), VAR_7);
      FUNC_7(VAR_2, VAR_9);
    }
  }
  return VAR_2;
}
