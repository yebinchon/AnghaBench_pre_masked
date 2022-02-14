
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int loop; } ;
typedef TYPE_1__ thread ;
struct TYPE_10__ {int fd; } ;
typedef TYPE_2__ connection ;
struct TYPE_11__ {int (* close ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 TYPE_4__ VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(thread *VAR_3, connection *VAR_4) {
    FUNC_0(VAR_3->loop, VAR_4->fd, VAR_1 | VAR_0);
    VAR_2.close(VAR_4);
    FUNC_1(VAR_4->fd);
    return FUNC_2(VAR_3, VAR_4);
}
