
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;
struct session {int references; int creation_time; int id; int * name; int * tio; struct options* options; struct environ* environ; int windows; int lastw; int * curw; void* cwd; scalar_t__ flags; } ;
struct options {int dummy; } ;
struct environ {int dummy; } ;


 int * FUNC_0 (int ,int *,struct session*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,struct session*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,int *,int ) ;
 int FUNC_8 (int *,struct termios*,int) ;
 int VAR_0 ;
 int FUNC_9 (struct session*,int *) ;
 int VAR_1 ;
 int FUNC_10 (struct session*) ;
 int FUNC_11 (int **,char*,char const*,...) ;
 struct session* FUNC_12 (int,int) ;
 int * FUNC_13 (int) ;
 void* FUNC_14 (char const*) ;

struct session *
FUNC_15(const char *VAR_2, const char *VAR_3, const char *VAR_4,
    struct environ *VAR_5, struct options *VAR_6, struct termios *VAR_7)
{
 struct session *VAR_8;

 VAR_8 = FUNC_12(1, sizeof *VAR_8);
 VAR_8->references = 1;
 VAR_8->flags = 0;

 VAR_8->cwd = FUNC_14(VAR_4);

 VAR_8->curw = ((void*)0);
 FUNC_3(&VAR_8->lastw);
 FUNC_1(&VAR_8->windows);

 VAR_8->environ = VAR_5;
 VAR_8->options = VAR_6;

 FUNC_10(VAR_8);

 VAR_8->tio = ((void*)0);
 if (VAR_7 != ((void*)0)) {
  VAR_8->tio = FUNC_13(sizeof *VAR_8->tio);
  FUNC_8(VAR_8->tio, VAR_7, sizeof *VAR_8->tio);
 }

 if (VAR_3 != ((void*)0)) {
  VAR_8->name = FUNC_14(VAR_3);
  VAR_8->id = VAR_0++;
 } else {
  VAR_8->name = ((void*)0);
  do {
   VAR_8->id = VAR_0++;
   FUNC_5(VAR_8->name);
   if (VAR_2 != ((void*)0))
    FUNC_11(&VAR_8->name, "%s-%u", VAR_2, VAR_8->id);
   else
    FUNC_11(&VAR_8->name, "%u", VAR_8->id);
  } while (FUNC_0(VAR_1, &VAR_1, VAR_8) != ((void*)0));
 }
 FUNC_2(VAR_1, &VAR_1, VAR_8);

 FUNC_7("new session %s $%u", VAR_8->name, VAR_8->id);

 if (FUNC_6(&VAR_8->creation_time, ((void*)0)) != 0)
  FUNC_4("gettimeofday failed");
 FUNC_9(VAR_8, &VAR_8->creation_time);

 return (VAR_8);
}
