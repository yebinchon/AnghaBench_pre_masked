
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {char* pb; char* buf; scalar_t__ needsp; scalar_t__ ok; } ;
typedef TYPE_1__ CTRepr ;



__attribute__((used)) static void FUNC_0(CTRepr *VAR_0, uint32_t VAR_1)
{
  char *VAR_2 = VAR_0->pb;
  if (VAR_0->buf + 10+1 > VAR_2) { VAR_0->ok = 0; return; }
  do { *--VAR_2 = (char)('0' + VAR_1 % 10); } while (VAR_1 /= 10);
  VAR_0->pb = VAR_2;
  VAR_0->needsp = 0;
}
