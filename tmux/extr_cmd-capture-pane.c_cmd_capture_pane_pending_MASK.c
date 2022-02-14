
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct window_pane {int dummy; } ;
struct evbuffer {int dummy; } ;
struct args {int dummy; } ;


 char* FUNC_0 (struct evbuffer*) ;
 size_t FUNC_1 (struct evbuffer*) ;
 scalar_t__ FUNC_2 (struct args*,char) ;
 char* FUNC_3 (char*,size_t*,char*,size_t) ;
 struct evbuffer* FUNC_4 (struct window_pane*) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char*,char) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static char *
FUNC_8(struct args *VAR_0, struct window_pane *VAR_1,
    size_t *VAR_2)
{
 struct evbuffer *VAR_3;
 char *VAR_4, *VAR_5, VAR_6[5];
 size_t VAR_7;
 u_int VAR_8;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 == ((void*)0))
  return (FUNC_7(""));

 VAR_5 = FUNC_0(VAR_3);
 VAR_7 = FUNC_1(VAR_3);

 VAR_4 = FUNC_7("");
 if (FUNC_2(VAR_0, 'C')) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   if (VAR_5[VAR_8] >= ' ' && VAR_5[VAR_8] != '\\') {
    VAR_6[0] = VAR_5[VAR_8];
    VAR_6[1] = '\0';
   } else
    FUNC_6(VAR_6, sizeof VAR_6, "\\%03hho", VAR_5[VAR_8]);
   VAR_4 = FUNC_3(VAR_4, VAR_2, VAR_6,
       FUNC_5(VAR_6));
  }
 } else
  VAR_4 = FUNC_3(VAR_4, VAR_2, VAR_5, VAR_7);
 return (VAR_4);
}
