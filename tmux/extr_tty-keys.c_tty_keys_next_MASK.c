
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int* c_cc; } ;
struct tty {int flags; int in; struct client* client; int key_timer; TYPE_1__ tio; } ;
struct timeval {int tv_sec; int tv_usec; } ;
struct mouse_event {int member_0; } ;
struct key_event {int key; int m; } ;
struct client {int name; int flags; } ;
typedef int key_code ;
typedef int cc_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,size_t) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct timeval*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ,struct tty*) ;
 int FUNC_9 (struct key_event*) ;
 int FUNC_10 (struct timeval*,int *) ;
 int VAR_13 ;
 int FUNC_11 (char*,int ,int,...) ;
 int FUNC_12 (int *,struct mouse_event*,int) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct client*,struct key_event*) ;
 int VAR_14 ;
 int FUNC_15 (struct tty*,char const*,size_t,size_t*) ;
 int FUNC_16 (struct tty*,char const*,size_t,size_t*) ;
 int FUNC_17 (struct tty*,char const*,size_t,size_t*,struct mouse_event*) ;
 int FUNC_18 (struct tty*,char const*,size_t,int*,size_t*,int) ;
 struct key_event* FUNC_19 (int) ;

int
FUNC_20(struct tty *VAR_15)
{
 struct client *VAR_16 = VAR_15->client;
 struct timeval VAR_17;
 const char *VAR_18;
 size_t VAR_19, VAR_20;
 cc_t VAR_21;
 int VAR_22, VAR_23 = 0, VAR_24;
 key_code VAR_25;
 struct mouse_event VAR_26 = { 0 };
 struct key_event *VAR_27;

 FUNC_10(&VAR_17, ((void*)0));


 VAR_18 = FUNC_0(VAR_15->in);
 VAR_19 = FUNC_1(VAR_15->in);
 if (VAR_19 == 0)
  return (0);
 FUNC_11("%s: keys are %zu (%.*s)", VAR_16->name, VAR_19, (int)VAR_19, VAR_18);


 switch (FUNC_15(VAR_15, VAR_18, VAR_19, &VAR_20)) {
 case 0:
  VAR_25 = VAR_8;
  goto complete_key;
 case -1:
  break;
 case 1:
  goto partial_key;
 }


 switch (FUNC_16(VAR_15, VAR_18, VAR_19, &VAR_20)) {
 case 0:
  VAR_25 = VAR_8;
  goto complete_key;
 case -1:
  break;
 case 1:
  goto partial_key;
 }


 switch (FUNC_17(VAR_15, VAR_18, VAR_19, &VAR_20, &VAR_26)) {
 case 0:
  VAR_25 = VAR_7;
  goto complete_key;
 case -1:
  break;
 case -2:
  VAR_25 = VAR_7;
  goto discard_key;
 case 1:
  goto partial_key;
 }

first_key:

 VAR_24 = FUNC_18(VAR_15, VAR_18, VAR_19, &VAR_25, &VAR_20, VAR_23);
 if (VAR_24 == 0)
  goto complete_key;
 if (VAR_24 == 1)
  goto partial_key;





 if (*VAR_18 == '\033' && VAR_19 > 1) {

  VAR_24 = FUNC_18(VAR_15, VAR_18 + 1, VAR_19 - 1, &VAR_25, &VAR_20, VAR_23);
  if (VAR_24 == 0) {
   if (VAR_25 & VAR_9) {







    VAR_25 = '\033';
    VAR_20 = 1;
    goto complete_key;
   }
   VAR_25 |= VAR_2;
   VAR_20++;
   goto complete_key;
  }
  if (VAR_24 == 1)
   goto partial_key;
 }





 if (*VAR_18 == '\033' && VAR_19 >= 2) {
  VAR_25 = (u_char)VAR_18[1] | VAR_2;
  VAR_20 = 2;
 } else {
  VAR_25 = (u_char)VAR_18[0];
  VAR_20 = 1;
 }
 goto complete_key;

partial_key:
 FUNC_11("%s: partial key %.*s", VAR_16->name, (int)VAR_19, VAR_18);


 if (VAR_15->flags & VAR_10) {
  if (FUNC_6(&VAR_15->key_timer) &&
      !FUNC_7(&VAR_15->key_timer, ((void*)0))) {
   VAR_23 = 1;
   goto first_key;
  }
  return (0);
 }


 VAR_22 = FUNC_13(VAR_13, "escape-time");
 VAR_17.tv_sec = VAR_22 / 1000;
 VAR_17.tv_usec = (VAR_22 % 1000) * 1000L;


 if (FUNC_3(&VAR_15->key_timer))
  FUNC_5(&VAR_15->key_timer);
 FUNC_8(&VAR_15->key_timer, VAR_14, VAR_15);
 FUNC_4(&VAR_15->key_timer, &VAR_17);

 VAR_15->flags |= VAR_10;
 return (0);

complete_key:
 FUNC_11("%s: complete key %.*s %#llx", VAR_16->name, (int)VAR_20, VAR_18, VAR_25);






 VAR_21 = VAR_15->tio.c_cc[VAR_11];
 if (VAR_21 != VAR_12 && (VAR_25 & VAR_5) == VAR_21)
  VAR_25 = (VAR_25 & VAR_6) | VAR_1;


 FUNC_2(VAR_15->in, VAR_20);


 if (FUNC_3(&VAR_15->key_timer))
  FUNC_5(&VAR_15->key_timer);
 VAR_15->flags &= ~VAR_10;


 if (VAR_25 == VAR_4) {
  VAR_15->client->flags &= ~VAR_0;
  return (1);
 } else if (VAR_25 == VAR_3) {
  VAR_15->client->flags |= VAR_0;
  return (1);
 }


 if (VAR_25 != VAR_8) {
  VAR_27 = FUNC_19(sizeof *VAR_27);
  VAR_27->key = VAR_25;
  FUNC_12(&VAR_27->m, &VAR_26, sizeof VAR_27->m);
  if (!FUNC_14(VAR_16, VAR_27))
   FUNC_9(VAR_27);
 }

 return (1);

discard_key:
 FUNC_11("%s: discard key %.*s %#llx", VAR_16->name, (int)VAR_20, VAR_18, VAR_25);


 FUNC_2(VAR_15->in, VAR_20);

 return (1);
}
