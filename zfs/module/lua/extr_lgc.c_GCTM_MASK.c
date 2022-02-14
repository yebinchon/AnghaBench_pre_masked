
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ top; int allowhook; } ;
typedef TYPE_1__ lua_State ;
typedef int lu_byte ;
struct TYPE_15__ {int gcrunning; } ;
typedef TYPE_2__ global_State ;
typedef int const TValue ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int const* FUNC_4 (TYPE_1__*,int const*,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int const*,int ) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int const*) ;
 char* FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_12 (lua_State *VAR_5, int VAR_6) {
  global_State *VAR_7 = FUNC_0(VAR_5);
  const TValue *VAR_8;
  TValue VAR_9;
  FUNC_6(VAR_5, &VAR_9, FUNC_11(VAR_7));
  VAR_8 = FUNC_4(VAR_5, &VAR_9, VAR_3);
  if (VAR_8 != ((void*)0) && FUNC_9(VAR_8)) {
    int VAR_10;
    lu_byte VAR_11 = VAR_5->allowhook;
    int VAR_12 = VAR_7->gcrunning;
    VAR_5->allowhook = 0;
    VAR_7->gcrunning = 0;
    FUNC_7(VAR_5, VAR_5->top, VAR_8);
    FUNC_7(VAR_5, VAR_5->top + 1, &VAR_9);
    VAR_5->top += 2;
    VAR_10 = FUNC_1(VAR_5, VAR_4, ((void*)0), FUNC_5(VAR_5, VAR_5->top - 2), 0);
    VAR_5->allowhook = VAR_11;
    VAR_7->gcrunning = VAR_12;
    if (VAR_10 != VAR_2 && VAR_6) {
      if (VAR_10 == VAR_1) {
        const char *VAR_13 = (FUNC_10(VAR_5->top - 1))
                            ? FUNC_8(VAR_5->top - 1)
                            : "no message";
        FUNC_3(VAR_5, "error in __gc metamethod (%s)", VAR_13);
        VAR_10 = VAR_0;
      }
      FUNC_2(VAR_5, VAR_10);
    }
  }
}
