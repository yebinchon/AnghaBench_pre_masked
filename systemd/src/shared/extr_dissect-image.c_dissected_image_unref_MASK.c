
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int os_release; int machine_info; int hostname; TYPE_1__* partitions; } ;
struct TYPE_7__ {int decrypted_node; int decrypted_fstype; int node; int fstype; } ;
typedef TYPE_2__ DissectedImage ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

DissectedImage* FUNC_3(DissectedImage *VAR_1) {
        unsigned VAR_2;

        if (!VAR_1)
                return ((void*)0);

        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
                FUNC_0(VAR_1->partitions[VAR_2].fstype);
                FUNC_0(VAR_1->partitions[VAR_2].node);
                FUNC_0(VAR_1->partitions[VAR_2].decrypted_fstype);
                FUNC_0(VAR_1->partitions[VAR_2].decrypted_node);
        }

        FUNC_0(VAR_1->hostname);
        FUNC_2(VAR_1->machine_info);
        FUNC_2(VAR_1->os_release);

        return FUNC_1(VAR_1);
}
