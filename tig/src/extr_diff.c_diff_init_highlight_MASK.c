
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int pipe; } ;
struct view {struct io io; int dir; } ;
struct diff_state {int highlight; struct io view_io; } ;
struct app_external {char** argv; int env; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int VAR_1 ;
 struct app_external* FUNC_0 (int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (struct io*,int ,int ,int ,char**,int ) ;
 int * VAR_2 ;

enum status_code
FUNC_3(struct view *VAR_3, struct diff_state *VAR_4)
{
 if (!VAR_2 || !*VAR_2)
  return VAR_1;

 struct app_external *VAR_5 = FUNC_0(VAR_2);
 struct io VAR_6;







 if (!*VAR_5->argv)
  VAR_5->argv[0] = "";

 if (!FUNC_2(&VAR_6, VAR_0, VAR_3->dir, VAR_5->env, VAR_5->argv, VAR_3->io.pipe))
  return FUNC_1("Failed to run %s", VAR_2);

 VAR_4->view_io = VAR_3->io;
 VAR_3->io = VAR_6;
 VAR_4->highlight = 1;

 return VAR_1;
}
