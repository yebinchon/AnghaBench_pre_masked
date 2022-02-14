
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_19__ {int weak; } ;
struct TYPE_20__ {TYPE_1__ gc; } ;
typedef TYPE_2__ global_State ;
typedef int cTValue ;
struct TYPE_23__ {TYPE_4__* finalizer; } ;
struct TYPE_22__ {int marked; scalar_t__ asize; scalar_t__ hmask; int node; int gclist; int metatable; } ;
struct TYPE_21__ {int val; int key; } ;
typedef TYPE_3__ Node ;
typedef scalar_t__ MSize ;
typedef TYPE_4__ GCtab ;
typedef TYPE_5__ CTState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_4__*,scalar_t__) ;
 TYPE_5__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int * FUNC_4 (TYPE_2__*,TYPE_4__*,int ) ;
 int FUNC_5 (int) ;
 TYPE_3__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 char* FUNC_10 (int *) ;
 TYPE_4__* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(global_State *VAR_4, GCtab *VAR_5)
{
  int VAR_6 = 0;
  cTValue *VAR_7;
  GCtab *VAR_8 = FUNC_11(VAR_5->metatable);
  if (VAR_8)
    FUNC_2(VAR_4, VAR_8);
  VAR_7 = FUNC_4(VAR_4, VAR_8, VAR_3);
  if (VAR_7 && FUNC_13(VAR_7)) {
    const char *VAR_9 = FUNC_10(VAR_7);
    int VAR_10;
    while ((VAR_10 = *VAR_9++)) {
      if (VAR_10 == 'k') VAR_6 |= VAR_1;
      else if (VAR_10 == 'v') VAR_6 |= VAR_2;
    }
    if (VAR_6) {






      {
 VAR_5->marked = (uint8_t)((VAR_5->marked & ~VAR_0) | VAR_6);
 FUNC_9(VAR_5->gclist, VAR_4->gc.weak);
 FUNC_8(VAR_4->gc.weak, FUNC_7(VAR_5));
      }
    }
  }
  if (VAR_6 == VAR_0)
    return 1;
  if (!(VAR_6 & VAR_2)) {
    MSize VAR_11, VAR_12 = VAR_5->asize;
    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
      FUNC_3(VAR_4, FUNC_0(VAR_5, VAR_11));
  }
  if (VAR_5->hmask > 0) {
    Node *VAR_13 = FUNC_6(VAR_5->node);
    MSize VAR_14, VAR_15 = VAR_5->hmask;
    for (VAR_14 = 0; VAR_14 <= VAR_15; VAR_14++) {
      Node *VAR_16 = &VAR_13[VAR_14];
      if (!FUNC_12(&VAR_16->val)) {
 FUNC_5(!FUNC_12(&VAR_16->key));
 if (!(VAR_6 & VAR_1)) FUNC_3(VAR_4, &VAR_16->key);
 if (!(VAR_6 & VAR_2)) FUNC_3(VAR_4, &VAR_16->val);
      }
    }
  }
  return VAR_6;
}
