
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct bus_body_part {size_t size; struct bus_body_part* next; scalar_t__ data; } ;
struct TYPE_4__ {size_t cached_rindex_part_begin; struct bus_body_part* cached_rindex_part; struct bus_body_part body; } ;
typedef TYPE_1__ sd_bus_message ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct bus_body_part*) ;

__attribute__((used)) static struct bus_body_part* FUNC_2(sd_bus_message *VAR_0, size_t VAR_1, size_t VAR_2, void **VAR_3) {
        struct bus_body_part *VAR_4;
        size_t VAR_5;
        int VAR_6;

        FUNC_0(VAR_0);

        if (VAR_0->cached_rindex_part && VAR_1 >= VAR_0->cached_rindex_part_begin) {
                VAR_4 = VAR_0->cached_rindex_part;
                VAR_5 = VAR_0->cached_rindex_part_begin;
        } else {
                VAR_4 = &VAR_0->body;
                VAR_5 = 0;
        }

        while (VAR_4) {
                if (VAR_1 < VAR_5)
                        return ((void*)0);

                if (VAR_1 + VAR_2 <= VAR_5 + VAR_4->size) {

                        VAR_6 = FUNC_1(VAR_4);
                        if (VAR_6 < 0)
                                return ((void*)0);

                        if (VAR_3)
                                *VAR_3 = (uint8_t*) VAR_4->data + VAR_1 - VAR_5;

                        VAR_0->cached_rindex_part = VAR_4;
                        VAR_0->cached_rindex_part_begin = VAR_5;

                        return VAR_4;
                }

                VAR_5 += VAR_4->size;
                VAR_4 = VAR_4->next;
        }

        return ((void*)0);
}
