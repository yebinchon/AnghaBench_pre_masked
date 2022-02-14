
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int luaL_Buffer ;
struct TYPE_4__ {int L; } ;
typedef TYPE_1__ MatchState ;


 char const VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const) ;
 int FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int ,int,size_t*) ;
 int FUNC_5 (TYPE_1__*,char const,char const*,char const*) ;
 int FUNC_6 (char const) ;

__attribute__((used)) static void FUNC_7(MatchState *VAR_1, luaL_Buffer *VAR_2, const char *VAR_3, const char *VAR_4)
{
  size_t VAR_5, VAR_6;
  const char *VAR_7 = FUNC_4(VAR_1->L, 3, &VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    if (VAR_7[VAR_6] != VAR_0) {
      FUNC_1(VAR_2, VAR_7[VAR_6]);
    } else {
      VAR_6++;
      if (!FUNC_0(FUNC_6(VAR_7[VAR_6]))) {
 FUNC_1(VAR_2, VAR_7[VAR_6]);
      } else if (VAR_7[VAR_6] == '0') {
 FUNC_2(VAR_2, VAR_3, (size_t)(VAR_4 - VAR_3));
      } else {
 FUNC_5(VAR_1, VAR_7[VAR_6] - '1', VAR_3, VAR_4);
 FUNC_3(VAR_2);
      }
    }
  }
}
