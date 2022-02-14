
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 size_t FUNC_0 (char*,int,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

const char *
FUNC_1(int VAR_13)
{
 static char VAR_14[512];
 size_t VAR_15;

 if (VAR_13 == 0)
  return ("none");

 VAR_15 = FUNC_0(VAR_14, sizeof VAR_14, "%s%s%s%s%s%s%s%s%s%s%s%s%s",
     (VAR_13 & VAR_1) ? "bright," : "",
     (VAR_13 & VAR_2) ? "dim," : "",
     (VAR_13 & VAR_8) ? "underscore," : "",
     (VAR_13 & VAR_0)? "blink," : "",
     (VAR_13 & VAR_6) ? "reverse," : "",
     (VAR_13 & VAR_3) ? "hidden," : "",
     (VAR_13 & VAR_4) ? "italics," : "",
     (VAR_13 & VAR_7) ? "strikethrough," : "",
     (VAR_13 & VAR_9) ? "double-underscore," : "",
     (VAR_13 & VAR_10) ? "curly-underscore," : "",
     (VAR_13 & VAR_11) ? "dotted-underscore," : "",
     (VAR_13 & VAR_12) ? "dashed-underscore," : "",
     (VAR_13 & VAR_5) ? "overline," : "");
 if (VAR_15 > 0)
  VAR_14[VAR_15 - 1] = '\0';

 return (VAR_14);
}
