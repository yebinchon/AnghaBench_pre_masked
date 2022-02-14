
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int source; int fd; } ;
typedef TYPE_1__ PortableMetadata ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

PortableMetadata *FUNC_3(PortableMetadata *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_2(VAR_0->fd);
        FUNC_0(VAR_0->source);

        return FUNC_1(VAR_0);
}
