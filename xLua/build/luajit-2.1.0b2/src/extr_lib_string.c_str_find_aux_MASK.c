
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ top; scalar_t__ base; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ int32_t ;
struct TYPE_14__ {scalar_t__ len; } ;
struct TYPE_13__ {char const* src_init; char const* src_end; scalar_t__ depth; scalar_t__ level; TYPE_1__* L; } ;
typedef TYPE_2__ MatchState ;
typedef scalar_t__ MSize ;
typedef TYPE_3__ GCstr ;


 TYPE_3__* FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int) ;
 char* FUNC_2 (char const*,char const*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 char* FUNC_4 (TYPE_2__*,char const*,char const*) ;
 int FUNC_5 (TYPE_2__*,char const*,char const*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 char const* FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_0, int VAR_1)
{
  GCstr *VAR_2 = FUNC_0(VAR_0, 1);
  GCstr *VAR_3 = FUNC_0(VAR_0, 2);
  int32_t VAR_4 = FUNC_1(VAR_0, 3, 1);
  MSize VAR_5;
  if (VAR_4 < 0) VAR_4 += (int32_t)VAR_2->len; else VAR_4--;
  if (VAR_4 < 0) VAR_4 = 0;
  VAR_5 = (MSize)VAR_4;
  if (VAR_5 > VAR_2->len) {




    VAR_5 = VAR_2->len;

  }
  if (VAR_1 && ((VAR_0->base+3 < VAR_0->top && FUNC_9(VAR_0->base+3)) ||
        !FUNC_3(VAR_3))) {
    const char *VAR_6 = FUNC_2(FUNC_8(VAR_2)+VAR_5, FUNC_8(VAR_3), VAR_2->len-VAR_5, VAR_3->len);
    if (VAR_6) {
      FUNC_6(VAR_0->top-2, (int32_t)(VAR_6-FUNC_8(VAR_2)) + 1);
      FUNC_6(VAR_0->top-1, (int32_t)(VAR_6-FUNC_8(VAR_2)) + (int32_t)VAR_3->len);
      return 2;
    }
  } else {
    MatchState VAR_7;
    const char *VAR_8 = FUNC_8(VAR_3);
    const char *VAR_9 = FUNC_8(VAR_2) + VAR_5;
    int VAR_10 = 0;
    if (*VAR_8 == '^') { VAR_8++; VAR_10 = 1; }
    VAR_7.L = VAR_0;
    VAR_7.src_init = FUNC_8(VAR_2);
    VAR_7.src_end = FUNC_8(VAR_2) + VAR_2->len;
    do {
      const char *VAR_11;
      VAR_7.level = VAR_7.depth = 0;
      VAR_11 = FUNC_4(&VAR_7, VAR_9, VAR_8);
      if (VAR_11) {
 if (VAR_1) {
   FUNC_6(VAR_0->top++, (int32_t)(VAR_9-(FUNC_8(VAR_2)-1)));
   FUNC_6(VAR_0->top++, (int32_t)(VAR_11-FUNC_8(VAR_2)));
   return FUNC_5(&VAR_7, ((void*)0), ((void*)0)) + 2;
 } else {
   return FUNC_5(&VAR_7, VAR_9, VAR_11);
 }
      }
    } while (VAR_9++ < VAR_7.src_end && !VAR_10);
  }
  FUNC_7(VAR_0->top-1);
  return 1;
}
