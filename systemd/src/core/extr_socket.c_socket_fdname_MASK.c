
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* id; } ;
struct TYPE_6__ {scalar_t__ fdname; } ;
typedef TYPE_1__ Socket ;


 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

char *FUNC_2(Socket *VAR_0) {
        FUNC_1(VAR_0);





        return VAR_0->fdname ?: FUNC_0(VAR_0)->id;
}
