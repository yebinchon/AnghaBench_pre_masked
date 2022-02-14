
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udev_list_entry {int value; int name; TYPE_1__* list; } ;
struct TYPE_2__ {int entries; int unique_entries; scalar_t__ unique; } ;


 int FUNC_0 (int ,int ,struct udev_list_entry*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct udev_list_entry* FUNC_3 (struct udev_list_entry*) ;

__attribute__((used)) static struct udev_list_entry *FUNC_4(struct udev_list_entry *VAR_1) {
        if (!VAR_1)
                return ((void*)0);

        if (VAR_1->list) {
                if (VAR_1->list->unique)
                        FUNC_2(VAR_1->list->unique_entries, VAR_1->name);
                else
                        FUNC_0(VAR_0, VAR_1->list->entries, VAR_1);
        }

        FUNC_1(VAR_1->name);
        FUNC_1(VAR_1->value);

        return FUNC_3(VAR_1);
}
