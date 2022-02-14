
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char pid_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
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
 int FUNC_0 (int ) ;
 char** VAR_13 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char FUNC_3 () ;
 int FUNC_4 (int ,int ,int,...) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_14, const char *VAR_15)
{
 const char *VAR_16;
 char **VAR_17;
 size_t VAR_18;
 int VAR_19, VAR_20 = VAR_11;
 pid_t VAR_21;

 FUNC_4(VAR_12, VAR_6, -1, &VAR_20, sizeof VAR_20);

 if ((VAR_16 = FUNC_2("TERM")) == ((void*)0))
  VAR_16 = "";
 FUNC_4(VAR_12, VAR_8, -1, VAR_16, FUNC_5(VAR_16) + 1);

 FUNC_4(VAR_12, VAR_9, -1, VAR_14,
     FUNC_5(VAR_14) + 1);
 FUNC_4(VAR_12, VAR_3, -1, VAR_15, FUNC_5(VAR_15) + 1);

 if ((VAR_19 = FUNC_0(VAR_10)) == -1)
  FUNC_1("dup failed");
 FUNC_4(VAR_12, VAR_7, VAR_19, ((void*)0), 0);

 VAR_21 = FUNC_3();
 FUNC_4(VAR_12, VAR_2, -1, &VAR_21, sizeof VAR_21);

 for (VAR_17 = VAR_13; *VAR_17 != ((void*)0); VAR_17++) {
  VAR_18 = FUNC_5(*VAR_17) + 1;
  if (VAR_18 > VAR_1 - VAR_0)
   continue;
  FUNC_4(VAR_12, VAR_5, -1, *VAR_17, VAR_18);
 }

 FUNC_4(VAR_12, VAR_4, -1, ((void*)0), 0);
}
