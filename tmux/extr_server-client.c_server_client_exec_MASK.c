
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int options; } ;
struct client {int peer; struct session* session; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int,char*,size_t) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (size_t) ;

void
FUNC_6(struct client *VAR_2, const char *VAR_3)
{
 struct session *VAR_4 = VAR_2->session;
 char *VAR_5;
 const char *VAR_6;
 size_t VAR_7, VAR_8;

 if (*VAR_3 == '\0')
  return;
 VAR_7 = FUNC_4(VAR_3) + 1;

 if (VAR_4 != ((void*)0))
  VAR_6 = FUNC_2(VAR_4->options, "default-shell");
 else
  VAR_6 = FUNC_2(VAR_1, "default-shell");
 VAR_8 = FUNC_4(VAR_6) + 1;

 VAR_5 = FUNC_5(VAR_7 + VAR_8);
 FUNC_1(VAR_5, VAR_3, VAR_7);
 FUNC_1(VAR_5 + VAR_7, VAR_6, VAR_8);

 FUNC_3(VAR_2->peer, VAR_0, -1, VAR_5, VAR_7 + VAR_8);
 FUNC_0(VAR_5);
}
