
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char tok; TYPE_1__* ct; } ;
struct TYPE_4__ {int info; } ;
typedef TYPE_2__ CPState ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(CPState *VAR_3)
{
  if (VAR_3->tok >= VAR_0 && VAR_3->tok <= VAR_2) return 1;
  if (VAR_3->tok == VAR_1 && FUNC_0(VAR_3->ct->info)) return 1;
  if (VAR_3->tok == '$') return 1;
  return 0;
}
