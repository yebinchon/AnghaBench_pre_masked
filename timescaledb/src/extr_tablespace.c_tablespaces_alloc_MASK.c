
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int capacity; void* tablespaces; scalar_t__ num_tablespaces; } ;
typedef TYPE_1__ Tablespaces ;
typedef int Tablespace ;


 void* FUNC_0 (int) ;

__attribute__((used)) static Tablespaces *
FUNC_1(int VAR_0)
{
 Tablespaces *VAR_1;

 VAR_1 = FUNC_0(sizeof(Tablespaces));
 VAR_1->capacity = VAR_0;
 VAR_1->num_tablespaces = 0;
 VAR_1->tablespaces = FUNC_0(sizeof(Tablespace) * VAR_1->capacity);

 return VAR_1;
}
