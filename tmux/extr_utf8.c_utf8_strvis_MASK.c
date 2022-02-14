
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct utf8_data {size_t size; int have; int * data; } ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct utf8_data*,char const) ;
 int FUNC_2 (struct utf8_data*,char const) ;
 char* FUNC_3 (char*,char const,int,char const) ;

int
FUNC_4(char *VAR_2, const char *VAR_3, size_t VAR_4, int VAR_5)
{
 struct utf8_data VAR_6;
 const char *VAR_7, *VAR_8;
 enum utf8_state VAR_9;
 size_t VAR_10;

 VAR_7 = VAR_2;
 VAR_8 = VAR_3 + VAR_4;

 while (VAR_3 < VAR_8) {
  if ((VAR_9 = FUNC_2(&VAR_6, *VAR_3)) == VAR_1) {
   while (++VAR_3 < VAR_8 && VAR_9 == VAR_1)
    VAR_9 = FUNC_1(&VAR_6, *VAR_3);
   if (VAR_9 == VAR_0) {

    for (VAR_10 = 0; VAR_10 < VAR_6.size; VAR_10++)
     *VAR_2++ = VAR_6.data[VAR_10];
    continue;
   }

   VAR_3 -= VAR_6.have;
  }
  if (VAR_3[0] == '$' && VAR_3 < VAR_8 - 1) {
   if (FUNC_0((u_char)VAR_3[1]) ||
       VAR_3[1] == '_' ||
       VAR_3[1] == '{')
    *VAR_2++ = '\\';
   *VAR_2++ = '$';
  } else if (VAR_3 < VAR_8 - 1)
   VAR_2 = FUNC_3(VAR_2, VAR_3[0], VAR_5, VAR_3[1]);
  else if (VAR_3 < VAR_8)
   VAR_2 = FUNC_3(VAR_2, VAR_3[0], VAR_5, '\0');
  VAR_3++;
 }

 *VAR_2 = '\0';
 return (VAR_2 - VAR_7);
}
