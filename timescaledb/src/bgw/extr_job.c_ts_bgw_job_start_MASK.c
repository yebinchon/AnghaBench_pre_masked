
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_9__ {int application_name; int id; } ;
struct TYPE_11__ {TYPE_1__ fd; } ;
struct TYPE_10__ {struct TYPE_10__* data; } ;
typedef TYPE_2__* StringInfo ;
typedef int Oid ;
typedef TYPE_3__ BgwJob ;
typedef int BackgroundWorkerHandle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (int ,int ,TYPE_2__*) ;

BackgroundWorkerHandle *
FUNC_6(BgwJob *VAR_1, Oid VAR_2)
{
 int32 VAR_3 = FUNC_0(VAR_1->fd.id);
 StringInfo VAR_4 = FUNC_3();
 BackgroundWorkerHandle *VAR_5;


 FUNC_2(VAR_4, "%u %d", VAR_2, VAR_3);

 VAR_5 = FUNC_5(VAR_0,
          FUNC_1(VAR_1->fd.application_name),
          VAR_4->data);

 FUNC_4(VAR_4->data);
 FUNC_4(VAR_4);
 return VAR_5;
}
