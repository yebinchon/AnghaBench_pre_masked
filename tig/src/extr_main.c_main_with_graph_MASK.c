
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int graph; } ;
struct TYPE_4__ {TYPE_1__ commit_title; } ;
struct view_column {TYPE_2__ opt; } ;
struct view {int dummy; } ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
typedef enum graph_display { ____Placeholder_graph_display } graph_display ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum graph_display
FUNC_1(struct view *VAR_4, struct view_column *VAR_5, enum open_flags VAR_6)
{
 return VAR_5 && VAR_2 != VAR_0 && !FUNC_0(VAR_6) && !VAR_3
        ? VAR_5->opt.commit_title.graph : VAR_1;
}
