
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char**) ;
 int FUNC_4 (char*,char**,int ) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,char*,char*,char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_3, const char *VAR_4,
    const char *VAR_5, const char *VAR_6, void *VAR_7)
{
 int VAR_8;
 char *VAR_9, *VAR_10;
 char *VAR_11[4];

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





 VAR_11[0] = "/usr/sbin/exportfs";
 VAR_11[1] = "-u";
 VAR_11[2] = VAR_10;
 VAR_11[3] = ((void*)0);

 VAR_8 = FUNC_4(VAR_11[0], VAR_11, 0);

 FUNC_2(VAR_10);

 if (VAR_8 < 0)
  return (VAR_1);
 else
  return (VAR_0);
}
