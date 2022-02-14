
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; scalar_t__ fd; } ;
typedef TYPE_1__ Varlink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(Varlink *VAR_4) {

        FUNC_0(VAR_4, -VAR_1);

        if (VAR_4->state == VAR_3)
                return -VAR_2;
        if (VAR_4->fd < 0)
                return -VAR_0;

        return VAR_4->fd;
}
