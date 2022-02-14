
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_combo {scalar_t__ request; scalar_t__ keys; struct key* key; int keymap; scalar_t__ bufpos; } ;
struct key {int dummy; } ;
struct input {int buf; struct key_combo* data; } ;
typedef enum input_status { ____Placeholder_input_status } input_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct key*,int,int) ;
 scalar_t__ FUNC_1 (int ,struct key*,scalar_t__,int*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct key*) ;
 int FUNC_4 (int ,scalar_t__*,char*,char*,int ) ;

__attribute__((used)) static enum input_status
FUNC_5(struct input *VAR_6, struct key *VAR_7)
{
 struct key_combo *VAR_8 = VAR_6->data;
 int VAR_9 = 0;
 if (VAR_8->keys && FUNC_3(VAR_7) == VAR_3)
  return VAR_0;

 FUNC_4(VAR_6->buf, &VAR_8->bufpos, "%s%s",
      VAR_8->bufpos ? " " : "Keys: ", FUNC_0(VAR_7, 1, 0));
 VAR_8->key[VAR_8->keys++] = *VAR_7;
 VAR_8->request = FUNC_1(VAR_8->keymap, VAR_8->key, VAR_8->keys, &VAR_9);

 if (VAR_8->request == VAR_5)
  return VAR_9 > 0 ? VAR_1 : VAR_2;
 return VAR_2;
}
