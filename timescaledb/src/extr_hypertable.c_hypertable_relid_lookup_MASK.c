
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int main_table_relid; } ;
typedef int Oid ;
typedef TYPE_1__ Hypertable ;
typedef int Cache ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;

__attribute__((used)) static inline Oid
FUNC_3(Oid VAR_1)
{
 Cache *VAR_2 = FUNC_2();
 Hypertable *VAR_3 = FUNC_1(VAR_2, VAR_1);
 Oid VAR_4 = (VAR_3 == ((void*)0)) ? VAR_0 : VAR_3->main_table_relid;

 FUNC_0(VAR_2);

 return VAR_4;
}
