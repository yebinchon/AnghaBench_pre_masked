
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* header; } ;
typedef TYPE_2__ sd_bus_message ;
struct TYPE_11__ {scalar_t__ message_version; scalar_t__ message_endian; } ;
typedef TYPE_3__ sd_bus ;
struct TYPE_9__ {scalar_t__ version; scalar_t__ endian; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__**) ;

__attribute__((used)) static int FUNC_2(sd_bus *VAR_0, sd_bus_message **VAR_1) {
        bool VAR_2 = 0;

        FUNC_0(VAR_0);


        if (VAR_0->message_version != 0 && VAR_0->message_version != (*VAR_1)->header->version)
                VAR_2 = 1;


        if (VAR_0->message_endian != 0 && VAR_0->message_endian != (*VAR_1)->header->endian)
                VAR_2 = 1;

        return VAR_2 ? FUNC_1(VAR_0, VAR_1) : 0;
}
