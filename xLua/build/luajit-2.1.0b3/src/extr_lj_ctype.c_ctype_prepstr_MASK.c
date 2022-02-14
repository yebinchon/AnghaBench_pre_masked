
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pb; char* buf; int needsp; scalar_t__ ok; } ;
typedef int MSize ;
typedef TYPE_1__ CTRepr ;



__attribute__((used)) static void FUNC_0(CTRepr *VAR_0, const char *VAR_1, MSize VAR_2)
{
  char *VAR_3 = VAR_0->pb;
  if (VAR_0->buf + VAR_2+1 > VAR_3) { VAR_0->ok = 0; return; }
  if (VAR_0->needsp) *--VAR_3 = ' ';
  VAR_0->needsp = 1;
  VAR_3 -= VAR_2;
  while (VAR_2-- > 0) VAR_3[VAR_2] = VAR_1[VAR_2];
  VAR_0->pb = VAR_3;
}
