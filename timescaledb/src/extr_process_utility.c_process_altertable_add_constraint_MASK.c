
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int main_table_relid; } ;
typedef int Oid ;
typedef TYPE_1__ Hypertable ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int ,char const*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(Hypertable *VAR_1, const char *VAR_2)
{
 Oid VAR_3 =
  FUNC_2(VAR_1->main_table_relid, VAR_2, 0);

 FUNC_0(VAR_2 != ((void*)0));

 FUNC_1(VAR_1, VAR_0, &VAR_3);
}
