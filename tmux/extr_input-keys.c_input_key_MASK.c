
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef char u_char ;
struct window_pane {scalar_t__ id; int event; TYPE_2__* screen; TYPE_1__* window; } ;
struct utf8_data {char* data; size_t size; } ;
struct mouse_event {int wp; } ;
struct input_key_ent {int flags; int key; char* data; } ;
typedef int key_code ;
struct TYPE_4__ {int mode; } ;
struct TYPE_3__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct window_pane*,struct mouse_event*) ;
 struct input_key_ent* VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,...) ;
 scalar_t__ FUNC_6 (struct input_key_ent*) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 size_t FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int,struct utf8_data*) ;
 char* FUNC_10 (int) ;

void
FUNC_11(struct window_pane *VAR_10, key_code VAR_11, struct mouse_event *VAR_12)
{
 const struct input_key_ent *VAR_13;
 u_int VAR_14;
 size_t VAR_15;
 char *VAR_16;
 key_code VAR_17;
 struct utf8_data VAR_18;

 FUNC_5("writing key 0x%llx (%s) to %%%u", VAR_11,
     FUNC_4(VAR_11), VAR_10->id);


 if (FUNC_0(VAR_11)) {
  if (VAR_12 != ((void*)0) && VAR_12->wp != -1 && (u_int)VAR_12->wp == VAR_10->id)
   FUNC_3(VAR_10, VAR_12);
  return;
 }


 if (VAR_11 & VAR_4) {
  VAR_18.data[0] = (u_char)VAR_11;
  FUNC_1(VAR_10->event, &VAR_18.data[0], 1);
  return;
 }





 VAR_17 = (VAR_11 & ~(VAR_5|VAR_3));
 if (VAR_17 <= 0x7f) {
  if (VAR_11 & VAR_3)
   FUNC_1(VAR_10->event, "\033", 1);
  VAR_18.data[0] = VAR_17;
  FUNC_1(VAR_10->event, &VAR_18.data[0], 1);
  return;
 }
 if (VAR_17 > 0x7f && VAR_17 < VAR_2) {
  if (FUNC_9(VAR_17, &VAR_18) != VAR_8)
   return;
  if (VAR_11 & VAR_3)
   FUNC_1(VAR_10->event, "\033", 1);
  FUNC_1(VAR_10->event, VAR_18.data, VAR_18.size);
  return;
 }





 if (FUNC_7(VAR_10->window->options, "xterm-keys")) {
  if ((VAR_16 = FUNC_10(VAR_11)) != ((void*)0)) {
   FUNC_1(VAR_10->event, VAR_16, FUNC_8(VAR_16));
   FUNC_2(VAR_16);
   return;
  }
 }
 VAR_11 &= ~VAR_5;


 for (VAR_14 = 0; VAR_14 < FUNC_6(VAR_9); VAR_14++) {
  VAR_13 = &VAR_9[VAR_14];

  if ((VAR_13->flags & VAR_1) &&
      !(VAR_10->screen->mode & VAR_7))
   continue;
  if ((VAR_13->flags & VAR_0) &&
      !(VAR_10->screen->mode & VAR_6))
   continue;

  if ((VAR_11 & VAR_3) && (VAR_13->key | VAR_3) == VAR_11)
   break;
  if (VAR_13->key == VAR_11)
   break;
 }
 if (VAR_14 == FUNC_6(VAR_9)) {
  FUNC_5("key 0x%llx missing", VAR_11);
  return;
 }
 VAR_15 = FUNC_8(VAR_13->data);
 FUNC_5("found key 0x%llx: \"%s\"", VAR_11, VAR_13->data);


 if (VAR_11 & VAR_3)
  FUNC_1(VAR_10->event, "\033", 1);
 FUNC_1(VAR_10->event, VAR_13->data, VAR_15);
}
