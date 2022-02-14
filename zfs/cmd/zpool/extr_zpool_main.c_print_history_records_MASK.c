
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
typedef void* uid_t ;
typedef int u_longlong_t ;
typedef void* time_t ;
typedef int tbuf ;
struct tm {int dummy; } ;
struct passwd {char* pw_name; } ;
typedef int nvlist_t ;
typedef int longlong_t ;
struct TYPE_3__ {int longfmt; int internal; } ;
typedef TYPE_1__ hist_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int ) ;
 void* FUNC_4 (int *,int ) ;
 struct passwd* FUNC_5 (void*) ;
 int FUNC_6 (void**,struct tm*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int ***,int*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,char*,struct tm*) ;
 int FUNC_11 (int) ;
 char** VAR_17 ;

__attribute__((used)) static void
FUNC_12(nvlist_t *VAR_18, hist_cbdata_t *VAR_19)
{
 nvlist_t **VAR_20;
 uint_t VAR_21;
 int VAR_22;

 FUNC_11(FUNC_8(VAR_18, VAR_12,
     &VAR_20, &VAR_21) == 0);
 for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
  nvlist_t *VAR_23 = VAR_20[VAR_22];
  char VAR_24[30] = "";

  if (FUNC_7(VAR_23, VAR_13)) {
   time_t VAR_25;
   struct tm VAR_26;

   VAR_25 = FUNC_4(VAR_20[VAR_22],
       VAR_13);
   (void) FUNC_6(&VAR_25, &VAR_26);
   (void) FUNC_10(VAR_24, sizeof (VAR_24), "%F.%T", &VAR_26);
  }

  if (FUNC_7(VAR_23, VAR_1)) {
   (void) FUNC_9("%s %s", VAR_24,
       FUNC_3(VAR_23, VAR_1));
  } else if (FUNC_7(VAR_23, VAR_7)) {
   int VAR_27 =
       FUNC_4(VAR_23, VAR_7);
   if (!VAR_19->internal)
    continue;
   if (VAR_27 >= VAR_0) {
    (void) FUNC_9("%s unrecognized record:\n",
        VAR_24);
    FUNC_0(VAR_23, 4);
    continue;
   }
   (void) FUNC_9("%s [internal %s txg:%lld] %s", VAR_24,
       VAR_17[VAR_27],
       (longlong_t)FUNC_4(
       VAR_23, VAR_14),
       FUNC_3(VAR_23, VAR_9));
  } else if (FUNC_7(VAR_23, VAR_8)) {
   if (!VAR_19->internal)
    continue;
   (void) FUNC_9("%s [txg:%lld] %s", VAR_24,
       (longlong_t)FUNC_4(
       VAR_23, VAR_14),
       FUNC_3(VAR_23, VAR_8));
   if (FUNC_7(VAR_23, VAR_3)) {
    (void) FUNC_9(" %s (%llu)",
        FUNC_3(VAR_23,
        VAR_3),
        (u_longlong_t)FUNC_4(VAR_23,
        VAR_2));
   }
   (void) FUNC_9(" %s", FUNC_3(VAR_23,
       VAR_9));
  } else if (FUNC_7(VAR_23, VAR_10)) {
   if (!VAR_19->internal)
    continue;
   (void) FUNC_9("%s ioctl %s\n", VAR_24,
       FUNC_3(VAR_23, VAR_10));
   if (FUNC_7(VAR_23, VAR_6)) {
    (void) FUNC_9("    input:\n");
    FUNC_0(FUNC_2(VAR_23,
        VAR_6), 8);
   }
   if (FUNC_7(VAR_23, VAR_11)) {
    (void) FUNC_9("    output:\n");
    FUNC_0(FUNC_2(VAR_23,
        VAR_11), 8);
   }
   if (FUNC_7(VAR_23, VAR_4)) {
    (void) FUNC_9("    errno: %lld\n",
        (longlong_t)FUNC_1(VAR_23,
        VAR_4));
   }
  } else {
   if (!VAR_19->internal)
    continue;
   (void) FUNC_9("%s unrecognized record:\n", VAR_24);
   FUNC_0(VAR_23, 4);
  }

  if (!VAR_19->longfmt) {
   (void) FUNC_9("\n");
   continue;
  }
  (void) FUNC_9(" [");
  if (FUNC_7(VAR_23, VAR_15)) {
   uid_t VAR_28 = FUNC_4(VAR_23, VAR_15);
   struct passwd *VAR_29 = FUNC_5(VAR_28);
   (void) FUNC_9("user %d ", (int)VAR_28);
   if (VAR_29 != ((void*)0))
    (void) FUNC_9("(%s) ", VAR_29->pw_name);
  }
  if (FUNC_7(VAR_23, VAR_5)) {
   (void) FUNC_9("on %s",
       FUNC_3(VAR_23, VAR_5));
  }
  if (FUNC_7(VAR_23, VAR_16)) {
   (void) FUNC_9(":%s",
       FUNC_3(VAR_23, VAR_16));
  }

  (void) FUNC_9("]");
  (void) FUNC_9("\n");
 }
}
