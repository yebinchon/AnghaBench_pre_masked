
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tgoid; int tgoldtable; int tgnewtable; } ;
typedef TYPE_2__ Trigger ;
struct TYPE_6__ {int table_name; int schema_name; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
typedef TYPE_3__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_7(Trigger *VAR_2, void *VAR_3)
{
 Chunk *VAR_4 = VAR_3;
 if (FUNC_5(VAR_2))
  FUNC_6(VAR_2->tgoid,
           FUNC_0(VAR_4->fd.schema_name),
           FUNC_0(VAR_4->fd.table_name));

 return 1;
}
