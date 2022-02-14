
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int keymap; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_2__ {int * git_dir; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 size_t VAR_16 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 struct view** VAR_17 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct view*,int ) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 () ;
 int VAR_18 ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 char* FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct view*) ;
 scalar_t__ VAR_19 ;
 int FUNC_18 (int,char const**,int) ;
 int FUNC_19 () ;
 int FUNC_20 (int ) ;
 TYPE_1__ VAR_20 ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (int *,char const**) ;
 scalar_t__ FUNC_23 (int ,char*) ;
 int VAR_21 ;
 scalar_t__ FUNC_24 (int ,int ) ;
 int VAR_22 ;
 scalar_t__ FUNC_25 (char const*,char*) ;
 scalar_t__ FUNC_26 (char*,char*,char const*,int ) ;
 scalar_t__ FUNC_27 (struct view*,int) ;

int
FUNC_28(int VAR_23, const char *VAR_24[])
{
 const char *VAR_25 = VAR_1;
 bool VAR_26 = !FUNC_10(VAR_15);
 enum request VAR_27 = FUNC_18(VAR_23, VAR_24, VAR_26);
 struct view *VAR_28;

 FUNC_9();

 FUNC_0(VAR_18);

 if (FUNC_24(VAR_10, VAR_13) == VAR_12)
  FUNC_1("Failed to setup signal handler");

 if (FUNC_24(VAR_9, VAR_21) == VAR_12)
  FUNC_1("Failed to setup signal handler");






 if (FUNC_23(VAR_5, "")) {
  VAR_25 = FUNC_15(VAR_0);
 }

 FUNC_2(FUNC_6(), "Failed to handle GIT_PREFIX");
 FUNC_2(FUNC_14(), "Failed to load repo info.");
 FUNC_2(FUNC_12(), "Failed to load user config.");
 FUNC_2(FUNC_11(), "Failed to load repo config.");

 FUNC_19();


 if (!VAR_20.git_dir[0] && VAR_27 != VAR_8)
  FUNC_1("Not a git repository");

 if (VAR_25 && FUNC_25(VAR_25, VAR_1)) {
  char VAR_29[VAR_14];

  if (FUNC_26(VAR_29, "%s%s", VAR_25, VAR_4))
   VAR_19 = FUNC_7(VAR_29, VAR_1);
  else
   VAR_19 = FUNC_7(VAR_25, VAR_1);
  if (VAR_19 == VAR_3)
   FUNC_1("Failed to initialize character set conversion");
 }

 FUNC_2(FUNC_13(0), "Failed to load refs.");

 FUNC_8();

 if (VAR_26)
  VAR_27 = FUNC_16(VAR_27);

 if (FUNC_5("TIG_SCRIPT")) {
  const char *VAR_30[] = { "script", FUNC_5("TIG_SCRIPT"), ((void*)0) };

  FUNC_22(((void*)0), VAR_30);
 }

 while (FUNC_27(VAR_17[VAR_16], VAR_27)) {
  VAR_28 = VAR_17[VAR_16];
  VAR_27 = FUNC_20(VAR_28->keymap);



  switch (VAR_27) {
  case 128:
   FUNC_21("Unknown key, press %s for help",
          FUNC_4(VAR_28, VAR_7));
   VAR_27 = VAR_6;
   break;
  case 129:
   VAR_27 = FUNC_17(VAR_28);
   break;
  default:
   break;
  }
 }

 FUNC_3(VAR_2);

 return 0;
}
