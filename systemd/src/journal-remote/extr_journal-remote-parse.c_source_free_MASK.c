
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int n_ref; } ;
struct TYPE_5__ {int buffer_event; int event; TYPE_2__* writer; int importer; } ;
typedef TYPE_1__ RemoteSource ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(RemoteSource *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_1(&VAR_0->importer);

        FUNC_2("Writer ref count %i", VAR_0->writer->n_ref);
        FUNC_4(VAR_0->writer);

        FUNC_3(VAR_0->event);
        FUNC_3(VAR_0->buffer_event);

        FUNC_0(VAR_0);
}
