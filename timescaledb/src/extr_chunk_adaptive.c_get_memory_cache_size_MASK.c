
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char const*,int*,int ,char const**) ;

__attribute__((used)) static int64
FUNC_3(void)
{
 const char *VAR_4;
 const char *VAR_5;
 int VAR_6;
 int64 VAR_7;

 if (VAR_3 > 0)
  return VAR_3;

 VAR_4 = FUNC_0("shared_buffers", 0, 0);

 if (((void*)0) == VAR_4)
  FUNC_1(VAR_1, "missing configuration for 'shared_buffers'");

 if (!FUNC_2(VAR_4, &VAR_6, VAR_2, &VAR_5))
  FUNC_1(VAR_1, "could not parse 'shared_buffers' setting: %s", VAR_5);

 VAR_7 = VAR_6;


 VAR_7 *= VAR_0;

 return VAR_7;
}
