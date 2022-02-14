
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long zc_hash; int zc_cd; } ;
typedef TYPE_1__ zap_cursor_t ;



void
FUNC_0(zap_cursor_t *VAR_0)
{
 if (VAR_0->zc_hash == -1ULL)
  return;
 VAR_0->zc_cd++;
}
