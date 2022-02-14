
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytes; } ;
struct key {TYPE_1__ data; } ;
struct input {struct file_finder* data; } ;
struct file_finder {size_t searchlen; int ** search; int keymap; } ;
typedef enum input_status { ____Placeholder_input_status } input_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int ***,int ) ;
 int FUNC_1 (struct file_finder*) ;
 int FUNC_2 (struct file_finder*,int) ;
 int FUNC_3 (struct file_finder*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,struct key*,int,int *) ;
 int FUNC_6 (struct key*) ;
 int FUNC_7 (struct input*,struct key*) ;

__attribute__((used)) static enum input_status
FUNC_8(struct input *VAR_4, struct key *VAR_5)
{
 struct file_finder *VAR_6 = VAR_4->data;
 enum input_status VAR_7;

 VAR_7 = FUNC_7(VAR_4, VAR_5);
 if (VAR_7 == VAR_1) {
  if (VAR_6->searchlen > 0) {
   VAR_6->searchlen--;
   FUNC_4((void *) VAR_6->search[VAR_6->searchlen]);
   VAR_6->search[VAR_6->searchlen] = ((void*)0);
  }
  FUNC_3(VAR_6);
  FUNC_2(VAR_6, 0);
  FUNC_1(VAR_6);
  return VAR_7;
 }

 if (VAR_7 != VAR_3)
  return VAR_7;

 switch (FUNC_5(VAR_6->keymap, VAR_5, 1, ((void*)0))) {
 case 131:
  FUNC_2(VAR_6, -1);
  FUNC_1(VAR_6);
  return VAR_3;

 case 132:
  FUNC_2(VAR_6, +1);
  FUNC_1(VAR_6);
  return VAR_3;

 case 133:
 case 130:
 case 129:
 case 128:
  return VAR_0;

 default:
  if (FUNC_6(VAR_5) == 0) {
   FUNC_0(&VAR_6->search, VAR_5->data.bytes);
   VAR_6->searchlen++;
   FUNC_3(VAR_6);
   FUNC_2(VAR_6, 0);
   FUNC_1(VAR_6);
   return VAR_2;
  }


  return VAR_3;
 }
}
