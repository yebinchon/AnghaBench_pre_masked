
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char**) ;
 int FUNC_4 (char*,char**,int ) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,char*,char const*,char const*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_3, const char *VAR_4,
    const char *VAR_5, const char *VAR_6, void *VAR_7)
{
 int VAR_8;
 char *VAR_9, *VAR_10, *VAR_11;
 const char *VAR_12 = (const char *)VAR_7;
 char *VAR_13[6];



 VAR_8 = FUNC_3(VAR_4, &VAR_9);

 if (VAR_8 < 0)
  FUNC_0(1);

 VAR_10 = FUNC_5(FUNC_7(VAR_9) + 1 + FUNC_7(VAR_3) + 1);

 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_9);

  FUNC_0(1);
 }

 FUNC_6(VAR_10, "%s:%s", VAR_9, VAR_3);

 FUNC_2(VAR_9);

 if (VAR_12 == ((void*)0))
  VAR_12 = "";

 VAR_11 = FUNC_5(4 + FUNC_7(VAR_5) + 4 + FUNC_7(VAR_12) + 1);

 if (VAR_11 == ((void*)0))
  FUNC_0(1);

 FUNC_6(VAR_11, "sec=%s,%s,%s", VAR_5, VAR_6, VAR_12);





 VAR_13[0] = "/usr/sbin/exportfs";
 VAR_13[1] = "-i";
 VAR_13[2] = "-o";
 VAR_13[3] = VAR_11;
 VAR_13[4] = VAR_10;
 VAR_13[5] = ((void*)0);

 VAR_8 = FUNC_4(VAR_13[0], VAR_13, 0);

 FUNC_2(VAR_10);
 FUNC_2(VAR_11);

 if (VAR_8 < 0)
  return (VAR_1);
 else
  return (VAR_0);
}
