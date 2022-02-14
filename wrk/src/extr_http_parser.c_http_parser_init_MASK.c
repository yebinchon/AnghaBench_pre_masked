
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int http_errno; int state; void* data; } ;
typedef TYPE_1__ http_parser ;
typedef enum http_parser_type { ____Placeholder_http_parser_type } http_parser_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_1 (http_parser *VAR_6, enum http_parser_type VAR_7)
{
  void *VAR_8 = VAR_6->data;
  FUNC_0(VAR_6, 0, sizeof(*VAR_6));
  VAR_6->data = VAR_8;
  VAR_6->type = VAR_7;
  VAR_6->state = (VAR_7 == VAR_1 ? VAR_3 : (VAR_7 == VAR_2 ? VAR_5 : VAR_4));
  VAR_6->http_errno = VAR_0;
}
