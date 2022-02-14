
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_context {int buf; scalar_t__ bufpos; } ;


 int FUNC_0 (char const***,int ) ;
 int FUNC_1 (struct format_context*,char const*,char const*) ;
 int FUNC_2 (int ,int ,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (int ,scalar_t__*,char*,int const,char const*) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_7(struct format_context *VAR_0, const char ***VAR_1, const char *VAR_2)
{
 FUNC_2(VAR_0->buf, 0, sizeof(VAR_0->buf));
 VAR_0->bufpos = 0;

 while (VAR_2) {
  const char *VAR_3 = FUNC_6(VAR_2, "%(");
  const char *VAR_4 = VAR_3 ? FUNC_3(VAR_3, ')') : ((void*)0);
  const char *VAR_5 = VAR_4 ? VAR_4 + 1 : ((void*)0);
  const int VAR_6 = VAR_3 ? VAR_3 - VAR_2 : FUNC_5(VAR_2);

  if (VAR_3 && !VAR_4)
   return 0;

  if (VAR_6 && !FUNC_4(VAR_0->buf, &VAR_0->bufpos, "%.*s", VAR_6, VAR_2))
   return 0;

  if (VAR_3 && !FUNC_1(VAR_0, VAR_3, VAR_5))
   return 0;

  VAR_2 = VAR_5;
 }

 return FUNC_0(VAR_1, VAR_0->buf);
}
