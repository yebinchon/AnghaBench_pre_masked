
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
typedef int u_char ;
struct layout_cell {int type; int cells; void* yoff; void* xoff; void* sy; void* sx; } ;




 int FUNC_0 (int *,struct layout_cell*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct layout_cell* FUNC_2 (struct layout_cell*) ;
 int FUNC_3 (struct layout_cell*) ;
 int FUNC_4 (char const*,char*,void**,void**,void**,void**) ;

__attribute__((used)) static struct layout_cell *
FUNC_5(struct layout_cell *VAR_1, const char **VAR_2)
{
 struct layout_cell *VAR_3, *VAR_4;
 u_int VAR_5, VAR_6, VAR_7, VAR_8;
 const char *VAR_9;

 if (!FUNC_1((u_char) **VAR_2))
  return (((void*)0));
 if (FUNC_4(*VAR_2, "%ux%u,%u,%u", &VAR_5, &VAR_6, &VAR_7, &VAR_8) != 4)
  return (((void*)0));

 while (FUNC_1((u_char) **VAR_2))
  (*VAR_2)++;
 if (**VAR_2 != 'x')
  return (((void*)0));
 (*VAR_2)++;
 while (FUNC_1((u_char) **VAR_2))
  (*VAR_2)++;
 if (**VAR_2 != ',')
  return (((void*)0));
 (*VAR_2)++;
 while (FUNC_1((u_char) **VAR_2))
  (*VAR_2)++;
 if (**VAR_2 != ',')
  return (((void*)0));
 (*VAR_2)++;
 while (FUNC_1((u_char) **VAR_2))
  (*VAR_2)++;
 if (**VAR_2 == ',') {
  VAR_9 = *VAR_2;
  (*VAR_2)++;
  while (FUNC_1((u_char) **VAR_2))
   (*VAR_2)++;
  if (**VAR_2 == 'x')
   *VAR_2 = VAR_9;
 }

 VAR_3 = FUNC_2(VAR_1);
 VAR_3->sx = VAR_5;
 VAR_3->sy = VAR_6;
 VAR_3->xoff = VAR_7;
 VAR_3->yoff = VAR_8;

 switch (**VAR_2) {
 case ',':
 case '}':
 case ']':
 case '\0':
  return (VAR_3);
 case '{':
  VAR_3->type = 129;
  break;
 case '[':
  VAR_3->type = 128;
  break;
 default:
  goto fail;
 }

 do {
  (*VAR_2)++;
  VAR_4 = FUNC_5(VAR_3, VAR_2);
  if (VAR_4 == ((void*)0))
   goto fail;
  FUNC_0(&VAR_3->cells, VAR_4, VAR_0);
 } while (**VAR_2 == ',');

 switch (VAR_3->type) {
 case 129:
  if (**VAR_2 != '}')
   goto fail;
  break;
 case 128:
  if (**VAR_2 != ']')
   goto fail;
  break;
 default:
  goto fail;
 }
 (*VAR_2)++;

 return (VAR_3);

fail:
 FUNC_3(VAR_3);
 return (((void*)0));
}
