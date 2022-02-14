
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int dummy; } ;
struct window_mode_entry {struct window_pane* wp; } ;
struct screen_write_ctx {int dummy; } ;
struct paste_buffer {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,struct window_pane*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 char* FUNC_5 (struct paste_buffer*,size_t*) ;
 struct paste_buffer* FUNC_6 (char const**) ;
 scalar_t__ FUNC_7 (char*,size_t,char const*,int *) ;
 int FUNC_8 (struct screen_write_ctx*,char*,size_t) ;
 int FUNC_9 (struct screen_write_ctx*,struct window_pane*,int *) ;
 int FUNC_10 (struct screen_write_ctx*) ;
 char* FUNC_11 (struct window_mode_entry*,size_t*) ;
 char* FUNC_12 (char*,size_t) ;

__attribute__((used)) static void
FUNC_13(struct window_mode_entry *VAR_1)
{
 struct window_pane *VAR_2 = VAR_1->wp;
 char *VAR_3;
 struct paste_buffer *VAR_4;
 const char *VAR_5, *VAR_6 = ((void*)0);
 size_t VAR_7, VAR_8;
 struct screen_write_ctx VAR_9;

 VAR_3 = FUNC_11(VAR_1, &VAR_7);
 if (VAR_3 == ((void*)0))
  return;

 if (FUNC_4(VAR_0, "set-clipboard") != 0) {
  FUNC_9(&VAR_9, VAR_2, ((void*)0));
  FUNC_8(&VAR_9, VAR_3, VAR_7);
  FUNC_10(&VAR_9);
  FUNC_3("pane-set-clipboard", VAR_2);
 }

 VAR_4 = FUNC_6(&VAR_6);
 if (VAR_4 != ((void*)0)) {
  VAR_5 = FUNC_5(VAR_4, &VAR_8);
  VAR_3 = FUNC_12(VAR_3, VAR_7 + VAR_8);
  FUNC_2(VAR_3 + VAR_8, VAR_3, VAR_7);
  FUNC_1(VAR_3, VAR_5, VAR_8);
  VAR_7 += VAR_8;
 }
 if (FUNC_7(VAR_3, VAR_7, VAR_6, ((void*)0)) != 0)
  FUNC_0(VAR_3);
}
