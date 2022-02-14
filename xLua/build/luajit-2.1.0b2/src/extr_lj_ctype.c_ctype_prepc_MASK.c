
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; int* pb; scalar_t__ ok; } ;
typedef TYPE_1__ CTRepr ;



__attribute__((used)) static void FUNC_0(CTRepr *VAR_0, int VAR_1)
{
  if (VAR_0->buf >= VAR_0->pb) { VAR_0->ok = 0; return; }
  *--VAR_0->pb = VAR_1;
}
