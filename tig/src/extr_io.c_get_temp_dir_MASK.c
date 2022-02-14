
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;

const char *
FUNC_1(void)
{
 static const char *VAR_0;

 if (VAR_0)
  return VAR_0;

 if (!VAR_0)
  VAR_0 = FUNC_0("TMPDIR");
 if (!VAR_0)
  VAR_0 = FUNC_0("TEMP");
 if (!VAR_0)
  VAR_0 = FUNC_0("TMP");
 if (!VAR_0)
  VAR_0 = "/tmp";

 return VAR_0;
}
