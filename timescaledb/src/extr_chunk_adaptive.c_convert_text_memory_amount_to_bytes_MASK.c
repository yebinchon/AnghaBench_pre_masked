
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,int*,int ,char const**) ;

__attribute__((used)) static int64
FUNC_6(const char *VAR_4)
{
 const char *VAR_5;
 int VAR_6;
 int64 VAR_7;

 if (((void*)0) == VAR_4)
  FUNC_0(VAR_2, "invalid memory amount");

 if (!FUNC_5(VAR_4, &VAR_6, VAR_3, &VAR_5))
  FUNC_1(VAR_2,
    (FUNC_2(VAR_1),
     FUNC_4("invalid data amount"),
     FUNC_3("%s", VAR_5)));

 VAR_7 = VAR_6;
 VAR_7 *= VAR_0;

 return VAR_7;
}
