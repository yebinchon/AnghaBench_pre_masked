
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef int ScanKeyData ;
typedef int Oid ;
typedef int List ;
typedef TYPE_2__ Hypertable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int * VAR_7 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,int *,int,int ,int *,int **,int ) ;
 char* FUNC_5 (int ) ;
 int VAR_9 ;

List *
FUNC_6(Hypertable *VAR_10, Oid VAR_11)
{
 ScanKeyData VAR_12[2];
 const char *VAR_13 = FUNC_5(VAR_11);
 List *VAR_14 = VAR_7;

 FUNC_3(&VAR_12[0],
    VAR_1,
    VAR_3,
    VAR_5,
    FUNC_2(VAR_10->fd.id));
 FUNC_3(&VAR_12[1],
    VAR_2,
    VAR_3,
    VAR_6,
    FUNC_1(VAR_9, FUNC_0((VAR_13))));

 FUNC_4(VAR_4,
      VAR_12,
      2,
      VAR_8,
      ((void*)0),
      &VAR_14,
      VAR_0);

 return VAR_14;
}
