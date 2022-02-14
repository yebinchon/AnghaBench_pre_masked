
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value_len; int value; int name_len; int name; } ;
typedef int StringInfo ;
typedef TYPE_1__ HttpHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(HttpHeader *VAR_2, StringInfo VAR_3)
{
 FUNC_0(VAR_3, VAR_2->name, VAR_2->name_len);
 FUNC_1(VAR_0, VAR_3);
 FUNC_1(VAR_1, VAR_3);
 FUNC_0(VAR_3, VAR_2->value, VAR_2->value_len);
}
