
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,char*,int,int,int *,int **) ;
 int * VAR_1 ;
 int FUNC_5 (int *,int *) ;
 int VAR_2 ;
 int FUNC_6 (char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(const char *VAR_4, boolean_t VAR_5, boolean_t VAR_6)
{
 char *VAR_7 = "input = ...; return {output=input}";

 nvlist_t *VAR_8;

 (void) FUNC_6("\nrunning test '%s'; input:\n", VAR_4);
 FUNC_0(VAR_1, 4);

 int VAR_9 = FUNC_4(VAR_2, VAR_7,
     10 * 1000 * 1000, 10 * 1024 * 1024, VAR_1, &VAR_8);

 (void) FUNC_6("lzc_channel_program returned %u\n", VAR_9);
 FUNC_0(VAR_8, 5);

 if (VAR_9 == 0 && VAR_6) {






  nvlist_t *VAR_10 = FUNC_3(VAR_8, "return");
  VAR_10 = FUNC_3(VAR_10, "output");
  if (!FUNC_5(VAR_1, VAR_10)) {
   VAR_3 = VAR_0;
   (void) FUNC_6("unexpected input/output mismatch for "
       "case: %s\n", VAR_4);
  }
 }
 if (VAR_9 != 0 && VAR_5) {
  VAR_3 = VAR_0;
  (void) FUNC_6("unexpected FAIL of case: %s\n", VAR_4);
 }

 FUNC_2(VAR_1);
 VAR_1 = FUNC_1();
}
