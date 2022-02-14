
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*) ;
 int VAR_2 ;
 float FUNC_2 (char*,char**) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(int *VAR_3, char **VAR_4, float *VAR_5,
    unsigned long *VAR_6)
{
 float VAR_7 = 0;
 unsigned long VAR_8 = 0;
 int VAR_9 = *VAR_3;




 if (VAR_9 > 0 && FUNC_4(VAR_4[VAR_9 - 1])) {
  char *VAR_10;

  VAR_1 = 0;
  VAR_7 = FUNC_2(VAR_4[VAR_9 - 1], &VAR_10);

  if (*VAR_10 == '\0' && VAR_1 == 0) {
   if (VAR_7 == 0) {
    (void) FUNC_0(VAR_2, "%s", FUNC_1("interval "
        "cannot be zero\n"));
    FUNC_3(VAR_0);
   }



   VAR_9--;
  } else {





   VAR_7 = 0;
  }
 }





 if (VAR_9 > 0 && FUNC_4(VAR_4[VAR_9 - 1])) {
  char *VAR_11;

  VAR_1 = 0;
  VAR_8 = VAR_7;
  VAR_7 = FUNC_2(VAR_4[VAR_9 - 1], &VAR_11);

  if (*VAR_11 == '\0' && VAR_1 == 0) {
   if (VAR_7 == 0) {
    (void) FUNC_0(VAR_2, "%s", FUNC_1("interval "
        "cannot be zero\n"));
    FUNC_3(VAR_0);
   }




   VAR_9--;
  } else {
   VAR_7 = 0;
  }
 }

 *VAR_5 = VAR_7;
 *VAR_6 = VAR_8;
 *VAR_3 = VAR_9;
}
