
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct view_column_data {char* commit_title; char* file_name; char* reflog; char* id; char* text; TYPE_10__* section; int * status; int * mode; int * file_size; TYPE_3__* ref; int date; int author; } ;
struct TYPE_17__ {int display; } ;
struct TYPE_16__ {int display; } ;
struct TYPE_15__ {int display; } ;
struct TYPE_13__ {int format; int local; int display; } ;
struct TYPE_12__ {int display; int width; } ;
struct TYPE_18__ {TYPE_6__ status; TYPE_5__ id; TYPE_4__ file_size; TYPE_2__ date; TYPE_1__ author; } ;
struct view_column {int type; TYPE_7__ opt; } ;
struct view {int dummy; } ;
struct TYPE_19__ {char* text; } ;
struct TYPE_20__ {TYPE_8__ section; } ;
struct TYPE_14__ {char* name; } ;
struct TYPE_11__ {TYPE_9__ opt; } ;
 char* FUNC_0 (int ,int ,int ) ;
 char* FUNC_1 (int ,int ,int ,int ) ;
 char* FUNC_2 (int ,int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ,int ) ;

__attribute__((used)) static const char *
FUNC_5(struct view *VAR_0, struct view_column_data *VAR_1,
   struct view_column *VAR_2)
{
 const char *VAR_3 = "";

 switch (VAR_2->type) {
 case 139:
  if (VAR_1->author)
   VAR_3 = FUNC_0(VAR_1->author, VAR_2->opt.author.width, VAR_2->opt.author.display);
  break;

 case 138:
  VAR_3 = VAR_1->commit_title;
  break;

 case 137:
  if (VAR_1->date)
   VAR_3 = FUNC_1(VAR_1->date, VAR_2->opt.date.display,
          VAR_2->opt.date.local, VAR_2->opt.date.format);
  break;

 case 131:
  if (VAR_1->ref)
   VAR_3 = VAR_1->ref->name;
  break;

 case 136:
  if (VAR_1->file_name)
   VAR_3 = VAR_1->file_name;
  break;

 case 135:
  if (VAR_1->file_size)
   VAR_3 = FUNC_2(*VAR_1->file_size, VAR_2->opt.file_size.display);
  break;

 case 134:
  if (VAR_2->opt.id.display)
   VAR_3 = VAR_1->reflog ? VAR_1->reflog : VAR_1->id;
  break;

 case 133:
  break;

 case 132:
  if (VAR_1->mode)
   VAR_3 = FUNC_3(*VAR_1->mode);
  break;

 case 129:
  if (VAR_1->status)
   VAR_3 = FUNC_4(*VAR_1->status, VAR_2->opt.status.display);
  break;

 case 130:
  VAR_3 = VAR_1->section->opt.section.text;
  break;

 case 128:
  VAR_3 = VAR_1->text;
  break;
 }

 return VAR_3 ? VAR_3 : "";
}
