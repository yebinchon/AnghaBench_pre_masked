
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int savetv ;
struct TYPE_13__ {void** base; size_t maxslot; TYPE_3__* L; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_15__ {int * base; } ;
struct TYPE_14__ {void* key; void* tab; int tabv; int keyv; } ;
struct TYPE_12__ {int strempty; int tmpbuf; } ;
typedef int TValue ;
typedef void* TRef ;
typedef TYPE_2__ RecordIndex ;
typedef size_t BCReg ;


 void* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_10__* FUNC_1 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_3__*,int *,int *) ;
 void* FUNC_3 (int ,void*,void*) ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 void* FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (void*) ;
 int FUNC_13 (void*) ;

__attribute__((used)) static TRef FUNC_14(jit_State *VAR_10, BCReg VAR_11, BCReg VAR_12)
{
  TRef *VAR_13 = &VAR_10->base[VAR_12];
  TValue VAR_14[5];
  BCReg VAR_15;
  RecordIndex VAR_16;
  FUNC_6(VAR_11 < VAR_12);
  for (VAR_15 = VAR_11; VAR_15 <= VAR_12; VAR_15++)
    (void)FUNC_4(VAR_10, VAR_15);
  if (FUNC_12(VAR_13[0]) && FUNC_12(VAR_13[-1])) {
    TRef VAR_17, VAR_18, *VAR_19, *VAR_20, *VAR_21 = &VAR_10->base[VAR_11];

    for (VAR_19 = VAR_13; VAR_19 >= VAR_21; VAR_19--) {
      if (FUNC_11(*VAR_19))
 *VAR_19 = FUNC_3(FUNC_0(VAR_8, VAR_4), *VAR_19,
        FUNC_10(*VAR_19) ? VAR_2 : VAR_1);
      else if (!FUNC_13(*VAR_19))
 break;
    }
    VAR_20 = ++VAR_19;
    VAR_17 = VAR_18 = FUNC_3(FUNC_0(VAR_5, VAR_3),
        FUNC_5(VAR_10, &FUNC_1(VAR_10)->tmpbuf), VAR_0);
    do {
      VAR_17 = FUNC_3(FUNC_0(VAR_6, VAR_3), VAR_17, *VAR_19++);
    } while (VAR_19 <= VAR_13);
    VAR_17 = FUNC_3(FUNC_0(VAR_7, VAR_4), VAR_17, VAR_18);
    VAR_10->maxslot = (BCReg)(VAR_20 - VAR_10->base);
    if (VAR_20 == VAR_21) return VAR_17;

    VAR_12 = VAR_10->maxslot--;
    *VAR_20 = VAR_17;
    VAR_13 = VAR_20;
    FUNC_9(VAR_10->L, &VAR_16.keyv, &FUNC_1(VAR_10)->strempty);
  } else {
    VAR_10->maxslot = VAR_12-1;
    FUNC_2(VAR_10->L, &VAR_16.keyv, &VAR_10->L->base[VAR_12]);
  }
  FUNC_2(VAR_10->L, &VAR_16.tabv, &VAR_10->L->base[VAR_12-1]);
  VAR_16.tab = VAR_13[-1];
  VAR_16.key = VAR_13[0];
  FUNC_7(VAR_14, &VAR_10->L->base[VAR_12-1], sizeof(VAR_14));
  FUNC_8(VAR_10, &VAR_16, VAR_9);
  FUNC_7(&VAR_10->L->base[VAR_12-1], VAR_14, sizeof(VAR_14));
  return 0;
}
