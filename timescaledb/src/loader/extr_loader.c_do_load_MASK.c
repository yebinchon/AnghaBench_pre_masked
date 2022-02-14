
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * post_parse_analyze_hook_type ;
typedef int * PGFunction ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_5 ;
 int FUNC_7 (char*,char*,int ,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int * VAR_6 ;
 char* FUNC_9 () ;
 int * FUNC_10 (char*,int ,int,int *) ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_11 (char*,int,char*,char*,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (char*,char*) ;

__attribute__((used)) static void inline FUNC_13()
{
 char *VAR_10 = FUNC_9();
 char VAR_11[VAR_1];
 post_parse_analyze_hook_type VAR_12;

 FUNC_8(VAR_9, VAR_10, VAR_2);
 if (VAR_7)
  return;

 FUNC_11(VAR_11, VAR_1, "%s-%s", VAR_0, VAR_10);





 VAR_7 = 1;






 if (FUNC_0())
  return;





 if (FUNC_12(VAR_10, "0.9.0") == 0 || FUNC_12(VAR_10, "0.9.1") == 0)
  FUNC_7("timescaledb.loader_present", "on", VAR_4, VAR_3);





 VAR_12 = VAR_8;
 VAR_8 = ((void*)0);







 FUNC_6();
 {
  PGFunction VAR_13 =
   FUNC_10(VAR_11, VAR_5, 0, ((void*)0));

  if (VAR_13 != ((void*)0))
   FUNC_2(VAR_13, FUNC_1(0));
 }
 FUNC_3();
 {
  VAR_6 = VAR_8;
  VAR_8 = VAR_12;
  FUNC_5();
 }
 FUNC_4();

 VAR_6 = VAR_8;
 VAR_8 = VAR_12;
}
