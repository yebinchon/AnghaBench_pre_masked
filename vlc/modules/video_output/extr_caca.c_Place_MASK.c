
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int source; TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_7__ {int x; int y; int width; int height; } ;
struct TYPE_6__ {TYPE_3__ place; int dp; int cv; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int vout_display_cfg_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int *,int const*) ;

__attribute__((used)) static void FUNC_5(vout_display_t *VAR_0, const vout_display_cfg_t *VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_0->sys;

    FUNC_4(&VAR_2->place, &VAR_0->source, VAR_1);

    const int VAR_3 = FUNC_3(VAR_2->cv);
    const int VAR_4 = FUNC_2(VAR_2->cv);
    const int VAR_5 = FUNC_1(VAR_2->dp);
    const int VAR_6 = FUNC_0(VAR_2->dp);

    if (VAR_5 > 0 && VAR_6 > 0) {
        VAR_2->place.x = VAR_2->place.x * VAR_3 / VAR_5;
        VAR_2->place.y = VAR_2->place.y * VAR_4 / VAR_6;
        VAR_2->place.width = (VAR_2->place.width * VAR_3 + VAR_5/2) / VAR_5;
        VAR_2->place.height = (VAR_2->place.height * VAR_4 + VAR_6/2) / VAR_6;
    } else {
        VAR_2->place.x = 0;
        VAR_2->place.y = 0;
        VAR_2->place.width = VAR_3;
        VAR_2->place.height = VAR_6;
    }
}
