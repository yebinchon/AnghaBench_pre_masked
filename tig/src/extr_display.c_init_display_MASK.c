
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * file; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int ) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int,int,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (char const*,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (int ,int ) ;

void
FUNC_17(void)
{
 bool VAR_12 = !!FUNC_5("TIG_NO_DISPLAY");
 const char *VAR_13;
 int VAR_14, VAR_15;

 if (!VAR_7.file)
  FUNC_1("Can't initialize display without tty");

 if (FUNC_0(VAR_4))
  FUNC_1("Failed to register done_display");


 if (!VAR_12 && FUNC_9(VAR_1)) {

  VAR_3 = !!FUNC_8();
 } else {

  FILE *VAR_16;

  VAR_16 = VAR_12 ? FUNC_3("/dev/null", "w+") : VAR_7.file;
  if (!VAR_16)
   FUNC_1("Failed to open tty for output");
  VAR_3 = !!FUNC_11(((void*)0), VAR_16, VAR_7.file);
 }

 if (!VAR_3)
  FUNC_1("Failed to initialize curses");

 FUNC_14();
 FUNC_7();

 FUNC_6(VAR_9, VAR_15, VAR_14);
 VAR_8 = FUNC_12(1, VAR_14, VAR_15 - 1, 0);
 if (!VAR_8)
  FUNC_1("Failed to create status window");


 FUNC_10(VAR_8, 1);
 FUNC_16(VAR_8, FUNC_4(((void*)0), VAR_0));
 FUNC_2(VAR_5);




 VAR_2 = VAR_6;


 VAR_13 = FUNC_5("XTERM_VERSION")
     ? ((void*)0)
     : (FUNC_5("TERM_PROGRAM") ? FUNC_5("TERM_PROGRAM") : FUNC_5("COLORTERM"));
 if (VAR_13 && !FUNC_15(VAR_13, "gnome-terminal")) {





  VAR_11 = 1;
  VAR_10 = 0;

 } else if (VAR_13 &&
      (!FUNC_15(VAR_13, "xrvt-xpm") || !FUNC_15(VAR_13, "Apple_Terminal") ||
    !FUNC_15(VAR_13, "iTerm.app"))) {





  VAR_11 = VAR_10 = 0;

 } else {



  VAR_10 = 1;
  VAR_11 = 0;
 }
}
