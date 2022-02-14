
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* rd_rel; } ;
struct TYPE_7__ {scalar_t__ relpersistence; int reltoastrelid; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int MultiXactId ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 TYPE_2__* FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11(Oid VAR_7)
{
 List *VAR_8 = FUNC_7(FUNC_8(VAR_7));


 Relation VAR_9 = FUNC_10(VAR_7, VAR_0);
 MultiXactId VAR_10;
 Oid VAR_11;


 if (VAR_8 != VAR_2)
  FUNC_5(VAR_1, "found a FK into a chunk while truncating");

 FUNC_1(VAR_9);

 VAR_10 = FUNC_2();

 FUNC_4(VAR_9, VAR_9->rd_rel->relpersistence, VAR_6, VAR_10);

 VAR_11 = VAR_9->rd_rel->reltoastrelid;

 FUNC_6(VAR_9, VAR_3);

 if (FUNC_3(VAR_11))
 {
  VAR_9 = FUNC_10(VAR_11, VAR_0);
  FUNC_4(VAR_9, VAR_9->rd_rel->relpersistence, VAR_6, VAR_10);
  FUNC_0(VAR_9->rd_rel->relpersistence != VAR_5);
  FUNC_6(VAR_9, VAR_3);
 }

 FUNC_9(VAR_7, VAR_4, 0);
}
