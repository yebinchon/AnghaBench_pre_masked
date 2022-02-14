
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int multibytes; } ;
struct key {TYPE_1__ modifiers; } ;
struct input {int dummy; } ;
struct incremental_input {int (* handler ) (struct input*,struct key*) ;scalar_t__ edit_mode; } ;
typedef enum input_status { ____Placeholder_input_status } input_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct key*) ;
 int FUNC_1 (struct input*,struct key*) ;
 int FUNC_2 (struct input*,struct key*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static enum input_status
FUNC_4(struct input *VAR_2, struct key *VAR_3)
{
 struct incremental_input *VAR_4 = (struct incremental_input *) VAR_2;

 if (VAR_4->edit_mode && !VAR_3->modifiers.multibytes)
  return FUNC_1(VAR_2, VAR_3);

 if (!FUNC_3(FUNC_0(VAR_3), 8))
  return VAR_1;

 if (!VAR_4->handler)
  return VAR_0;

 return VAR_4->handler(VAR_2, VAR_3);
}
