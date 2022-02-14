
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session_group {int name; } ;
struct session {int name; int id; int attached; int activity_time; int last_attached_time; int creation_time; int windows; } ;
struct format_tree {struct session* s; } ;


 int FUNC_0 (struct format_tree*,char*,char*,int) ;
 int FUNC_1 (struct format_tree*,char*,int ) ;
 int FUNC_2 (struct format_tree*,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct session_group* FUNC_3 (struct session*) ;
 int FUNC_4 (struct session_group*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct format_tree *VAR_3, struct session *VAR_4)
{
 struct session_group *VAR_5;

 VAR_3->s = VAR_4;

 FUNC_0(VAR_3, "session_name", "%s", VAR_4->name);
 FUNC_0(VAR_3, "session_windows", "%u", FUNC_5(&VAR_4->windows));
 FUNC_0(VAR_3, "session_id", "$%u", VAR_4->id);

 VAR_5 = FUNC_3(VAR_4);
 FUNC_0(VAR_3, "session_grouped", "%d", VAR_5 != ((void*)0));
 if (VAR_5 != ((void*)0)) {
  FUNC_0(VAR_3, "session_group", "%s", VAR_5->name);
  FUNC_0(VAR_3, "session_group_size", "%u",
      FUNC_4 (VAR_5));
  FUNC_1(VAR_3, "session_group_list",
      VAR_1);
 }

 FUNC_2(VAR_3, "session_created", &VAR_4->creation_time);
 FUNC_2(VAR_3, "session_last_attached", &VAR_4->last_attached_time);
 FUNC_2(VAR_3, "session_activity", &VAR_4->activity_time);

 FUNC_0(VAR_3, "session_attached", "%u", VAR_4->attached);
 FUNC_0(VAR_3, "session_many_attached", "%d", VAR_4->attached > 1);

 FUNC_1(VAR_3, "session_alerts", VAR_0);
 FUNC_1(VAR_3, "session_stack", VAR_2);
}
