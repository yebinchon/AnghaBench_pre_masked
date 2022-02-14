
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int space; int main_table_relid; } ;
typedef int Point ;
typedef TYPE_1__ Hypertable ;
typedef int Chunk ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_2 (TYPE_1__*,int *,char const*,char const*) ;
 int * FUNC_3 (int ,int *) ;

Chunk *
FUNC_4(Hypertable *VAR_1, Point *VAR_2, const char *VAR_3, const char *VAR_4)
{
 Chunk *VAR_5;







 FUNC_1(VAR_1->main_table_relid, VAR_0);


 VAR_5 = FUNC_3(VAR_1->space, VAR_2);

 if (((void*)0) == VAR_5)
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_0(VAR_5 != ((void*)0));

 return VAR_5;
}
