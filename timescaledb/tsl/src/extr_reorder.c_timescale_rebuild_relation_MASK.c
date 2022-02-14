
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_8__ {TYPE_1__* rd_rel; } ;
struct TYPE_7__ {char relpersistence; int reltablespace; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int MultiXactId ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,int,int*,int *,int *) ;
 int FUNC_3 (int ,int ,int *,int *,int,int,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,int ,char,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int * FUNC_7 (int ,int ,int **,int ) ;

__attribute__((used)) static void
FUNC_8(Relation VAR_2, Oid VAR_3, bool VAR_4, Oid VAR_5,
         Oid VAR_6, Oid VAR_7)
{
 Oid VAR_8 = FUNC_1(VAR_2);
 Oid VAR_9 = FUNC_0(VAR_6) ? VAR_6 :
                VAR_2->rd_rel->reltablespace;
 Oid VAR_10;
 List *VAR_11;
 List *VAR_12;
 char VAR_13;
 bool VAR_14;
 TransactionId VAR_15;
 MultiXactId VAR_16;


 FUNC_6(VAR_2, VAR_3, 1);


 VAR_13 = VAR_2->rd_rel->relpersistence;


 FUNC_4(VAR_2, VAR_1);


 VAR_10 = FUNC_5(VAR_8, VAR_9, VAR_13, VAR_0);


 FUNC_2(VAR_10,
       VAR_8,
       VAR_3,
       VAR_4,
       &VAR_14,
       &VAR_15,
       &VAR_16);


 VAR_12 =
  FUNC_7(VAR_8, VAR_10, &VAR_11, VAR_7);





 FUNC_3(VAR_8,
       VAR_10,
       VAR_11,
       VAR_12,
       VAR_14,
       1,
       VAR_15,
       VAR_16,
       VAR_5);
}
