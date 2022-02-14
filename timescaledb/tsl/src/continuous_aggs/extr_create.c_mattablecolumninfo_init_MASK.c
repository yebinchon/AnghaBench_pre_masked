
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int matpartcolno; int * matpartcolname; int mat_groupcolname_list; int * partial_grouplist; int * partial_seltlist; int * matcollist; } ;
typedef TYPE_1__ MatTableColumnInfo ;
typedef int List ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(MatTableColumnInfo *VAR_1, List *VAR_2, List *VAR_3, List *VAR_4)
{
 VAR_1->matcollist = VAR_2;
 VAR_1->partial_seltlist = VAR_3;
 VAR_1->partial_grouplist = VAR_4;
 VAR_1->mat_groupcolname_list = VAR_0;
 VAR_1->matpartcolno = -1;
 VAR_1->matpartcolname = ((void*)0);
}
