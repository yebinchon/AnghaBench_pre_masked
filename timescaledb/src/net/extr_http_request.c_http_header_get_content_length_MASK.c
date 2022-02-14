
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; int name_len; int name; } ;
typedef TYPE_1__ HttpHeader ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(HttpHeader *VAR_1)
{
 int VAR_2 = -1;

 if (!FUNC_1(VAR_1->name, VAR_0, VAR_1->name_len))
  FUNC_0(VAR_1->value, "%d", &VAR_2);
 return VAR_2;
}
