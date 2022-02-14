
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
typedef TYPE_1__ GCstr ;
typedef int BCLine ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char const*,size_t) ;

void FUNC_3(char *VAR_1, GCstr *VAR_2, BCLine VAR_3)
{
  const char *VAR_4 = FUNC_1(VAR_2);
  if (*VAR_4 == '=') {
    FUNC_2(VAR_1, VAR_4+1, VAR_0);
    VAR_1[VAR_0-1] = '\0';
  } else if (*VAR_4 == '@') {
    size_t VAR_5 = VAR_2->len-1;
    VAR_4++;
    if (VAR_5 >= VAR_0) {
      VAR_4 += VAR_5-(VAR_0-4);
      *VAR_1++ = '.'; *VAR_1++ = '.'; *VAR_1++ = '.';
    }
    FUNC_0(VAR_1, VAR_4);
  } else {
    size_t VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_0-12; VAR_6++)
      if (((const unsigned char *)VAR_4)[VAR_6] < ' ') break;
    FUNC_0(VAR_1, VAR_3 == ~(BCLine)0 ? "[builtin:" : "[string \""); VAR_1 += 9;
    if (VAR_4[VAR_6] != '\0') {
      if (VAR_6 > VAR_0-15) VAR_6 = VAR_0-15;
      FUNC_2(VAR_1, VAR_4, VAR_6); VAR_1 += VAR_6;
      FUNC_0(VAR_1, "..."); VAR_1 += 3;
    } else {
      FUNC_0(VAR_1, VAR_4); VAR_1 += VAR_6;
    }
    FUNC_0(VAR_1, VAR_3 == ~(BCLine)0 ? "]" : "\"]");
  }
}
