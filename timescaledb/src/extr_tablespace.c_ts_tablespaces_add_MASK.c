
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int num_tablespaces; int capacity; TYPE_2__* tablespaces; } ;
typedef TYPE_1__ Tablespaces ;
struct TYPE_8__ {int tablespace_oid; int fd; } ;
typedef TYPE_2__ Tablespace ;
typedef int Oid ;
typedef int FormData_tablespace ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;

Tablespace *
FUNC_2(Tablespaces *VAR_1, FormData_tablespace *VAR_2, Oid VAR_3)
{
 Tablespace *VAR_4;

 if (VAR_1->num_tablespaces >= VAR_1->capacity)
 {
  VAR_1->capacity += VAR_0;
  VAR_1->tablespaces = FUNC_1(VAR_1->tablespaces, sizeof(Tablespace) * VAR_1->capacity);
 }

 VAR_4 = &VAR_1->tablespaces[VAR_1->num_tablespaces++];
 FUNC_0(&VAR_4->fd, VAR_2, sizeof(FormData_tablespace));
 VAR_4->tablespace_oid = VAR_3;

 return VAR_4;
}
