
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_table_entry {int scope; int * name; } ;


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
 int FUNC_0 (int ,int,char**,int) ;
 char** VAR_14 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*,char const*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int) ;
 char* FUNC_7 () ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (int,char**,char*) ;
 char* FUNC_12 () ;
 int FUNC_13 () ;
 char* FUNC_14 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_15 () ;
 char* FUNC_16 (char*,char**) ;
 char* FUNC_17 (int ) ;
 char const* VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,struct options_table_entry const*) ;
 int FUNC_20 (int ,char*,int) ;
 int FUNC_21 (int ,char*,int ,char*,char const*) ;
 struct options_table_entry* VAR_21 ;
 int FUNC_22 () ;
 scalar_t__ FUNC_23 (char*,int *) ;
 int FUNC_24 (char*,char*,char*) ;
 int VAR_22 ;
 int FUNC_25 (char const*) ;
 int * FUNC_26 (int ,char*) ;
 char const* VAR_23 ;
 char* VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_27 (char const*,char*) ;
 int * FUNC_28 (char const*,char*) ;
 size_t FUNC_29 (char*,char*) ;
 char* FUNC_30 (char const*,char) ;
 int * FUNC_31 (char const*,char*) ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 char* FUNC_34 (char const*) ;

int
FUNC_35(int VAR_26, char **VAR_27)
{
 char *VAR_28, *VAR_29, *VAR_30, **VAR_31;
 const char *VAR_32, *VAR_33, *VAR_34;
 int VAR_35, VAR_36, VAR_37;
 const struct options_table_entry *VAR_38;

 if (FUNC_26(VAR_6, "en_US.UTF-8") == ((void*)0) &&
     FUNC_26(VAR_6, "C.UTF-8") == ((void*)0)) {
  if (FUNC_26(VAR_6, "") == ((void*)0))
   FUNC_5(1, "invalid LC_ALL, LC_CTYPE or LANG");
  VAR_32 = FUNC_17(VAR_5);
  if (FUNC_27(VAR_32, "UTF-8") != 0 && FUNC_27(VAR_32, "UTF8") != 0)
   FUNC_5(1, "need UTF-8 locale (LC_CTYPE) but have %s", VAR_32);
 }

 FUNC_26(VAR_7, "");
 FUNC_32();

 if (**VAR_27 == '-')
  VAR_36 = VAR_3;
 else
  VAR_36 = 0;

 VAR_29 = VAR_28 = ((void*)0);
 while ((VAR_35 = FUNC_11(VAR_26, VAR_27, "2c:Cdf:lL:qS:uUVv")) != -1) {
  switch (VAR_35) {
  case '2':
   VAR_36 |= VAR_0;
   break;
  case 'c':
   VAR_23 = VAR_19;
   break;
  case 'C':
   if (VAR_36 & VAR_1)
    VAR_36 |= VAR_2;
   else
    VAR_36 |= VAR_1;
   break;
  case 'V':
   FUNC_24("%s %s\n", FUNC_12(), VAR_13);
   FUNC_6(0);
  case 'f':
   FUNC_25(VAR_19);
   break;
  case 'l':
   VAR_36 |= VAR_3;
   break;
  case 'L':
   FUNC_9(VAR_29);
   VAR_29 = FUNC_34(VAR_19);
   break;
  case 'q':
   break;
  case 'S':
   FUNC_9(VAR_28);
   VAR_28 = FUNC_34(VAR_19);
   break;
  case 'u':
   VAR_36 |= VAR_4;
   break;
  case 'v':
   FUNC_15();
   break;
  default:
   FUNC_33();
  }
 }
 VAR_26 -= VAR_20;
 VAR_27 += VAR_20;

 if (VAR_23 != ((void*)0) && VAR_26 != 0)
  FUNC_33();

 if ((VAR_22 = FUNC_13()) == -1)
  FUNC_4(1, "getptmfd");
 if (FUNC_23("stdio rpath wpath cpath flock fattr unix getpw sendfd "
     "recvfd proc exec tty ps", ((void*)0)) != 0)
  FUNC_4(1, "pledge");
 if (FUNC_10("TMUX") != ((void*)0))
  VAR_36 |= VAR_4;
 else {
  VAR_32 = FUNC_10("LC_ALL");
  if (VAR_32 == ((void*)0) || *VAR_32 == '\0')
   VAR_32 = FUNC_10("LC_CTYPE");
  if (VAR_32 == ((void*)0) || *VAR_32 == '\0')
   VAR_32 = FUNC_10("LANG");
  if (VAR_32 == ((void*)0) || *VAR_32 == '\0')
   VAR_32 = "";
  if (FUNC_28(VAR_32, "UTF-8") != ((void*)0) ||
      FUNC_28(VAR_32, "UTF8") != ((void*)0))
   VAR_36 |= VAR_4;
 }

 VAR_15 = FUNC_1();
 for (VAR_31 = VAR_14; *VAR_31 != ((void*)0); VAR_31++)
  FUNC_2(VAR_15, *VAR_31);
 if ((VAR_34 = FUNC_7()) != ((void*)0))
  FUNC_3(VAR_15, "PWD", "%s", VAR_34);

 VAR_16 = FUNC_18(((void*)0));
 VAR_17 = FUNC_18(((void*)0));
 VAR_18 = FUNC_18(((void*)0));
 for (VAR_38 = VAR_21; VAR_38->name != ((void*)0); VAR_38++) {
  if (VAR_38->scope & VAR_10)
   FUNC_19(VAR_16, VAR_38);
  if (VAR_38->scope & VAR_11)
   FUNC_19(VAR_17, VAR_38);
  if (VAR_38->scope & VAR_12)
   FUNC_19(VAR_18, VAR_38);
 }





 VAR_33 = FUNC_14();
 FUNC_21(VAR_17, "default-shell", 0, "%s", VAR_33);


 if ((VAR_32 = FUNC_10("VISUAL")) != ((void*)0) || (VAR_32 = FUNC_10("EDITOR")) != ((void*)0)) {
  if (FUNC_30(VAR_32, '/') != ((void*)0))
   VAR_32 = FUNC_30(VAR_32, '/') + 1;
  if (FUNC_31(VAR_32, "vi") != ((void*)0))
   VAR_37 = VAR_9;
  else
   VAR_37 = VAR_8;
  FUNC_20(VAR_17, "status-keys", VAR_37);
  FUNC_20(VAR_18, "mode-keys", VAR_37);
 }






 if (VAR_28 == ((void*)0) && VAR_29 == ((void*)0)) {
  VAR_32 = FUNC_10("TMUX");
  if (VAR_32 != ((void*)0) && *VAR_32 != '\0' && *VAR_32 != ',') {
   VAR_28 = FUNC_34(VAR_32);
   VAR_28[FUNC_29(VAR_28, ",")] = '\0';
  }
 }
 if (VAR_28 == ((void*)0) && (VAR_28 = FUNC_16(VAR_29, &VAR_30)) == ((void*)0)) {
  if (VAR_30 != ((void*)0)) {
   FUNC_8(VAR_25, "%s\n", VAR_30);
   FUNC_9(VAR_30);
  }
  FUNC_6(1);
 }
 VAR_24 = VAR_28;
 FUNC_9(VAR_29);


 FUNC_6(FUNC_0(FUNC_22(), VAR_26, VAR_27, VAR_36));
}
