
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct view*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 int FUNC_2 (struct view*,char**,char,int ) ;

__attribute__((used)) static bool
FUNC_3(struct view *VAR_5)
{
 if (!VAR_3)
  return FUNC_1(VAR_5, VAR_1)
      && FUNC_1(VAR_5, VAR_0);

 VAR_4[FUNC_0(VAR_4) - 3] =
  VAR_2 ? ((void*)0) : "--directory";
 VAR_4[FUNC_0(VAR_4) - 2] =
  VAR_2 ? ((void*)0) : "--no-empty-directory";

 return FUNC_2(VAR_5, VAR_4, '?', VAR_1);
}
