
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int device_tree; int initrd; int efi; int kernel; int options; int architecture; int machine_id; int version; int show_title; int title; int root; int path; int id; } ;
typedef TYPE_1__ BootEntry ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(BootEntry *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_1(VAR_0->id);
        FUNC_1(VAR_0->path);
        FUNC_1(VAR_0->root);
        FUNC_1(VAR_0->title);
        FUNC_1(VAR_0->show_title);
        FUNC_1(VAR_0->version);
        FUNC_1(VAR_0->machine_id);
        FUNC_1(VAR_0->architecture);
        FUNC_2(VAR_0->options);
        FUNC_1(VAR_0->kernel);
        FUNC_1(VAR_0->efi);
        FUNC_2(VAR_0->initrd);
        FUNC_1(VAR_0->device_tree);
}
