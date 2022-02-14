
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void uint8_t ;
typedef scalar_t__ uint32_t ;
struct bus_header {int dummy; } ;
struct TYPE_5__ {void* name; } ;
struct TYPE_6__ {int poisoned; int fields_size; int free_header; scalar_t__ n_header_offsets; size_t* header_offsets; void* header; TYPE_1__ error; void* sender; void* destination; void* member; void* interface; void* path; } ;
typedef TYPE_2__ sd_bus_message ;


 int FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 scalar_t__ FUNC_2 (size_t*) ;
 void* FUNC_3 (void*,void*,size_t,void*) ;
 int FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (void*,void*,int) ;
 int FUNC_7 (void*,size_t) ;
 void* FUNC_8 (void*,int ) ;

__attribute__((used)) static void *FUNC_9(sd_bus_message *VAR_0, size_t VAR_1, size_t VAR_2, bool VAR_3) {
        void *VAR_4, *VAR_5;
        size_t VAR_6, VAR_7, VAR_8;

        FUNC_4(VAR_0);

        if (VAR_0->poisoned)
                return ((void*)0);

        VAR_6 = sizeof(struct bus_header) + VAR_0->fields_size;
        VAR_8 = FUNC_1(VAR_6, VAR_1);
        VAR_7 = VAR_8 + VAR_2;

        if (VAR_7 < VAR_8 ||
            VAR_7 > (size_t) ((uint32_t) -1))
                goto poison;

        if (VAR_6 == VAR_7)
                return (uint8_t*) VAR_0->header + VAR_6;

        if (VAR_0->free_header) {
                VAR_5 = FUNC_8(VAR_0->header, FUNC_0(VAR_7));
                if (!VAR_5)
                        goto poison;
        } else {




                VAR_5 = FUNC_5(FUNC_0(VAR_7));
                if (!VAR_5)
                        goto poison;

                FUNC_6(VAR_5, VAR_0->header, sizeof(struct bus_header));
        }


        if (VAR_8 > VAR_6)
                FUNC_7((uint8_t*) VAR_5 + VAR_6, VAR_8 - VAR_6);

        VAR_4 = VAR_0->header;
        VAR_0->header = VAR_5;
        VAR_0->fields_size = VAR_7 - sizeof(struct bus_header);


        VAR_0->path = FUNC_3(VAR_0->path, VAR_4, VAR_6, VAR_0->header);
        VAR_0->interface = FUNC_3(VAR_0->interface, VAR_4, VAR_6, VAR_0->header);
        VAR_0->member = FUNC_3(VAR_0->member, VAR_4, VAR_6, VAR_0->header);
        VAR_0->destination = FUNC_3(VAR_0->destination, VAR_4, VAR_6, VAR_0->header);
        VAR_0->sender = FUNC_3(VAR_0->sender, VAR_4, VAR_6, VAR_0->header);
        VAR_0->error.name = FUNC_3(VAR_0->error.name, VAR_4, VAR_6, VAR_0->header);

        VAR_0->free_header = 1;

        if (VAR_3) {
                if (VAR_0->n_header_offsets >= FUNC_2(VAR_0->header_offsets))
                        goto poison;

                VAR_0->header_offsets[VAR_0->n_header_offsets++] = VAR_7 - sizeof(struct bus_header);
        }

        return (uint8_t*) VAR_5 + VAR_8;

poison:
        VAR_0->poisoned = 1;
        return ((void*)0);
}
