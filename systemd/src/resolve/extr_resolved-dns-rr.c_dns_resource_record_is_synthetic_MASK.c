
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int n_skip_labels_source; int key; } ;
typedef TYPE_1__ DnsResourceRecord ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

int FUNC_3(DnsResourceRecord *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);



        if (VAR_1->n_skip_labels_source == (unsigned) -1)
                return -VAR_0;

        if (VAR_1->n_skip_labels_source == 0)
                return 0;

        if (VAR_1->n_skip_labels_source > 1)
                return 1;

        VAR_2 = FUNC_1(FUNC_2(VAR_1->key), "*");
        if (VAR_2 < 0)
                return VAR_2;

        return !VAR_2;
}
