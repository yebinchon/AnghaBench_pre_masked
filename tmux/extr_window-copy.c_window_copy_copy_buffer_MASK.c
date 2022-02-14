
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int dummy; } ;
struct window_mode_entry {struct window_pane* wp; } ;
struct screen_write_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct window_pane*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char const*,void*,size_t) ;
 int FUNC_3 (struct screen_write_ctx*,void*,size_t) ;
 int FUNC_4 (struct screen_write_ctx*,struct window_pane*,int *) ;
 int FUNC_5 (struct screen_write_ctx*) ;

__attribute__((used)) static void
FUNC_6(struct window_mode_entry *VAR_1, const char *VAR_2,
    void *VAR_3, size_t VAR_4)
{
 struct window_pane *VAR_5 = VAR_1->wp;
 struct screen_write_ctx VAR_6;

 if (FUNC_1(VAR_0, "set-clipboard") != 0) {
  FUNC_4(&VAR_6, VAR_5, ((void*)0));
  FUNC_3(&VAR_6, VAR_3, VAR_4);
  FUNC_5(&VAR_6);
  FUNC_0("pane-set-clipboard", VAR_5);
 }

 FUNC_2(VAR_2, VAR_3, VAR_4);
}
