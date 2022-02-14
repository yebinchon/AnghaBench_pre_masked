
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {int dummy; } ;


 int VAR_0 ;
 struct client* FUNC_0 (int *) ;
 int * VAR_1 ;
 struct client* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct client*,int ) ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 () ;
 int FUNC_4 (int *,struct client*,int *,int,int *) ;
 int FUNC_5 (int **,char*,char const*) ;

void
FUNC_6(void)
{
 const char *VAR_8;
 int VAR_9 = 0;
 struct client *VAR_10;
 VAR_2 = VAR_10 = FUNC_0(&VAR_7);
 if (VAR_10 != ((void*)0)) {
  VAR_6 = FUNC_2(VAR_3, ((void*)0));
  FUNC_1(VAR_10, VAR_6);
 }

 if (VAR_5 == ((void*)0))
  FUNC_4(VAR_1, VAR_10, ((void*)0), VAR_0, ((void*)0));

 if (VAR_5 == ((void*)0) && (VAR_8 = FUNC_3()) != ((void*)0)) {
  FUNC_5(&VAR_5, "%s/.tmux.conf", VAR_8);
  VAR_9 = VAR_0;
 }
 if (VAR_5 != ((void*)0))
  FUNC_4(VAR_5, VAR_10, ((void*)0), VAR_9, ((void*)0));

 FUNC_1(((void*)0), FUNC_2(VAR_4, ((void*)0)));
}
