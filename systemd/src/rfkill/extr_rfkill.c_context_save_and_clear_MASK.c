
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct write_queue_item {int dummy; } ;
struct TYPE_4__ {int rfkill_fd; struct write_queue_item* write_queue; } ;
typedef TYPE_1__ Context ;


 int FUNC_0 (int ,struct write_queue_item*,struct write_queue_item*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct write_queue_item*) ;
 int FUNC_4 (struct write_queue_item*) ;

__attribute__((used)) static void FUNC_5(Context *VAR_1) {
        struct write_queue_item *VAR_2;

        FUNC_1(VAR_1);

        while ((VAR_2 = VAR_1->write_queue)) {
                FUNC_0(VAR_0, VAR_1->write_queue, VAR_2);
                (void) FUNC_3(VAR_2);
                FUNC_4(VAR_2);
        }

        FUNC_2(VAR_1->rfkill_fd);
}
