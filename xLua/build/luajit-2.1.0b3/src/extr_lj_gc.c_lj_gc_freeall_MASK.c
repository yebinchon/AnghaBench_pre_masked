
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int currentwhite; int root; } ;
struct TYPE_6__ {size_t strmask; int * strhash; TYPE_1__ gc; } ;
typedef TYPE_2__ global_State ;
typedef size_t MSize ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;

void FUNC_1(global_State *VAR_2)
{
  MSize VAR_3, VAR_4;

  VAR_2->gc.currentwhite = VAR_1 | VAR_0;
  FUNC_0(VAR_2, &VAR_2->gc.root);
  VAR_4 = VAR_2->strmask;
  for (VAR_3 = 0; VAR_3 <= VAR_4; VAR_3++)
    FUNC_0(VAR_2, &VAR_2->strhash[VAR_3]);
}
