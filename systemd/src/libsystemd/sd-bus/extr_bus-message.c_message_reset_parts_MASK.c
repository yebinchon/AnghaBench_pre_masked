
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct bus_body_part {struct bus_body_part* next; } ;
struct TYPE_5__ {scalar_t__ n_body_parts; scalar_t__ cached_rindex_part_begin; int * cached_rindex_part; int * body_end; struct bus_body_part body; } ;
typedef TYPE_1__ sd_bus_message ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct bus_body_part*) ;

__attribute__((used)) static void FUNC_2(sd_bus_message *VAR_0) {
        struct bus_body_part *VAR_1;

        FUNC_0(VAR_0);

        VAR_1 = &VAR_0->body;
        while (VAR_0->n_body_parts > 0) {
                struct bus_body_part *VAR_2 = VAR_1->next;
                FUNC_1(VAR_0, VAR_1);
                VAR_1 = VAR_2;
                VAR_0->n_body_parts--;
        }

        VAR_0->body_end = ((void*)0);

        VAR_0->cached_rindex_part = ((void*)0);
        VAR_0->cached_rindex_part_begin = 0;
}
