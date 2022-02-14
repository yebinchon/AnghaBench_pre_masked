
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct in_ev {int dummy; } ;


 struct tm* FUNC_0 (void*) ;
 int FUNC_1 (struct in_ev*,char*,scalar_t__,scalar_t__,int ,int ,int ,int ) ;

void FUNC_2 (struct in_ev *VAR_0, long VAR_1) {
  struct tm *VAR_2 = FUNC_0 ((void *)&VAR_1);
  FUNC_1 (VAR_0, "[%04d/%02d/%02d %02d:%02d:%02d]", VAR_2->tm_year + 1900, VAR_2->tm_mon + 1, VAR_2->tm_mday, VAR_2->tm_hour, VAR_2->tm_min, VAR_2->tm_sec);
}
