
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int drm_fd; int * fb; int size; int * map; int * handle; } ;
typedef TYPE_1__ vout_display_sys_t ;
typedef size_t uint32_t ;
struct drm_mode_destroy_dumb {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct drm_mode_destroy_dumb*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(vout_display_sys_t const *VAR_1, uint32_t const VAR_2)
{
    struct drm_mode_destroy_dumb VAR_3 = { .handle = VAR_1->handle[VAR_2] };

    FUNC_2(VAR_1->map[VAR_2], VAR_1->size);
    FUNC_1(VAR_1->drm_fd, VAR_1->fb[VAR_2]);
    FUNC_0(VAR_1->drm_fd, VAR_0, &VAR_3);
}
