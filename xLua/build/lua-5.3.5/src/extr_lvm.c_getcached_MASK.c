
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int idx; scalar_t__ instack; } ;
typedef TYPE_2__ Upvaldesc ;
struct TYPE_11__ {int * v; } ;
typedef TYPE_3__ UpVal ;
struct TYPE_13__ {TYPE_1__** upvals; } ;
struct TYPE_12__ {int sizeupvalues; TYPE_2__* upvalues; TYPE_5__* cache; } ;
struct TYPE_9__ {int * v; } ;
typedef int TValue ;
typedef int * StkId ;
typedef TYPE_4__ Proto ;
typedef TYPE_5__ LClosure ;



__attribute__((used)) static LClosure *FUNC_0 (Proto *VAR_0, UpVal **VAR_1, StkId VAR_2) {
  LClosure *VAR_3 = VAR_0->cache;
  if (VAR_3 != ((void*)0)) {
    int VAR_4 = VAR_0->sizeupvalues;
    Upvaldesc *VAR_5 = VAR_0->upvalues;
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
      TValue *VAR_7 = VAR_5[VAR_6].instack ? VAR_2 + VAR_5[VAR_6].idx : VAR_1[VAR_5[VAR_6].idx]->v;
      if (VAR_3->upvals[VAR_6]->v != VAR_7)
        return ((void*)0);
    }
  }
  return VAR_3;
}
