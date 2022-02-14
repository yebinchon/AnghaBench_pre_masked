
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int db_oid; } ;
struct TYPE_7__ {scalar_t__ state; } ;
typedef int HTAB ;
typedef TYPE_1__ DbHashEntry ;
typedef TYPE_2__ BgwMessage ;
typedef int AckResult ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static AckResult
FUNC_3(HTAB *VAR_4, BgwMessage *VAR_5)
{
 DbHashEntry *VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_5->db_oid);

 if (VAR_6->state == VAR_2)
  FUNC_2(VAR_6);

 FUNC_1(VAR_6);

 return (VAR_6->state == VAR_3 ? VAR_1 : VAR_0);
}
