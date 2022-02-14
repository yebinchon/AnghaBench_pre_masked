
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (char*,int ,char*,char*,int ) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6(char *VAR_4, uint64_t VAR_5)
{
 char *VAR_6;
 char *VAR_7;
 char *VAR_8;
 char *VAR_9;
 char *VAR_10;
 int VAR_11;

 VAR_6 = FUNC_4(VAR_3, VAR_2);
 VAR_7 = FUNC_4(VAR_3, VAR_2);
 VAR_8 = FUNC_4(VAR_3, VAR_2);
 VAR_9 = FUNC_4(VAR_3, VAR_2);
 VAR_10 = FUNC_4(VAR_3, VAR_2);

 (void) FUNC_3(VAR_6, VAR_3,
     "%s@s1_%llu", VAR_4, (u_longlong_t)VAR_5);
 (void) FUNC_3(VAR_7, VAR_3,
     "%s/c1_%llu", VAR_4, (u_longlong_t)VAR_5);
 (void) FUNC_3(VAR_8, VAR_3,
     "%s@s2_%llu", VAR_7, (u_longlong_t)VAR_5);
 (void) FUNC_3(VAR_9, VAR_3,
     "%s/c2_%llu", VAR_4, (u_longlong_t)VAR_5);
 (void) FUNC_3(VAR_10, VAR_3,
     "%s@s3_%llu", VAR_7, (u_longlong_t)VAR_5);

 VAR_11 = FUNC_0(VAR_9);
 if (VAR_11 && VAR_11 != VAR_1)
  FUNC_2(0, "dsl_destroy_head(%s) = %d", VAR_9, VAR_11);
 VAR_11 = FUNC_1(VAR_10, VAR_0);
 if (VAR_11 && VAR_11 != VAR_1)
  FUNC_2(0, "dsl_destroy_snapshot(%s) = %d", VAR_10, VAR_11);
 VAR_11 = FUNC_1(VAR_8, VAR_0);
 if (VAR_11 && VAR_11 != VAR_1)
  FUNC_2(0, "dsl_destroy_snapshot(%s) = %d", VAR_8, VAR_11);
 VAR_11 = FUNC_0(VAR_7);
 if (VAR_11 && VAR_11 != VAR_1)
  FUNC_2(0, "dsl_destroy_head(%s) = %d", VAR_7, VAR_11);
 VAR_11 = FUNC_1(VAR_6, VAR_0);
 if (VAR_11 && VAR_11 != VAR_1)
  FUNC_2(0, "dsl_destroy_snapshot(%s) = %d", VAR_6, VAR_11);

 FUNC_5(VAR_6, VAR_3);
 FUNC_5(VAR_7, VAR_3);
 FUNC_5(VAR_8, VAR_3);
 FUNC_5(VAR_9, VAR_3);
 FUNC_5(VAR_10, VAR_3);
}
