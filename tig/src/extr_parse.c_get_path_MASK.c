
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_entry {char const* path; } ;


 struct path_entry* FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct path_entry*) ;
 int VAR_0 ;
 struct path_entry* FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*,struct path_entry*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char const*,scalar_t__) ;

const char *
FUNC_6(const char *VAR_1)
{
 struct path_entry *VAR_2 = FUNC_2(&VAR_0, VAR_1);

 if (!VAR_2) {
  VAR_2 = FUNC_0(1, sizeof(*VAR_2) + FUNC_4(VAR_1));
  if (!VAR_2 || !FUNC_3(&VAR_0, VAR_1, VAR_2)) {
   FUNC_1(VAR_2);
   return ((void*)0);
  }
  FUNC_5(VAR_2->path, VAR_1, FUNC_4(VAR_1));
 }

 return VAR_2->path;
}
