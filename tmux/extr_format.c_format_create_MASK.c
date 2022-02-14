
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_mode {int * default_format; int name; } ;
struct format_tree {int tag; int flags; int time; struct cmdq_item* item; struct client* client; int tree; } ;
struct cmdq_item {int dummy; } ;
struct client {int references; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 struct window_mode** VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int (*) (int,int ,int *),int *) ;
 int FUNC_3 (struct format_tree*,char*,char*,int *) ;
 int FUNC_4 (struct format_tree*,char*,int ) ;
 int FUNC_5 (struct format_tree*,char*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct format_tree*,struct cmdq_item*) ;
 int VAR_5 ;
 int FUNC_7 (int,int ,int *) ;
 int * VAR_6 ;
 int VAR_7 ;
 size_t FUNC_8 (char*,char*) ;
 int FUNC_9 (int *) ;
 struct format_tree* FUNC_10 (int,int) ;
 int FUNC_11 (char*,int,char*,int ) ;

struct format_tree *
FUNC_12(struct client *VAR_8, struct cmdq_item *VAR_9, int VAR_10, int VAR_11)
{
 struct format_tree *VAR_12;
 const struct window_mode **VAR_13;
 char VAR_14[64];

 if (!FUNC_1(&VAR_5)) {
  FUNC_2(&VAR_5, FUNC_7, ((void*)0));
  FUNC_7(-1, 0, ((void*)0));
 }

 VAR_12 = FUNC_10(1, sizeof *VAR_12);
 FUNC_0(&VAR_12->tree);

 if (VAR_8 != ((void*)0)) {
  VAR_12->client = VAR_8;
  VAR_12->client->references++;
 }
 VAR_12->item = VAR_9;

 VAR_12->tag = VAR_10;
 VAR_12->flags = VAR_11;
 VAR_12->time = FUNC_9(((void*)0));

 FUNC_3(VAR_12, "version", "%s", VAR_0);
 FUNC_4(VAR_12, "host", VAR_2);
 FUNC_4(VAR_12, "host_short", VAR_3);
 FUNC_4(VAR_12, "pid", VAR_4);
 FUNC_3(VAR_12, "socket_path", "%s", VAR_6);
 FUNC_5(VAR_12, "start_time", &VAR_7);

 for (VAR_13 = VAR_1; *VAR_13 != ((void*)0); VAR_13++) {
  if ((*VAR_13)->default_format != ((void*)0)) {
   FUNC_11(VAR_14, sizeof VAR_14, "%s_format", (*VAR_13)->name);
   VAR_14[FUNC_8(VAR_14, "-")] = '_';
   FUNC_3(VAR_12, VAR_14, "%s", (*VAR_13)->default_format);
  }
 }

 if (VAR_9 != ((void*)0))
  FUNC_6(VAR_12, VAR_9);

 return (VAR_12);
}
