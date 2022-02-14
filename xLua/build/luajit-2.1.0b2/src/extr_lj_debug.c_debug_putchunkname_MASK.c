
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int firstline; } ;
struct TYPE_8__ {int len; } ;
typedef int SBuf ;
typedef int MSize ;
typedef TYPE_1__ GCstr ;
typedef TYPE_2__ GCproto ;
typedef int BCLine ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(SBuf *VAR_0, GCproto *VAR_1, int VAR_2)
{
  GCstr *VAR_3 = FUNC_3(VAR_1);
  const char *VAR_4 = FUNC_4(VAR_3);
  if (VAR_1->firstline == ~(BCLine)0) {
    FUNC_1(VAR_0, "[builtin:", 9);
    FUNC_2(VAR_0, VAR_3);
    FUNC_0(VAR_0, ']');
    return 0;
  }
  if (*VAR_4 == '=' || *VAR_4 == '@') {
    MSize VAR_5 = VAR_3->len-1;
    VAR_4++;
    if (VAR_2) {
      int VAR_6;
      for (VAR_6 = VAR_5-1; VAR_6 >= 0; VAR_6--)
 if (VAR_4[VAR_6] == '/' || VAR_4[VAR_6] == '\\') {
   VAR_5 -= VAR_6+1;
   VAR_4 = VAR_4+VAR_6+1;
   break;
 }
    }
    FUNC_1(VAR_0, VAR_4, VAR_5);
  } else {
    FUNC_1(VAR_0, "[string]", 8);
  }
  return 1;
}
