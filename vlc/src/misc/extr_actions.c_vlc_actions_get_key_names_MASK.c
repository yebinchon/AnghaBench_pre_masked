
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {char const* const* ppsz_keys; } ;
typedef TYPE_1__ vlc_actions_t ;
struct TYPE_4__ {TYPE_1__* actions; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

const char* const*
FUNC_2(vlc_object_t *VAR_0)
{
    vlc_actions_t *VAR_1 = FUNC_0(FUNC_1(VAR_0))->actions;
    return VAR_1->ppsz_keys;
}
