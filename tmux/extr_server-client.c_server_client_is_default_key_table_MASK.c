
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_table {int name; } ;
struct client {int dummy; } ;


 int FUNC_0 (struct client*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct client *VAR_0, struct key_table *VAR_1)
{
 return (FUNC_1(VAR_1->name, FUNC_0(VAR_0)) == 0);
}
