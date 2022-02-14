
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum http_errno { ____Placeholder_http_errno } http_errno ;
struct TYPE_3__ {char const* name; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;

const char *
FUNC_2(enum http_errno VAR_1) {
  FUNC_1(((size_t) VAR_1) < FUNC_0(VAR_0));
  return VAR_0[VAR_1].name;
}
