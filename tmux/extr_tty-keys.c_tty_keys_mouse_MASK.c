
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef char u_char ;
struct tty {int mouse_last_x; int mouse_last_y; int mouse_last_b; struct client* client; } ;
struct mouse_event {int lx; int x; int ly; int y; int lb; int b; char sgr_type; int sgr_b; } ;
struct client {int name; } ;


 int FUNC_0 (char*,int ,int,char const*) ;

__attribute__((used)) static int
FUNC_1(struct tty *VAR_0, const char *VAR_1, size_t VAR_2, size_t *VAR_3,
    struct mouse_event *VAR_4)
{
 struct client *VAR_5 = VAR_0->client;
 u_int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u_char VAR_11, VAR_12;
 *VAR_3 = 0;
 VAR_7 = VAR_8 = VAR_9 = VAR_10 = 0;
 VAR_11 = ' ';


 if (VAR_1[0] != '\033')
  return (-1);
 if (VAR_2 == 1)
  return (1);
 if (VAR_1[1] != '[')
  return (-1);
 if (VAR_2 == 2)
  return (1);





 if (VAR_1[2] == 'M') {

  *VAR_3 = 3;
  for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
   if (VAR_2 <= *VAR_3)
    return (1);
   VAR_12 = (u_char)VAR_1[(*VAR_3)++];
   if (VAR_6 == 0)
    VAR_9 = VAR_12;
   else if (VAR_6 == 1)
    VAR_7 = VAR_12;
   else
    VAR_8 = VAR_12;
  }
  FUNC_0("%s: mouse input: %.*s", VAR_5->name, (int)*VAR_3, VAR_1);


  if (VAR_9 < 32)
   return (-1);
  VAR_9 -= 32;
  if (VAR_7 >= 33)
   VAR_7 -= 33;
  else
   VAR_7 = 256 - VAR_7;
  if (VAR_8 >= 33)
   VAR_8 -= 33;
  else
   VAR_8 = 256 - VAR_8;
 } else if (VAR_1[2] == '<') {

  *VAR_3 = 3;
  while (1) {
   if (VAR_2 <= *VAR_3)
    return (1);
   VAR_12 = (u_char)VAR_1[(*VAR_3)++];
   if (VAR_12 == ';')
    break;
   if (VAR_12 < '0' || VAR_12 > '9')
    return (-1);
   VAR_10 = 10 * VAR_10 + (VAR_12 - '0');
  }
  while (1) {
   if (VAR_2 <= *VAR_3)
    return (1);
   VAR_12 = (u_char)VAR_1[(*VAR_3)++];
   if (VAR_12 == ';')
    break;
   if (VAR_12 < '0' || VAR_12 > '9')
    return (-1);
   VAR_7 = 10 * VAR_7 + (VAR_12 - '0');
  }
  while (1) {
   if (VAR_2 <= *VAR_3)
    return (1);
   VAR_12 = (u_char)VAR_1[(*VAR_3)++];
   if (VAR_12 == 'M' || VAR_12 == 'm')
    break;
   if (VAR_12 < '0' || VAR_12 > '9')
    return (-1);
   VAR_8 = 10 * VAR_8 + (VAR_12 - '0');
  }
  FUNC_0("%s: mouse input (SGR): %.*s", VAR_5->name, (int)*VAR_3,
      VAR_1);


  if (VAR_7 < 1 || VAR_8 < 1)
   return (-1);
  VAR_7--;
  VAR_8--;
  VAR_9 = VAR_10;


  VAR_11 = VAR_12;
  if (VAR_11 == 'm')
   VAR_9 |= 3;







  if (VAR_11 == 'm' && (VAR_10 & 64))
      return (-2);
 } else
  return (-1);


 VAR_4->lx = VAR_0->mouse_last_x;
 VAR_4->x = VAR_7;
 VAR_4->ly = VAR_0->mouse_last_y;
 VAR_4->y = VAR_8;
 VAR_4->lb = VAR_0->mouse_last_b;
 VAR_4->b = VAR_9;
 VAR_4->sgr_type = VAR_11;
 VAR_4->sgr_b = VAR_10;


 VAR_0->mouse_last_x = VAR_7;
 VAR_0->mouse_last_y = VAR_8;
 VAR_0->mouse_last_b = VAR_9;

 return (0);
}
