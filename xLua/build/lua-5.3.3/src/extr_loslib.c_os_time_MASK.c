
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_isdst; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
typedef int lua_State ;
typedef scalar_t__ l_timet ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (struct tm*) ;
 int FUNC_8 (int *,struct tm*) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10 (lua_State *VAR_1) {
  time_t VAR_2;
  if (FUNC_5(VAR_1, 1))
    VAR_2 = FUNC_9(((void*)0));
  else {
    struct tm VAR_3;
    FUNC_3(VAR_1, 1, VAR_0);
    FUNC_6(VAR_1, 1);
    VAR_3.tm_sec = FUNC_1(VAR_1, "sec", 0, 0);
    VAR_3.tm_min = FUNC_1(VAR_1, "min", 0, 0);
    VAR_3.tm_hour = FUNC_1(VAR_1, "hour", 12, 0);
    VAR_3.tm_mday = FUNC_1(VAR_1, "day", -1, 0);
    VAR_3.tm_mon = FUNC_1(VAR_1, "month", -1, 1);
    VAR_3.tm_year = FUNC_1(VAR_1, "year", -1, 1900);
    VAR_3.tm_isdst = FUNC_0(VAR_1, "isdst");
    VAR_2 = FUNC_7(&VAR_3);
    FUNC_8(VAR_1, &VAR_3);
  }
  if (VAR_2 != (time_t)(l_timet)VAR_2 || VAR_2 == (time_t)(-1))
    FUNC_4(VAR_1, "time result cannot be represented in this installation");
  FUNC_2(VAR_1, VAR_2);
  return 1;
}
