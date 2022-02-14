
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef scalar_t__ pid_t ;
typedef int path ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (char*,char const*,int *,char**) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (struct timespec*,int *) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int,char*,char const*,char const*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (scalar_t__,int*,int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ,char*,char const*,scalar_t__,...) ;

__attribute__((used)) static void
FUNC_19(uint64_t VAR_13, const char *VAR_14, const char *VAR_15,
    char *VAR_16[], int VAR_17)
{
 char VAR_18[VAR_5];
 int VAR_19;
 pid_t VAR_20;
 int VAR_21;
 pid_t VAR_22;
 int VAR_23;

 FUNC_5(VAR_14 != ((void*)0));
 FUNC_5(VAR_15 != ((void*)0));
 FUNC_5(VAR_16 != ((void*)0));
 FUNC_5(VAR_17 >= 0);

 VAR_19 = FUNC_12(VAR_18, sizeof (VAR_18), "%s/%s", VAR_14, VAR_15);
 if ((VAR_19 < 0) || (VAR_19 >= sizeof (VAR_18))) {
  FUNC_18(VAR_3,
      "Failed to fork \"%s\" for eid=%llu: %s",
      VAR_15, VAR_13, FUNC_13(VAR_1));
  return;
 }
 VAR_20 = FUNC_8();
 if (VAR_20 < 0) {
  FUNC_18(VAR_3,
      "Failed to fork \"%s\" for eid=%llu: %s",
      VAR_15, VAR_13, FUNC_13(VAR_12));
  return;
 } else if (VAR_20 == 0) {
  (void) FUNC_15(022);
  if ((VAR_21 = FUNC_11("/dev/null", VAR_4)) != -1) {
   (void) FUNC_6(VAR_21, VAR_8);
   (void) FUNC_6(VAR_21, VAR_9);
   (void) FUNC_6(VAR_21, VAR_7);
  }
  (void) FUNC_6(VAR_17, VAR_11);
  FUNC_17(VAR_11 + 1);
  FUNC_7(VAR_18, VAR_15, ((void*)0), VAR_16);
  FUNC_4(127);
 }



 FUNC_18(VAR_2, "Invoking \"%s\" eid=%llu pid=%d",
     VAR_15, VAR_13, VAR_20);







 for (VAR_19 = 0; VAR_19 < 1000; VAR_19++) {
  VAR_22 = FUNC_16(VAR_20, &VAR_23, VAR_10);
  if (VAR_22 == (pid_t)-1) {
   if (VAR_12 == VAR_0)
    continue;
   FUNC_18(VAR_3,
       "Failed to wait for \"%s\" eid=%llu pid=%d",
       VAR_15, VAR_13, VAR_20);
   break;
  } else if (VAR_22 == 0) {
   struct timespec VAR_24;


   VAR_24.tv_sec = 0;
   VAR_24.tv_nsec = 10000000;
   (void) FUNC_10(&VAR_24, ((void*)0));
   continue;
  }

  if (FUNC_1(VAR_23)) {
   FUNC_18(VAR_2,
       "Finished \"%s\" eid=%llu pid=%d exit=%d",
       VAR_15, VAR_13, VAR_20, FUNC_0(VAR_23));
  } else if (FUNC_2(VAR_23)) {
   FUNC_18(VAR_2,
       "Finished \"%s\" eid=%llu pid=%d sig=%d/%s",
       VAR_15, VAR_13, VAR_20, FUNC_3(VAR_23),
       FUNC_14(FUNC_3(VAR_23)));
  } else {
   FUNC_18(VAR_2,
       "Finished \"%s\" eid=%llu pid=%d status=0x%X",
       VAR_15, VAR_13, (unsigned int) VAR_23);
  }
  break;
 }




 if (VAR_22 == 0) {
  FUNC_18(VAR_3, "Killing hung \"%s\" pid=%d",
      VAR_15, VAR_20);
  (void) FUNC_9(VAR_20, VAR_6);
 }
}
