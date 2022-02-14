
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msg_command_data {int argc; } ;
struct TYPE_2__ {int len; } ;
struct imsg {TYPE_1__ hdr; scalar_t__ data; } ;
struct cmd_parse_result {int status; char* error; int cmdlist; } ;
struct client {int flags; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (int ) ;
 struct cmd_parse_result* FUNC_2 (int,char**,int *) ;
 scalar_t__ FUNC_3 (char*,size_t,int,char***) ;
 int FUNC_4 (struct client*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int *,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct msg_command_data*,scalar_t__,int) ;
 int VAR_2 ;
 char** FUNC_11 (int,int) ;
 char* FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(struct client *VAR_3, struct imsg *VAR_4)
{
 struct msg_command_data VAR_5;
 char *VAR_6;
 size_t VAR_7;
 int VAR_8;
 char **VAR_9, *VAR_10;
 struct cmd_parse_result *VAR_11;

 if (VAR_3->flags & VAR_0)
  return;

 if (VAR_4->hdr.len - VAR_1 < sizeof VAR_5)
  FUNC_8("bad MSG_COMMAND size");
 FUNC_10(&VAR_5, VAR_4->data, sizeof VAR_5);

 VAR_6 = (char *)VAR_4->data + sizeof VAR_5;
 VAR_7 = VAR_4->hdr.len - VAR_1 - sizeof VAR_5;
 if (VAR_7 > 0 && VAR_6[VAR_7 - 1] != '\0')
  FUNC_8("bad MSG_COMMAND string");

 VAR_8 = VAR_5.argc;
 if (FUNC_3(VAR_6, VAR_7, VAR_8, &VAR_9) != 0) {
  VAR_10 = FUNC_12("command too long");
  goto error;
 }

 if (VAR_8 == 0) {
  VAR_8 = 1;
  VAR_9 = FUNC_11(1, sizeof *VAR_9);
  *VAR_9 = FUNC_12("new-session");
 }

 VAR_11 = FUNC_2(VAR_8, VAR_9, ((void*)0));
 switch (VAR_11->status) {
 case 130:
  VAR_10 = FUNC_12("empty command");
  goto error;
 case 129:
  VAR_10 = VAR_11->error;
  goto error;
 case 128:
  break;
 }
 FUNC_0(VAR_8, VAR_9);

 FUNC_4(VAR_3, FUNC_6(VAR_11->cmdlist, ((void*)0), ((void*)0), 0));
 FUNC_4(VAR_3, FUNC_5(VAR_2, ((void*)0)));

 FUNC_1(VAR_11->cmdlist);
 return;

error:
 FUNC_0(VAR_8, VAR_9);

 FUNC_4(VAR_3, FUNC_7(VAR_10));
 FUNC_9(VAR_10);

 VAR_3->flags |= VAR_0;
}
