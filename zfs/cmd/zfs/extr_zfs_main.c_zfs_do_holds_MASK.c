
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_3__ {char const* cb_snapname; int cb_max_taglen; int cb_max_namelen; int ** cb_nvlp; scalar_t__ cb_recursive; int member_0; } ;
typedef TYPE_1__ holds_cbdata_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,char**,char const*) ;
 char* FUNC_2 (char*) ;
 int VAR_7 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (scalar_t__,int ,int ,int *) ;
 int VAR_10 ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,char**,int,int,int *,int *,int,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(int VAR_11, char **VAR_12)
{
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15;
 boolean_t VAR_16 = VAR_0;
 boolean_t VAR_17 = VAR_0;
 const char *VAR_18 = "rH";
 nvlist_t *VAR_19;

 int VAR_20 = VAR_5;
 holds_cbdata_t VAR_21 = { 0 };

 int VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24 = 0;


 while ((VAR_14 = FUNC_1(VAR_11, VAR_12, VAR_18)) != -1) {
  switch (VAR_14) {
  case 'r':
   VAR_17 = VAR_1;
   break;
  case 'H':
   VAR_16 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_10, FUNC_2("invalid option '%c'\n"),
       VAR_9);
   FUNC_9(VAR_0);
  }
 }

 if (VAR_17) {
  VAR_20 |= VAR_4 | VAR_6;
  VAR_24 |= VAR_3;
 }

 VAR_11 -= VAR_8;
 VAR_12 += VAR_8;


 if (VAR_11 < 1)
  FUNC_9(VAR_0);

 if (FUNC_4(&VAR_19, VAR_2, 0) != 0)
  FUNC_3();

 for (VAR_15 = 0; VAR_15 < VAR_11; ++VAR_15) {
  char *VAR_25 = VAR_12[VAR_15];
  const char *VAR_26;
  const char *VAR_27;

  VAR_26 = FUNC_8(VAR_25, '@');
  if (VAR_26 == ((void*)0)) {
   (void) FUNC_0(VAR_10,
       FUNC_2("'%s' is not a snapshot\n"), VAR_25);
   ++VAR_13;
   continue;
  }
  VAR_27 = VAR_26 + 1;
  if (VAR_17)
   VAR_25[VAR_26 - VAR_25] = '\0';

  VAR_21.cb_recursive = VAR_17;
  VAR_21.cb_snapname = VAR_27;
  VAR_21.cb_nvlp = &VAR_19;




  VAR_23 = FUNC_10(VAR_11, VAR_12, VAR_24, VAR_20, ((void*)0), ((void*)0), VAR_22,
      VAR_7, &VAR_21);
  if (VAR_23 != 0)
   ++VAR_13;
 }




 FUNC_7(VAR_16, VAR_21.cb_max_namelen, VAR_21.cb_max_taglen, VAR_19);

 if (FUNC_5(VAR_19))
  (void) FUNC_0(VAR_10, "%s", FUNC_2("no datasets available\n"));

 FUNC_6(VAR_19);

 return (0 != VAR_13);
}
