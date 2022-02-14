
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int pid; int pipe; void* error; } ;
typedef enum io_type { ____Placeholder_io_type } io_type ;


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
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 void* VAR_11 ;
 int FUNC_5 (char const*,char* const*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct io*) ;
 int FUNC_8 (struct io*,char*,char const*,char const*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int,char const**) ;
 scalar_t__ FUNC_11 (int*) ;
 int FUNC_12 (char* const) ;
 int FUNC_13 (char const*,char const*) ;

bool
FUNC_14(struct io *VAR_12, enum io_type VAR_13, const char *VAR_14, char * const VAR_15[], const char *VAR_16[], int VAR_17)
{
 int VAR_18[2] = { -1, -1 };
 bool VAR_19 = VAR_13 == VAR_2 && (VAR_17 & VAR_3);
 bool VAR_20 = VAR_13 == VAR_2 && (VAR_17 & VAR_4);

 FUNC_7(VAR_12);

 if (VAR_14 && !FUNC_13(VAR_14, VAR_16[0]))
  return FUNC_8(VAR_12, "%s%s", VAR_14, VAR_16[1]);

 if ((VAR_13 == VAR_2 || VAR_13 == VAR_5 || VAR_13 == VAR_6) && FUNC_11(VAR_18) < 0) {
  VAR_12->error = VAR_11;
  return 0;
 } else if (VAR_13 == VAR_0) {
  VAR_18[1] = VAR_17;
 }

 if ((VAR_12->pid = FUNC_6())) {
  if (VAR_12->pid == -1)
   VAR_12->error = VAR_11;
  if (VAR_18[!(VAR_13 == VAR_6)] != -1)
   FUNC_2(VAR_18[!(VAR_13 == VAR_6)]);
  if (VAR_12->pid != -1) {
   VAR_12->pipe = VAR_18[!!(VAR_13 == VAR_6)];
   return 1;
  }

 } else {
  if (VAR_13 != VAR_1) {
   int VAR_21 = FUNC_9("/dev/null", VAR_7);
   int VAR_22 = VAR_13 == VAR_6 ? VAR_18[0]
        : VAR_13 == VAR_5 ? VAR_17
        : VAR_21;
   int VAR_23 = (VAR_13 == VAR_2 || VAR_13 == VAR_5 || VAR_13 == VAR_0)
        ? VAR_18[1] : VAR_21;
   int VAR_24 = FUNC_10(VAR_21, VAR_16);


   if (VAR_19)
    VAR_22 = FUNC_3(VAR_9);

   FUNC_4(VAR_22, VAR_9);
   FUNC_4(VAR_23, VAR_10);
   if (VAR_20)
    FUNC_4(VAR_23, VAR_8);
   else
    FUNC_4(VAR_24, VAR_8);

   if (VAR_21 != VAR_24)
    FUNC_2(VAR_24);
   FUNC_2(VAR_21);
   if (VAR_18[0] != -1)
    FUNC_2(VAR_18[0]);
   if (VAR_18[1] != -1)
    FUNC_2(VAR_18[1]);
  }

  if (VAR_14 && *VAR_14 && FUNC_1(VAR_14) == -1)
   FUNC_0(VAR_11);

  if (VAR_15) {
   int VAR_25;

   for (VAR_25 = 0; VAR_15[VAR_25]; VAR_25++)
    if (*VAR_15[VAR_25])
     FUNC_12(VAR_15[VAR_25]);
  }

  FUNC_5(VAR_16[0], (char *const*) VAR_16);

  FUNC_2(VAR_10);
  FUNC_0(VAR_11);
 }

 if (VAR_18[!!(VAR_13 == VAR_6)] != -1)
  FUNC_2(VAR_18[!!(VAR_13 == VAR_6)]);
 return 0;
}
