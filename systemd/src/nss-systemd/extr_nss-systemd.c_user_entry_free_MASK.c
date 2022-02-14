
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* name; TYPE_1__* data; } ;
typedef TYPE_2__ UserEntry ;
struct TYPE_6__ {int entries; } ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(UserEntry *VAR_1) {
        if (!VAR_1)
                return;

        if (VAR_1->data)
                FUNC_0(VAR_0, VAR_1->data->entries, VAR_1);

        FUNC_1(VAR_1->name);
        FUNC_1(VAR_1);
}
