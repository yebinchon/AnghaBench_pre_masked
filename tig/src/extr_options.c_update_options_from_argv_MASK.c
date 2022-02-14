
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*,int ,char const*) ;
 int FUNC_1 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int*,char const*,int ,int) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (char const*) ;

void
FUNC_7(const char *VAR_8[])
{
 int VAR_9, VAR_10;

 for (VAR_9 = VAR_10 = 0; VAR_8[VAR_9]; VAR_9++) {
  const char *VAR_11 = VAR_8[VAR_9];
  int VAR_12 = -1;

  if (FUNC_0(&VAR_12, VAR_1, VAR_11)) {
   VAR_3 = VAR_12;
   FUNC_1(&VAR_3);
   continue;
  }

  if (FUNC_0(&VAR_12, VAR_2, VAR_11)) {
   VAR_5 = VAR_12;
   FUNC_1(&VAR_5);
   continue;
  }

  if (!FUNC_4(VAR_11, "--no-notes")) {
   VAR_7 = 0;
   FUNC_1(&VAR_7);
   continue;
  }

  if (!FUNC_3(VAR_11, "--show-notes") ||
      !FUNC_3(VAR_11, "--notes")) {
   VAR_7 = 1;
   FUNC_5(VAR_6, VAR_11, FUNC_6(VAR_11));
   FUNC_1(&VAR_7);
   continue;
  }

  if (!FUNC_3(VAR_11, "-U")
      && FUNC_2(&VAR_12, VAR_11 + 2, 0, 999999) == VAR_0) {
   VAR_4 = VAR_12;
   FUNC_1(&VAR_4);
   continue;
  }

  VAR_8[VAR_10++] = VAR_11;
 }

 VAR_8[VAR_10] = ((void*)0);
}
