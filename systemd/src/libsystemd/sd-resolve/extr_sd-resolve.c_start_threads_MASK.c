
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_4__ {unsigned int n_outstanding; unsigned int n_valid_workers; int * workers; } ;
typedef TYPE_1__ sd_resolve ;


 unsigned int FUNC_0 (unsigned int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(sd_resolve *VAR_5, unsigned VAR_6) {
        sigset_t VAR_7, VAR_8;
        unsigned VAR_9;
        int VAR_10, VAR_11;

        FUNC_1(FUNC_4(&VAR_7) >= 0);



        VAR_10 = FUNC_3(VAR_0, &VAR_7, &VAR_8);
        if (VAR_10 > 0)
                return -VAR_10;

        VAR_9 = VAR_5->n_outstanding + VAR_6;
        VAR_9 = FUNC_0(VAR_9, VAR_3, VAR_2);

        while (VAR_5->n_valid_workers < VAR_9) {
                VAR_10 = FUNC_2(&VAR_5->workers[VAR_5->n_valid_workers], ((void*)0), VAR_4, VAR_5);
                if (VAR_10 > 0) {
                        VAR_10 = -VAR_10;
                        goto finish;
                }

                VAR_5->n_valid_workers++;
        }

        VAR_10 = 0;

finish:
        VAR_11 = FUNC_3(VAR_1, &VAR_8, ((void*)0));
        if (VAR_11 > 0 && VAR_10 >= 0)
                VAR_10 = -VAR_11;

        return VAR_10;
}
