
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; int item; } ;
struct TYPE_4__ {TYPE_1__ media_list_item_added; } ;
struct libvlc_event_t {TYPE_2__ u; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,int ,char*) ;

__attribute__((used)) static void
FUNC_4(const struct libvlc_event_t *VAR_0, const char *VAR_1)
{
    char *VAR_2 = FUNC_2(VAR_0->u.media_list_item_added.item);
    FUNC_0(VAR_2);

    FUNC_3("item %s(%d): '%s'\n", VAR_1,
             VAR_0->u.media_list_item_added.index, VAR_2);
    FUNC_1(VAR_2);
}
