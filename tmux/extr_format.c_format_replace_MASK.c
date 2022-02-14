
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct window_pane {int id; } ;
struct format_tree {struct window_pane* wp; } ;
struct format_modifier {int* modifier; int argc; char** argv; int size; } ;


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
 struct format_modifier* FUNC_0 (struct format_tree*,char const**,size_t*) ;
 scalar_t__ FUNC_1 (struct format_tree*,char const*,char**,char**,int) ;
 char* FUNC_2 (struct format_tree*,char const*) ;
 char* FUNC_3 (struct format_tree*,char*) ;
 char* FUNC_4 (struct format_tree*,char const*,int) ;
 int FUNC_5 (struct format_modifier*,size_t) ;
 int FUNC_6 (struct format_tree*,char*,...) ;
 scalar_t__ FUNC_7 (struct format_tree*) ;
 char* FUNC_8 (struct format_tree*,char const*) ;
 char* FUNC_9 (struct format_tree*,char const*) ;
 char* FUNC_10 (struct format_tree*,char const*) ;
 char* FUNC_11 (struct format_modifier*,char*,char*) ;
 char* FUNC_12 (struct format_modifier*,struct window_pane*,char*) ;
 char* FUNC_13 (char const*,char*) ;
 char* FUNC_14 (struct format_modifier*,char*,char*,char*) ;
 char* FUNC_15 (char*,int) ;
 char* FUNC_16 (char*,int) ;
 scalar_t__ FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,char*,size_t) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 size_t FUNC_21 (char*) ;
 int FUNC_22 (char*,int ,int ,char const**) ;
 int FUNC_23 (char**,char*,char const*,char const*) ;
 char* FUNC_24 (char*,int,size_t) ;
 char* FUNC_25 (char const*) ;
 char* FUNC_26 (char const*,int) ;

__attribute__((used)) static int
FUNC_27(struct format_tree *VAR_12, const char *VAR_13, size_t VAR_14,
    char **VAR_15, size_t *VAR_16, size_t *VAR_17)
{
 struct window_pane *VAR_18 = VAR_12->wp;
 const char *VAR_19, *VAR_20, *VAR_21, *VAR_22 = ((void*)0);
 char *VAR_23, *VAR_24, *VAR_25, *VAR_26;
 char *VAR_27, *VAR_28, *VAR_29;
 size_t VAR_30;
 int VAR_31 = 0, VAR_32 = 0, VAR_33;
 struct format_modifier *VAR_34, *VAR_35, *VAR_36 = ((void*)0), *VAR_37 = ((void*)0);
 struct format_modifier *VAR_38 = ((void*)0);
 u_int VAR_39, VAR_40;


 VAR_20 = VAR_23 = FUNC_26(VAR_13, VAR_14);


 VAR_34 = FUNC_0(VAR_12, &VAR_20, &VAR_40);
 for (VAR_39 = 0; VAR_39 < VAR_40; VAR_39++) {
  VAR_35 = &VAR_34[VAR_39];
  if (FUNC_7(VAR_12)) {
   FUNC_6(VAR_12, "modifier %u is %s", VAR_39, VAR_35->modifier);
   for (VAR_33 = 0; VAR_33 < VAR_35->argc; VAR_33++) {
    FUNC_6(VAR_12, "modifier %u argument %d: %s", VAR_39,
        VAR_33, VAR_35->argv[VAR_33]);
   }
  }
  if (VAR_35->size == 1) {
   switch (VAR_35->modifier[0]) {
   case 'm':
   case '<':
   case '>':
    VAR_36 = VAR_35;
    break;
   case 'C':
    VAR_37 = VAR_35;
    break;
   case 's':
    if (VAR_35->argc < 2)
     break;
    VAR_38 = VAR_35;
    break;
   case '=':
    if (VAR_35->argc < 1)
     break;
    VAR_32 = FUNC_22(VAR_35->argv[0], VAR_11, VAR_10,
        &VAR_19);
    if (VAR_19 != ((void*)0))
     VAR_32 = 0;
    if (VAR_35->argc >= 2 && VAR_35->argv[1] != ((void*)0))
     VAR_22 = VAR_35->argv[1];
    break;
   case 'l':
    VAR_31 |= VAR_4;
    break;
   case 'b':
    VAR_31 |= VAR_0;
    break;
   case 'd':
    VAR_31 |= VAR_1;
    break;
   case 't':
    VAR_31 |= VAR_8;
    break;
   case 'q':
    VAR_31 |= VAR_6;
    break;
   case 'E':
    VAR_31 |= VAR_2;
    break;
   case 'T':
    VAR_31 |= VAR_3;
    break;
   case 'S':
    VAR_31 |= VAR_7;
    break;
   case 'W':
    VAR_31 |= VAR_9;
    break;
   case 'P':
    VAR_31 |= VAR_5;
    break;
   }
  } else if (VAR_35->size == 2) {
   if (FUNC_20(VAR_35->modifier, "||") == 0 ||
       FUNC_20(VAR_35->modifier, "&&") == 0 ||
       FUNC_20(VAR_35->modifier, "==") == 0 ||
       FUNC_20(VAR_35->modifier, "!=") == 0 ||
       FUNC_20(VAR_35->modifier, ">=") == 0 ||
       FUNC_20(VAR_35->modifier, "<=") == 0)
    VAR_36 = VAR_35;
  }
 }


 if (VAR_31 & VAR_4) {
  VAR_27 = FUNC_25(VAR_20);
  goto done;
 }


 if (VAR_31 & VAR_7) {
  VAR_27 = FUNC_9(VAR_12, VAR_20);
  if (VAR_27 == ((void*)0))
   goto fail;
 } else if (VAR_31 & VAR_9) {
  VAR_27 = FUNC_10(VAR_12, VAR_20);
  if (VAR_27 == ((void*)0))
   goto fail;
 } else if (VAR_31 & VAR_5) {
  VAR_27 = FUNC_8(VAR_12, VAR_20);
  if (VAR_27 == ((void*)0))
   goto fail;
 } else if (VAR_37 != ((void*)0)) {

  VAR_26 = FUNC_2(VAR_12, VAR_20);
  if (VAR_18 == ((void*)0)) {
   FUNC_6(VAR_12, "search '%s' but no pane", VAR_26);
   VAR_27 = FUNC_25("0");
  } else {
   FUNC_6(VAR_12, "search '%s' pane %%%u", VAR_26, VAR_18->id);
   VAR_27 = FUNC_12(VAR_35, VAR_18, VAR_26);
  }
  FUNC_18(VAR_26);
 } else if (VAR_36 != ((void*)0)) {

  if (FUNC_1(VAR_12, VAR_20, &VAR_28, &VAR_29, 1) != 0) {
   FUNC_6(VAR_12, "compare %s syntax error: %s",
       VAR_36->modifier, VAR_20);
   goto fail;
  }
  FUNC_6(VAR_12, "compare %s left is: %s", VAR_36->modifier, VAR_28);
  FUNC_6(VAR_12, "compare %s right is: %s", VAR_36->modifier, VAR_29);

  if (FUNC_20(VAR_36->modifier, "||") == 0) {
   if (FUNC_17(VAR_28) || FUNC_17(VAR_29))
    VAR_27 = FUNC_25("1");
   else
    VAR_27 = FUNC_25("0");
  } else if (FUNC_20(VAR_36->modifier, "&&") == 0) {
   if (FUNC_17(VAR_28) && FUNC_17(VAR_29))
    VAR_27 = FUNC_25("1");
   else
    VAR_27 = FUNC_25("0");
  } else if (FUNC_20(VAR_36->modifier, "==") == 0) {
   if (FUNC_20(VAR_28, VAR_29) == 0)
    VAR_27 = FUNC_25("1");
   else
    VAR_27 = FUNC_25("0");
  } else if (FUNC_20(VAR_36->modifier, "!=") == 0) {
   if (FUNC_20(VAR_28, VAR_29) != 0)
    VAR_27 = FUNC_25("1");
   else
    VAR_27 = FUNC_25("0");
  } else if (FUNC_20(VAR_36->modifier, "<") == 0) {
   if (FUNC_20(VAR_28, VAR_29) < 0)
    VAR_27 = FUNC_25("1");
   else
    VAR_27 = FUNC_25("0");
  } else if (FUNC_20(VAR_36->modifier, ">") == 0) {
   if (FUNC_20(VAR_28, VAR_29) > 0)
    VAR_27 = FUNC_25("1");
   else
    VAR_27 = FUNC_25("0");
  } else if (FUNC_20(VAR_36->modifier, "<=") == 0) {
   if (FUNC_20(VAR_28, VAR_29) <= 0)
    VAR_27 = FUNC_25("1");
   else
    VAR_27 = FUNC_25("0");
  } else if (FUNC_20(VAR_36->modifier, ">=") == 0) {
   if (FUNC_20(VAR_28, VAR_29) >= 0)
    VAR_27 = FUNC_25("1");
   else
    VAR_27 = FUNC_25("0");
  } else if (FUNC_20(VAR_36->modifier, "m") == 0)
   VAR_27 = FUNC_11(VAR_36, VAR_28, VAR_29);

  FUNC_18(VAR_29);
  FUNC_18(VAR_28);
 } else if (*VAR_20 == '?') {

  VAR_21 = FUNC_13(VAR_20 + 1, ",");
  if (VAR_21 == ((void*)0)) {
   FUNC_6(VAR_12, "condition syntax error: %s", VAR_20 + 1);
   goto fail;
  }
  VAR_24 = FUNC_26(VAR_20 + 1, VAR_21 - (VAR_20 + 1));
  FUNC_6(VAR_12, "condition is: %s", VAR_24);

  VAR_25 = FUNC_4(VAR_12, VAR_24, VAR_31);
  if (VAR_25 == ((void*)0)) {





   VAR_25 = FUNC_2(VAR_12, VAR_24);
   if (FUNC_20(VAR_25, VAR_24) == 0) {
    FUNC_18(VAR_25);
    VAR_25 = FUNC_25("");
    FUNC_6(VAR_12, "condition '%s' found: %s",
        VAR_24, VAR_25);
   } else {
    FUNC_6(VAR_12,
        "condition '%s' not found; assuming false",
        VAR_24);
   }
  } else
   FUNC_6(VAR_12, "condition '%s' found", VAR_24);

  if (FUNC_1(VAR_12, VAR_21 + 1, &VAR_28, &VAR_29, 0) != 0) {
   FUNC_6(VAR_12, "condition '%s' syntax error: %s",
       VAR_24, VAR_21 + 1);
   FUNC_18(VAR_25);
   goto fail;
  }
  if (FUNC_17(VAR_25)) {
   FUNC_6(VAR_12, "condition '%s' is true", VAR_24);
   VAR_27 = FUNC_2(VAR_12, VAR_28);
  } else {
   FUNC_6(VAR_12, "condition '%s' is false", VAR_24);
   VAR_27 = FUNC_2(VAR_12, VAR_29);
  }
  FUNC_18(VAR_29);
  FUNC_18(VAR_28);

  FUNC_18(VAR_24);
  FUNC_18(VAR_25);
 } else {

  VAR_27 = FUNC_4(VAR_12, VAR_20, VAR_31);
  if (VAR_27 == ((void*)0)) {
   FUNC_6(VAR_12, "format '%s' not found", VAR_20);
   VAR_27 = FUNC_25("");
  } else
   FUNC_6(VAR_12, "format '%s' found: %s", VAR_20, VAR_27);
 }

done:

 if (VAR_31 & VAR_2) {
  VAR_26 = FUNC_2(VAR_12, VAR_27);
  FUNC_18(VAR_27);
  VAR_27 = VAR_26;
 }
 else if (VAR_31 & VAR_3) {
  VAR_26 = FUNC_3(VAR_12, VAR_27);
  FUNC_18(VAR_27);
  VAR_27 = VAR_26;
 }


 if (VAR_38 != ((void*)0)) {
  VAR_28 = FUNC_2(VAR_12, VAR_38->argv[0]);
  VAR_29 = FUNC_2(VAR_12, VAR_38->argv[1]);
  VAR_26 = FUNC_14(VAR_38, VAR_27, VAR_28, VAR_29);
  FUNC_6(VAR_12, "substitute '%s' to '%s': %s", VAR_28, VAR_29, VAR_26);
  FUNC_18(VAR_27);
  VAR_27 = VAR_26;
  FUNC_18(VAR_29);
  FUNC_18(VAR_28);
 }


 if (VAR_32 > 0) {
  VAR_26 = FUNC_15(VAR_27, VAR_32);
  if (VAR_22 != ((void*)0) && FUNC_20(VAR_26, VAR_27) != 0) {
   FUNC_18(VAR_27);
   FUNC_23(&VAR_27, "%s%s", VAR_26, VAR_22);
  } else {
   FUNC_18(VAR_27);
   VAR_27 = VAR_26;
  }
  FUNC_6(VAR_12, "applied length limit %d: %s", VAR_32, VAR_27);
 } else if (VAR_32 < 0) {
  VAR_26 = FUNC_16(VAR_27, -VAR_32);
  if (VAR_22 != ((void*)0) && FUNC_20(VAR_26, VAR_27) != 0) {
   FUNC_18(VAR_27);
   FUNC_23(&VAR_27, "%s%s", VAR_22, VAR_26);
  } else {
   FUNC_18(VAR_27);
   VAR_27 = VAR_26;
  }
  FUNC_6(VAR_12, "applied length limit %d: %s", VAR_32, VAR_27);
 }


 VAR_30 = FUNC_21(VAR_27);
 while (*VAR_16 - *VAR_17 < VAR_30 + 1) {
  *VAR_15 = FUNC_24(*VAR_15, 2, *VAR_16);
  *VAR_16 *= 2;
 }
 FUNC_19(*VAR_15 + *VAR_17, VAR_27, VAR_30);
 *VAR_17 += VAR_30;

 FUNC_6(VAR_12, "replaced '%s' with '%s'", VAR_23, VAR_27);
 FUNC_18(VAR_27);

 FUNC_5(VAR_34, VAR_40);
 FUNC_18(VAR_23);
 return (0);

fail:
 FUNC_6(VAR_12, "failed %s", VAR_23);
 FUNC_5(VAR_34, VAR_40);
 FUNC_18(VAR_23);
 return (-1);
}
