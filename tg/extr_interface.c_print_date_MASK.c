
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {size_t tm_mon; scalar_t__ tm_year; int tm_mday; int tm_min; int tm_hour; } ;
struct in_ev {int dummy; } ;


 struct tm* FUNC_0 (void*) ;
 int * VAR_0 ;
 int FUNC_1 (struct in_ev*,char*,int ,int ,...) ;
 long FUNC_2 (int ) ;

void FUNC_3 (struct in_ev *VAR_1, long VAR_2) {
  struct tm *VAR_3 = FUNC_0 ((void *)&VAR_2);
  if (FUNC_2 (0) - VAR_2 < 12 * 60 * 60) {
    FUNC_1 (VAR_1, "[%02d:%02d] ", VAR_3->tm_hour, VAR_3->tm_min);
  } else if (FUNC_2 (0) - VAR_2 < 24 * 60 * 60 * 180) {
    FUNC_1 (VAR_1, "[%02d %s]", VAR_3->tm_mday, VAR_0[VAR_3->tm_mon]);
  } else {
    FUNC_1 (VAR_1, "[%02d %s %d]", VAR_3->tm_mday, VAR_0[VAR_3->tm_mon], VAR_3->tm_year + 1900);
  }
}
