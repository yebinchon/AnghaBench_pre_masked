
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_7__ {int tablespace_oid; } ;
typedef TYPE_2__ Tablespace ;
struct TYPE_8__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {int reltablespace; } ;
typedef TYPE_3__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static Oid
FUNC_1(int32 VAR_2, Relation VAR_3)
{
 Tablespace *VAR_4;
 Oid VAR_5 = VAR_1;

 VAR_4 = FUNC_0(VAR_2,
                VAR_3->rd_rel->reltablespace,
                VAR_0);

 if (((void*)0) != VAR_4)
  VAR_5 = VAR_4->tablespace_oid;

 return VAR_5;
}
