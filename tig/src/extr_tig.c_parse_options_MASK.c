
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum request { ____Placeholder_request } request ;
struct TYPE_2__ {int goto_lineno; } ;


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
 char* VAR_13 ;
 int FUNC_0 (char const***,char const*) ;
 TYPE_1__ VAR_14 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const**,int) ;
 int FUNC_6 (char*,char*,...) ;
 char* VAR_15 ;
 int FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,char*,int) ;
 char* VAR_16 ;

__attribute__((used)) static enum request
FUNC_11(int VAR_17, const char *VAR_18[], bool VAR_19)
{
 enum request VAR_20;
 const char *VAR_21;
 bool VAR_22 = 0;
 bool VAR_23 = 1;
 const char **VAR_24 = ((void*)0);
 int VAR_25;

 VAR_20 = VAR_19 ? VAR_8 : VAR_7;


 for (VAR_25 = 1; VAR_25 < VAR_17; VAR_25++) {
  const char *VAR_26 = VAR_18[VAR_25];
  if (!FUNC_10(VAR_26, "-C", 2)) {
   if (FUNC_2(VAR_26 + 2))
    FUNC_3("Failed to change directory to %s", VAR_26 + 2);
   continue;
  } else {
   break;
  }
 }

 if (VAR_25 >= VAR_17)
  return VAR_20;

 VAR_21 = VAR_18[VAR_25++];
 if (!FUNC_7(VAR_21, "status")) {
  VAR_20 = VAR_12;

 } else if (!FUNC_7(VAR_21, "blame")) {
  VAR_20 = VAR_3;

 } else if (!FUNC_7(VAR_21, "grep")) {
  VAR_20 = VAR_5;
  VAR_23 = 0;

 } else if (!FUNC_7(VAR_21, "show")) {
  VAR_20 = VAR_4;

 } else if (!FUNC_7(VAR_21, "log")) {
  VAR_20 = VAR_6;

 } else if (!FUNC_7(VAR_21, "reflog")) {
  VAR_20 = VAR_9;

 } else if (!FUNC_7(VAR_21, "stash")) {
  VAR_20 = VAR_11;

 } else if (!FUNC_7(VAR_21, "refs")) {
  VAR_20 = VAR_10;
  VAR_23 = 0;

 } else {
  VAR_21 = ((void*)0);
  VAR_25--;
 }

 for (; VAR_25 < VAR_17; VAR_25++) {
  const char *VAR_27 = VAR_18[VAR_25];


  if (!VAR_22) {
   if (!FUNC_7(VAR_27, "--")) {
    VAR_22 = 1;

   } else if (!FUNC_7(VAR_27, "-v") || !FUNC_7(VAR_27, "--version")) {
    FUNC_6("tig version %s\n", VAR_13);
    FUNC_4(VAR_0);

   } else if (!FUNC_7(VAR_27, "-h") || !FUNC_7(VAR_27, "--help")) {
    FUNC_6("%s\n", VAR_16);
    FUNC_4(VAR_0);

   } else if (FUNC_9(VAR_27) >= 2 && *VAR_27 == '+' && FUNC_8(VAR_27 + 1)) {
    int VAR_28 = FUNC_1(VAR_27 + 1);

    VAR_14.goto_lineno = VAR_28 > 0 ? VAR_28 - 1 : 0;
    continue;

   }
  }

  if (!FUNC_0(&VAR_24, VAR_27))
   FUNC_3("command too long");
 }

 if (VAR_24)
  FUNC_5(VAR_24, VAR_23);

 return VAR_20;
}
