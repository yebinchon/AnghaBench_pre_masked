
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zed_strings_t ;
typedef int uint64_t ;
typedef int time_t ;
struct tm {int dummy; } ;
typedef scalar_t__ int64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,char*,char*,...) ;
 int FUNC_1 (int ) ;
 struct tm* FUNC_2 (int const*) ;
 int FUNC_3 (char*,int,char*,struct tm*) ;
 int FUNC_4 (int ,char*,int ,char*,int ,char*) ;

__attribute__((used)) static void
FUNC_5(uint64_t VAR_2, zed_strings_t *VAR_3, int64_t VAR_4[])
{
 struct tm *VAR_5;
 char VAR_6[32];

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_4 != ((void*)0));

 FUNC_0(VAR_2, VAR_3, VAR_1, "TIME_SECS",
     "%lld", (long long int) VAR_4[0]);
 FUNC_0(VAR_2, VAR_3, VAR_1, "TIME_NSECS",
     "%lld", (long long int) VAR_4[1]);

 if (!(VAR_5 = FUNC_2((const time_t *) &VAR_4[0]))) {
  FUNC_4(VAR_0, "Failed to add %s%s for eid=%llu: %s",
      VAR_1, "TIME_STRING", VAR_2, "localtime error");
 } else if (!FUNC_3(VAR_6, sizeof (VAR_6), "%Y-%m-%d %H:%M:%S%z", VAR_5)) {
  FUNC_4(VAR_0, "Failed to add %s%s for eid=%llu: %s",
      VAR_1, "TIME_STRING", VAR_2, "strftime error");
 } else {
  FUNC_0(VAR_2, VAR_3, VAR_1, "TIME_STRING",
      "%s", VAR_6);
 }
}
