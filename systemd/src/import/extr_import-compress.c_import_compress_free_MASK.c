
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int bzip2; scalar_t__ encoding; int gzip; int xz; } ;
typedef TYPE_1__ ImportCompress ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(ImportCompress *VAR_4) {
        FUNC_2(VAR_4);

        if (VAR_4->type == VAR_3)
                FUNC_5(&VAR_4->xz);
        else if (VAR_4->type == VAR_1) {
                if (VAR_4->encoding)
                        FUNC_3(&VAR_4->gzip);
                else
                        FUNC_4(&VAR_4->gzip);







        }

        VAR_4->type = VAR_2;
}
