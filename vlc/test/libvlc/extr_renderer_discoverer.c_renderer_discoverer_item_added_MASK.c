
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int item; } ;
struct TYPE_4__ {TYPE_1__ renderer_discoverer_item_added; } ;
struct libvlc_event_t {TYPE_2__ u; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(const struct libvlc_event_t *VAR_0, void *VAR_1)
{
    (void) VAR_1;
    FUNC_0(VAR_0->u.renderer_discoverer_item_added.item, "added");
}
