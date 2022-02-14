
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_3__ {scalar_t__ wd_interval; char* wd_poolname; int wd_sem; void** wd_enabled; void* wd_exact; void* wd_headers_once; void* wd_scripted; } ;
typedef TYPE_1__ wait_data_t ;
typedef int pthread_t ;
typedef int boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void***,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_2 (int*,char**,scalar_t__*,unsigned long*) ;
 int FUNC_3 (char) ;
 char FUNC_4 (int,char**,char*) ;
 int FUNC_5 (char**,char**,char**) ;
 char* FUNC_6 (char*) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_8 (int ,void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *) ;
 int VAR_8 ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (void*) ;
 int VAR_9 ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ,char*) ;
 int FUNC_16 (int *,int,int*,int*) ;

int
FUNC_17(int VAR_10, char **VAR_11)
{
 boolean_t VAR_12 = VAR_0;
 char VAR_13;
 char *VAR_14;
 int VAR_15;
 unsigned long VAR_16;
 pthread_t VAR_17;
 int VAR_18 = 0;
 zpool_handle_t *VAR_19;

 wait_data_t VAR_20;
 VAR_20.wd_scripted = VAR_0;
 VAR_20.wd_exact = VAR_0;
 VAR_20.wd_headers_once = VAR_0;

 (void) FUNC_10(&VAR_20.wd_sem, 0, 0);


 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
  VAR_20.wd_enabled[VAR_15] = VAR_1;

 while ((VAR_13 = FUNC_4(VAR_10, VAR_11, "HpT:t:")) != -1) {
  switch (VAR_13) {
  case 'H':
   VAR_20.wd_scripted = VAR_1;
   break;
  case 'n':
   VAR_20.wd_headers_once = VAR_1;
   break;
  case 'p':
   VAR_20.wd_exact = VAR_1;
   break;
  case 'T':
   FUNC_3(*VAR_5);
   break;
  case 't':
  {
   static char *VAR_21[] = { "discard", "free",
       "initialize", "replace", "remove", "resilver",
       "scrub", ((void*)0) };


   FUNC_0(&VAR_20.wd_enabled, sizeof (VAR_20.wd_enabled));
   while (*VAR_5 != '\0') {
    int VAR_22 = FUNC_5(&VAR_5, VAR_21,
        &VAR_14);

    if (VAR_22 < 0) {
     (void) FUNC_1(VAR_8,
         FUNC_6("invalid activity '%s'\n"),
         VAR_14);
     FUNC_13(VAR_0);
    }

    VAR_20.wd_enabled[VAR_22] = VAR_1;
   }
   break;
  }
  case '?':
   (void) FUNC_1(VAR_8, FUNC_6("invalid option '%c'\n"),
       VAR_7);
   FUNC_13(VAR_0);
  }
 }

 VAR_10 -= VAR_6;
 VAR_11 += VAR_6;

 FUNC_2(&VAR_10, VAR_11, &VAR_20.wd_interval, &VAR_16);
 if (VAR_16 != 0) {

  (void) FUNC_1(VAR_8, "%s", FUNC_6("too many arguments\n"));
  FUNC_13(VAR_0);
 }

 if (VAR_20.wd_interval != 0)
  VAR_12 = VAR_1;

 if (VAR_10 < 1) {
  (void) FUNC_1(VAR_8, "%s", FUNC_6("missing 'pool' argument\n"));
  FUNC_13(VAR_0);
 }
 if (VAR_10 > 1) {
  (void) FUNC_1(VAR_8, "%s", FUNC_6("too many arguments\n"));
  FUNC_13(VAR_0);
 }

 VAR_20.wd_poolname = VAR_11[0];

 if ((VAR_19 = FUNC_15(VAR_4, VAR_20.wd_poolname)) == ((void*)0))
  return (1);

 if (VAR_12) {





  if (FUNC_7(&VAR_17, ((void*)0), VAR_9, &VAR_20)
      != 0) {
   (void) FUNC_1(VAR_8, FUNC_6("failed to create status"
       "thread: %s\n"), FUNC_12(VAR_3));
   FUNC_14(VAR_19);
   return (1);
  }
 }
 for (;;) {
  boolean_t VAR_23 = VAR_0;
  boolean_t VAR_24 = VAR_0;

  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
   boolean_t VAR_25;

   if (!VAR_20.wd_enabled[VAR_15])
    continue;

   VAR_18 = FUNC_16(VAR_19, VAR_15, &VAR_23, &VAR_25);
   if (VAR_18 != 0 || VAR_23)
    break;

   VAR_24 = (VAR_24 || VAR_25);
  }

  if (VAR_18 != 0 || VAR_23 || !VAR_24)
   break;
 }

 FUNC_14(VAR_19);

 if (VAR_12) {
  uintptr_t VAR_26;
  (void) FUNC_11(&VAR_20.wd_sem);
  (void) FUNC_8(VAR_17, (void *)&VAR_26);
  if (VAR_26 != 0)
   VAR_18 = VAR_26;
 }

 (void) FUNC_9(&VAR_20.wd_sem);

 return (VAR_18);
}
