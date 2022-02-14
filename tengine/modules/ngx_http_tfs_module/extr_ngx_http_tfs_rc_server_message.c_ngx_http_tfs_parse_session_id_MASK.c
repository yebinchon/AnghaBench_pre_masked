
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_char ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *,unsigned long long*) ;
 char* FUNC_1 (int,char const) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_str_t *VAR_1, uint64_t *VAR_2)
{
  char *VAR_3;
  const char VAR_4 = '-';

  VAR_3 = FUNC_1(VAR_1->data, VAR_4);
  if (VAR_3 == ((void*)0)) {
      return VAR_0;
  }

  return FUNC_0(VAR_1->data,
                             ((u_char *)VAR_3 - VAR_1->data),
                             (unsigned long long *) VAR_2);
}
