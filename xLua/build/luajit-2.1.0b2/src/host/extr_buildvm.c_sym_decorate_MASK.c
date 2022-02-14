
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; } ;
typedef TYPE_1__ BuildCtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,char const*,char const*,char const*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static const char *FUNC_5(BuildCtx *VAR_5,
    const char *VAR_6, const char *VAR_7)
{
  char VAR_8[256];
  char *VAR_9;





  const char *VAR_10 = VAR_5->mode != VAR_1 ? "_" : "";

  FUNC_1(VAR_8, "%s%s%s", VAR_10, VAR_6, VAR_7);
  VAR_9 = FUNC_2(VAR_8, '@');
  if (VAR_9) {
    *VAR_9 = '\0';

  }
  VAR_9 = (char *)FUNC_0(FUNC_4(VAR_8)+1);
  FUNC_3(VAR_9, VAR_8);
  return VAR_9;
}
