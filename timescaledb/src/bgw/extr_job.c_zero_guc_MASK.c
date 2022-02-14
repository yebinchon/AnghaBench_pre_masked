
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*,char*,int ,int ,int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_5)
{
 int VAR_6 =
  FUNC_3(VAR_5, "0", VAR_3, VAR_4, VAR_2, 1, 0, 0);

 if (VAR_6 == 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0), FUNC_2("guc \"%s\" does not exist", VAR_5)));
 else if (VAR_6 < 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0), FUNC_2("could not set \"%s\" guc", VAR_5)));
}
