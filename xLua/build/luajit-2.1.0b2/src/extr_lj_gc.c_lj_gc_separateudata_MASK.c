
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int mmudata; } ;
struct TYPE_19__ {TYPE_2__ gc; } ;
typedef TYPE_3__ global_State ;
struct TYPE_22__ {int nextgc; } ;
struct TYPE_21__ {int metatable; } ;
struct TYPE_17__ {int nextgc; } ;
struct TYPE_20__ {TYPE_1__ gch; } ;
typedef TYPE_4__ GCobj ;
typedef int GCRef ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 TYPE_8__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (int ) ;

size_t FUNC_11(global_State *VAR_1, int VAR_2)
{
  size_t VAR_3 = 0;
  GCRef *VAR_4 = &FUNC_5(VAR_1)->nextgc;
  GCobj *VAR_5;
  while ((VAR_5 = FUNC_1(*VAR_4)) != ((void*)0)) {
    if (!(FUNC_3(VAR_5) || VAR_2) || FUNC_2(FUNC_0(VAR_5))) {
      VAR_4 = &VAR_5->gch.nextgc;
    } else if (!FUNC_4(VAR_1, FUNC_10(FUNC_0(VAR_5)->metatable), VAR_0)) {
      FUNC_6(VAR_5);
      VAR_4 = &VAR_5->gch.nextgc;
    } else {
      VAR_3 += FUNC_9(FUNC_0(VAR_5));
      FUNC_6(VAR_5);
      *VAR_4 = VAR_5->gch.nextgc;
      if (FUNC_1(VAR_1->gc.mmudata)) {
 GCobj *VAR_6 = FUNC_1(VAR_1->gc.mmudata);
 FUNC_8(VAR_5->gch.nextgc, VAR_6->gch.nextgc);
 FUNC_7(VAR_6->gch.nextgc, VAR_5);
 FUNC_7(VAR_1->gc.mmudata, VAR_5);
      } else {
 FUNC_7(VAR_5->gch.nextgc, VAR_5);
 FUNC_7(VAR_1->gc.mmudata, VAR_5);
      }
    }
  }
  return VAR_3;
}
