
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tree; } ;
typedef TYPE_1__ vlc_media_source_t ;
struct TYPE_9__ {int sd; int owner; } ;
typedef TYPE_2__ media_source_private_t ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(vlc_media_source_t *VAR_0)
{
    media_source_private_t *VAR_1 = FUNC_1(VAR_0);
    FUNC_2(VAR_1->owner, VAR_0);
    FUNC_4(VAR_1->sd);
    FUNC_3(VAR_0->tree);
    FUNC_0(VAR_1);
}
