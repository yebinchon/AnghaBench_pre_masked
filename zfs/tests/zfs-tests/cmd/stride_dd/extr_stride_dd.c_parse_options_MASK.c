
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(int VAR_8, char *VAR_9[])
{
 int VAR_10;
 int VAR_11 = 0;

 VAR_2 = VAR_9[0];

 extern char *VAR_12;
 extern int VAR_13, VAR_14;

 while ((VAR_10 = FUNC_2(VAR_8, VAR_9, ":b:c:i:o:s:k:")) != -1) {
  switch (VAR_10) {
   case 'b':
    VAR_0 = FUNC_0(VAR_12);
    break;

   case 'c':
    VAR_1 = FUNC_0(VAR_12);
    break;

   case 'i':
    VAR_3 = VAR_12;
    break;

   case 'o':
    VAR_4 = VAR_12;
    break;

   case 's':
    VAR_7 = FUNC_0(VAR_12);
    break;

   case 'k':
    VAR_5 = FUNC_0(VAR_12);
    break;

   case ':':
    (void) FUNC_1(VAR_6,
        "Option -%c requires an operand\n", VAR_14);
    VAR_11++;
    break;

   case '?':
   default:
    (void) FUNC_1(VAR_6,
        "Unrecognized option: -%c\n", VAR_14);
    VAR_11++;
    break;
  }

  if (VAR_11) {
   (void) FUNC_3();
  }
 }

 if (VAR_0 <= 0 || VAR_1 <= 0 || VAR_7 <= 0 || VAR_3 == ((void*)0) ||
     VAR_4 == ((void*)0) || VAR_5 < 0) {
  (void) FUNC_1(VAR_6,
      "Required parameter(s) missing or invalid.\n");
  (void) FUNC_3();
 }
}
