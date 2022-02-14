
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
struct TYPE_3__ {struct TYPE_3__* next; int guest_ok; int comment; int path; int name; } ;
typedef TYPE_1__ smb_share_t ;
typedef int line ;
typedef int file_path ;
typedef int FILE ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 int * FUNC_8 (char*) ;
 struct dirent* FUNC_9 (int *) ;
 TYPE_1__* VAR_5 ;
 int FUNC_10 (char*,int,char*,char*,char*) ;
 int FUNC_11 (char*,struct stat*) ;
 char* FUNC_12 (char*,char) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 char* FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,int) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static int
FUNC_17(void)
{
 int VAR_6 = VAR_2;
 char VAR_7[VAR_0], VAR_8[512], *VAR_9, *VAR_10, *VAR_11;
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 DIR *VAR_17;
 FILE *VAR_18 = ((void*)0);
 struct dirent *VAR_19;
 struct stat VAR_20;
 smb_share_t *VAR_21, *VAR_22 = ((void*)0);


 VAR_17 = FUNC_8(VAR_4);
 if (VAR_17 == ((void*)0))
  return (VAR_3);


 while ((VAR_19 = FUNC_9(VAR_17))) {
  if (VAR_19->d_name[0] == '.')
   continue;

  FUNC_10(VAR_7, sizeof (VAR_7),
      "%s/%s", VAR_4, VAR_19->d_name);

  if (FUNC_11(VAR_7, &VAR_20) == -1) {
   VAR_6 = VAR_3;
   goto out;
  }

  if (!FUNC_0(VAR_20.st_mode))
   continue;

  if ((VAR_18 = FUNC_5(VAR_7, "r")) == ((void*)0)) {
   VAR_6 = VAR_3;
   goto out;
  }

  VAR_15 = FUNC_14(VAR_19->d_name);
  if (VAR_15 == ((void*)0)) {
   VAR_6 = VAR_1;
   goto out;
  }

  while (FUNC_4(VAR_8, sizeof (VAR_8), VAR_18)) {
   if (VAR_8[0] == '#')
    continue;


   while (VAR_8[FUNC_16(VAR_8) - 1] == '\r' ||
       VAR_8[FUNC_16(VAR_8) - 1] == '\n')
    VAR_8[FUNC_16(VAR_8) - 1] = '\0';


   VAR_9 = FUNC_12(VAR_8, '=');
   if (VAR_9 == ((void*)0))
    continue;

   VAR_10 = VAR_8;
   VAR_11 = VAR_9 + 1;
   *VAR_9 = '\0';

   VAR_12 = FUNC_14(VAR_11);
   if (VAR_12 == ((void*)0)) {
    VAR_6 = VAR_1;
    goto out;
   }

   if (FUNC_13(VAR_10, "path") == 0) {
    FUNC_6(VAR_13);
    VAR_13 = VAR_12;
   } else if (FUNC_13(VAR_10, "comment") == 0) {
    FUNC_6(VAR_14);
    VAR_14 = VAR_12;
   } else if (FUNC_13(VAR_10, "guest_ok") == 0) {
    FUNC_6(VAR_16);
    VAR_16 = VAR_12;
   } else
    FUNC_6(VAR_12);

   VAR_12 = ((void*)0);

   if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0) || VAR_16 == ((void*)0))
    continue;
   else {
    VAR_21 = (smb_share_t *)
        FUNC_7(sizeof (smb_share_t));
    if (VAR_21 == ((void*)0)) {
     VAR_6 = VAR_1;
     goto out;
    }

    (void) FUNC_15(VAR_21->name, VAR_15,
        sizeof (VAR_21->name));

    (void) FUNC_15(VAR_21->path, VAR_13,
        sizeof (VAR_21->path));

    (void) FUNC_15(VAR_21->comment, VAR_14,
        sizeof (VAR_21->comment));

    VAR_21->guest_ok = FUNC_1(VAR_16);

    VAR_21->next = VAR_22;
    VAR_22 = VAR_21;

    FUNC_6(VAR_13);
    FUNC_6(VAR_14);
    FUNC_6(VAR_16);

    VAR_13 = ((void*)0);
    VAR_14 = ((void*)0);
    VAR_16 = ((void*)0);
   }
  }

out:
  if (VAR_18 != ((void*)0)) {
   FUNC_3(VAR_18);
   VAR_18 = ((void*)0);
  }

  FUNC_6(VAR_15);
  FUNC_6(VAR_13);
  FUNC_6(VAR_14);
  FUNC_6(VAR_16);

  VAR_15 = ((void*)0);
  VAR_13 = ((void*)0);
  VAR_14 = ((void*)0);
  VAR_16 = ((void*)0);
 }
 FUNC_2(VAR_17);

 VAR_5 = VAR_22;

 return (VAR_6);
}
