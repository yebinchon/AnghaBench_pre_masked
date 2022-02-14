
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int idx; scalar_t__ instack; } ;
typedef TYPE_3__ Upvaldesc ;
struct TYPE_13__ {int * v; } ;
typedef TYPE_4__ UpVal ;
struct TYPE_11__ {TYPE_1__** upvals; } ;
struct TYPE_15__ {TYPE_2__ l; } ;
struct TYPE_14__ {int sizeupvalues; TYPE_3__* upvalues; TYPE_6__* cache; } ;
struct TYPE_10__ {int * v; } ;
typedef int TValue ;
typedef int * StkId ;
typedef TYPE_5__ Proto ;
typedef TYPE_6__ Closure ;



__attribute__((used)) static Closure *FUNC_0 (Proto *VAR_0, UpVal **VAR_1, StkId VAR_2) {
  Closure *VAR_3 = VAR_0->cache;
  if (VAR_3 != ((void*)0)) {
    int VAR_4 = VAR_0->sizeupvalues;
    Upvaldesc *VAR_5 = VAR_0->upvalues;
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
      TValue *VAR_7 = VAR_5[VAR_6].instack ? VAR_2 + VAR_5[VAR_6].idx : VAR_1[VAR_5[VAR_6].idx]->v;
      if (VAR_3->l.upvals[VAR_6]->v != VAR_7)
        return ((void*)0);
    }
  }
  return VAR_3;
}
