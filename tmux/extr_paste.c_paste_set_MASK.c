
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paste_buffer {char* data; size_t size; int created; scalar_t__ order; scalar_t__ automatic; void* name; } ;


 int FUNC_0 (int ,int *,struct paste_buffer*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct paste_buffer*) ;
 struct paste_buffer* FUNC_4 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 struct paste_buffer* FUNC_6 (int) ;
 void* FUNC_7 (char const*) ;

int
FUNC_8(char *VAR_5, size_t VAR_6, const char *VAR_7, char **VAR_8)
{
 struct paste_buffer *VAR_9, *VAR_10;

 if (VAR_8 != ((void*)0))
  *VAR_8 = ((void*)0);

 if (VAR_6 == 0) {
  FUNC_1(VAR_5);
  return (0);
 }
 if (VAR_7 == ((void*)0)) {
  FUNC_2(((void*)0), VAR_5, VAR_6);
  return (0);
 }

 if (*VAR_7 == '\0') {
  if (VAR_8 != ((void*)0))
   *VAR_8 = FUNC_7("empty buffer name");
  return (-1);
 }

 VAR_9 = FUNC_6(sizeof *VAR_9);

 VAR_9->name = FUNC_7(VAR_7);

 VAR_9->data = VAR_5;
 VAR_9->size = VAR_6;

 VAR_9->automatic = 0;
 VAR_9->order = VAR_3++;

 VAR_9->created = FUNC_5(((void*)0));

 if ((VAR_10 = FUNC_4(VAR_7)) != ((void*)0))
  FUNC_3(VAR_10);

 FUNC_0(VAR_2, &VAR_0, VAR_9);
 FUNC_0(VAR_4, &VAR_1, VAR_9);

 return (0);
}
