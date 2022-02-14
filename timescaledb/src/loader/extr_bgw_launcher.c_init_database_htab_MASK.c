
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keysize; int entrysize; } ;
typedef int Oid ;
typedef int HTAB ;
typedef TYPE_1__ HASHCTL ;
typedef int DbHashEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int ,TYPE_1__*,int) ;
 int VAR_2 ;

__attribute__((used)) static HTAB *
FUNC_1(void)
{
 HASHCTL VAR_3 = { .keysize = sizeof(Oid), .entrysize = sizeof(DbHashEntry) };

 return FUNC_0("launcher_db_htab",
        VAR_2,
        &VAR_3,
        VAR_0 | VAR_1);
}
