
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fetcher_request {int userdata; int item; TYPE_1__* cbs; } ;
struct TYPE_2__ {int (* on_art_fetch_ended ) (int ,int,int ) ;} ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1( struct fetcher_request* VAR_0, bool VAR_1 )
{
    if (VAR_0->cbs && VAR_0->cbs->on_art_fetch_ended)
        VAR_0->cbs->on_art_fetch_ended(VAR_0->item, VAR_1, VAR_0->userdata);
}
