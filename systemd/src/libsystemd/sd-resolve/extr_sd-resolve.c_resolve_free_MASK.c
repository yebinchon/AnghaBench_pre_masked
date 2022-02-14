
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* floating; } ;
typedef TYPE_1__ sd_resolve_query ;
struct TYPE_14__ {int dead; scalar_t__* fds; unsigned int n_valid_workers; int * workers; int ** default_resolve_ptr; TYPE_1__* queries; } ;
typedef TYPE_2__ sd_resolve ;
struct TYPE_15__ {int length; int type; } ;
typedef TYPE_3__ RHeader ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__,TYPE_3__*,int,int ) ;

__attribute__((used)) static sd_resolve *FUNC_8(sd_resolve *VAR_5) {
        VAR_1;
        sd_resolve_query *VAR_6;
        unsigned VAR_7;

        FUNC_0(VAR_5);

        while ((VAR_6 = VAR_5->queries)) {
                FUNC_0(VAR_6->floating);
                FUNC_4(VAR_6);
                FUNC_6(VAR_6);
        }

        if (VAR_5->default_resolve_ptr)
                *(VAR_5->default_resolve_ptr) = ((void*)0);

        VAR_5->dead = 1;

        FUNC_5(VAR_5);

        if (VAR_5->fds[VAR_2] >= 0) {

                RHeader VAR_8 = {
                        .type = VAR_3,
                        .length = sizeof VAR_8,
                };


                for (VAR_7 = 0; VAR_7 < VAR_5->n_valid_workers; VAR_7++)
                        (void) FUNC_7(VAR_5->fds[VAR_2], &VAR_8, VAR_8.length, VAR_0);
        }



        for (VAR_7 = 0; VAR_7 < VAR_5->n_valid_workers; VAR_7++)
                (void) FUNC_3(VAR_5->workers[VAR_7], ((void*)0));


        FUNC_1(VAR_5->fds, VAR_4);

        return FUNC_2(VAR_5);
}
