
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct format_tree {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct client {int prompt_flags; void* prompt_data; int (* prompt_inputcb ) (struct client*,void*,char*,int ) ;int flags; TYPE_1__ tty; int prompt_mode; scalar_t__ prompt_hindex; int prompt_freecb; int prompt_buffer; int prompt_index; void* prompt_string; } ;
typedef int (* prompt_input_cb ) (struct client*,void*,char*,int ) ;
typedef int prompt_free_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct format_tree* FUNC_0 (struct client*,int *,int ,int ) ;
 int FUNC_1 (struct format_tree*,struct client*,int *,int *,int *) ;
 void* FUNC_2 (struct format_tree*,char const*) ;
 int FUNC_3 (struct format_tree*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct client*) ;
 int FUNC_6 (struct client*) ;
 int FUNC_7 (struct client*) ;
 int FUNC_8 (struct client*,void*,char*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char**,char*,char*) ;
 char* FUNC_12 (char const*) ;

void
FUNC_13(struct client *VAR_7, const char *VAR_8, const char *VAR_9,
    prompt_input_cb VAR_10, prompt_free_cb VAR_11, void *VAR_12, int VAR_13)
{
 struct format_tree *VAR_14;
 char *VAR_15, *VAR_16;

 VAR_14 = FUNC_0(VAR_7, ((void*)0), VAR_1, 0);
 FUNC_1(VAR_14, VAR_7, ((void*)0), ((void*)0), ((void*)0));

 if (VAR_9 == ((void*)0))
  VAR_9 = "";
 if (VAR_13 & VAR_4)
  VAR_15 = FUNC_12(VAR_9);
 else
  VAR_15 = FUNC_2(VAR_14, VAR_9);

 FUNC_5(VAR_7);
 FUNC_6(VAR_7);
 FUNC_7(VAR_7);

 VAR_7->prompt_string = FUNC_2(VAR_14, VAR_8);

 VAR_7->prompt_buffer = FUNC_9(VAR_15);
 VAR_7->prompt_index = FUNC_10(VAR_7->prompt_buffer);

 VAR_7->prompt_inputcb = VAR_10;
 VAR_7->prompt_freecb = VAR_11;
 VAR_7->prompt_data = VAR_12;

 VAR_7->prompt_hindex = 0;

 VAR_7->prompt_flags = VAR_13;
 VAR_7->prompt_mode = VAR_2;

 if (~VAR_13 & VAR_3)
  VAR_7->tty.flags |= (VAR_6|VAR_5);
 VAR_7->flags |= VAR_0;

 if ((VAR_13 & VAR_3) && *VAR_15 != '\0') {
  FUNC_11(&VAR_16, "=%s", VAR_15);
  VAR_7->prompt_inputcb(VAR_7, VAR_7->prompt_data, VAR_16, 0);
  FUNC_4(VAR_16);
 }

 FUNC_4(VAR_15);
 FUNC_3(VAR_14);
}
