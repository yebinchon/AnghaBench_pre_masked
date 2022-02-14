
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paste_buffer {scalar_t__ automatic; void* name; } ;


 int FUNC_0 (int ,int *,struct paste_buffer*) ;
 int FUNC_1 (int ,int *,struct paste_buffer*) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 struct paste_buffer* FUNC_3 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char**,char*,char const*) ;
 void* FUNC_5 (char const*) ;

int
FUNC_6(const char *VAR_3, const char *VAR_4, char **VAR_5)
{
 struct paste_buffer *VAR_6, *VAR_7;

 if (VAR_5 != ((void*)0))
  *VAR_5 = ((void*)0);

 if (VAR_3 == ((void*)0) || *VAR_3 == '\0') {
  if (VAR_5 != ((void*)0))
   *VAR_5 = FUNC_5("no buffer");
  return (-1);
 }
 if (VAR_4 == ((void*)0) || *VAR_4 == '\0') {
  if (VAR_5 != ((void*)0))
   *VAR_5 = FUNC_5("new name is empty");
  return (-1);
 }

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6 == ((void*)0)) {
  if (VAR_5 != ((void*)0))
   FUNC_4(VAR_5, "no buffer %s", VAR_3);
  return (-1);
 }

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7 != ((void*)0)) {
  if (VAR_5 != ((void*)0))
   FUNC_4(VAR_5, "buffer %s already exists", VAR_4);
  return (-1);
 }

 FUNC_1(VAR_1, &VAR_0, VAR_6);

 FUNC_2(VAR_6->name);
 VAR_6->name = FUNC_5(VAR_4);

 if (VAR_6->automatic)
  VAR_2--;
 VAR_6->automatic = 0;

 FUNC_0(VAR_1, &VAR_0, VAR_6);

 return (0);
}
