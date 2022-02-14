
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int dummy; } ;
struct help_request_iterator {struct view* member_0; } ;
struct TYPE_2__ {char* text; } ;
struct help {TYPE_1__ data; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct view*,struct help**,int *,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,struct help_request_iterator*,int) ;
 int VAR_4 ;
 int FUNC_3 (struct view*) ;

__attribute__((used)) static enum status_code
FUNC_4(struct view *VAR_5, enum open_flags VAR_6)
{
 struct help_request_iterator VAR_7 = { VAR_5 };
 struct help *VAR_8;

 FUNC_3(VAR_5);

 if (!FUNC_0(VAR_5, &VAR_8, ((void*)0), VAR_2))
  return VAR_0;
 VAR_8->data.text = "Quick reference for tig keybindings:";

 if (!FUNC_0(VAR_5, &VAR_8, ((void*)0), VAR_1))
  return VAR_0;
 VAR_8->data.text = "";

 return FUNC_2(VAR_4, &VAR_7, 1)
  ? VAR_3 : FUNC_1("Failed to render key bindings");
}
