
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* defname; int location; int * def; int subtype; int type; int defaction; int * arg; } ;
typedef int Oid ;
typedef int Node ;
typedef TYPE_1__ DefElem ;
typedef TYPE_1__ AlterTableCmd ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(Oid VAR_4)
{
 DefElem VAR_5 = {
  .type = VAR_3,
  .defname = "toast_tuple_target",
  .arg = (Node *) FUNC_2(128),
  .defaction = VAR_1,
  .location = -1,
 };
 AlterTableCmd VAR_6 = {
  .type = VAR_2,
  .subtype = VAR_0,
  .def = (Node *) FUNC_1(&VAR_5),
 };
 FUNC_0(VAR_4, FUNC_1(&VAR_6), 1);
}
