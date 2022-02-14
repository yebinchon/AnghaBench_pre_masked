
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; size_t name_len; char* value; size_t value_len; struct TYPE_5__* next; } ;
typedef TYPE_1__ HttpHeader ;


 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 void* FUNC_2 (size_t) ;

HttpHeader *
FUNC_3(const char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3,
       HttpHeader *VAR_4)
{
 HttpHeader *VAR_5 = FUNC_2(sizeof(HttpHeader));

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->name = FUNC_2(VAR_1 + 1);
 if (VAR_1 > 0)
  FUNC_0(VAR_5->name, VAR_0, VAR_1);
 VAR_5->name[VAR_1] = '\0';
 VAR_5->name_len = VAR_1;

 VAR_5->value = FUNC_2(VAR_3 + 1);
 if (VAR_3 > 0)
  FUNC_0(VAR_5->value, VAR_2, VAR_3);
 VAR_5->value[VAR_3] = '\0';
 VAR_5->value_len = VAR_3;

 VAR_5->next = VAR_4;
 return VAR_5;
}
