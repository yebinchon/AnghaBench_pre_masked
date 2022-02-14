
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
typedef int uid ;
struct iovec {int dummy; } ;
struct TYPE_4__ {int * storage_socket; } ;
typedef TYPE_1__ DynamicUser ;


 struct iovec FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,struct iovec*,int,int ) ;

__attribute__((used)) static int FUNC_3(DynamicUser *VAR_1, uid_t VAR_2, int VAR_3) {
        struct iovec VAR_4 = FUNC_0(&VAR_2, sizeof(VAR_2));

        FUNC_1(VAR_1);


        return FUNC_2(VAR_1->storage_socket[1], VAR_3, &VAR_4, 1, VAR_0);
}
