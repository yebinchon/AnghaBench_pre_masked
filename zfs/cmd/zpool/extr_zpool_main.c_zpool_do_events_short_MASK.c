
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
typedef int time_t ;
typedef int nvlist_t ;
typedef int longlong_t ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ scripted; } ;
typedef TYPE_1__ ev_opts_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char,int) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__**,int *) ;
 scalar_t__ FUNC_4 (int *,int ,char**) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(nvlist_t *VAR_2, ev_opts_t *VAR_3)
{
 char VAR_4[26], VAR_5[32], *VAR_6;
 int64_t *VAR_7;
 uint_t VAR_8;

 FUNC_8(FUNC_3(VAR_2, VAR_1, &VAR_7, &VAR_8) == 0);
 FUNC_2(VAR_5, ' ', 32);
 (void) FUNC_0((const time_t *)&VAR_7[0], VAR_4);
 (void) FUNC_7(VAR_5, VAR_4+4, 6);
 (void) FUNC_7(VAR_5+7, VAR_4+20, 4);
 (void) FUNC_7(VAR_5+12, VAR_4+11, 8);
 (void) FUNC_6(VAR_5+20, ".%09lld", (longlong_t)VAR_7[1]);
 if (VAR_3->scripted)
  (void) FUNC_5(FUNC_1("%s\t"), VAR_5);
 else
  (void) FUNC_5(FUNC_1("%s "), VAR_5);

 FUNC_8(FUNC_4(VAR_2, VAR_0, &VAR_6) == 0);
 (void) FUNC_5(FUNC_1("%s\n"), VAR_6);
}
