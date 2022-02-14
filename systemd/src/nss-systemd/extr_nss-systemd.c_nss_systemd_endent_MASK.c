
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum nss_status { ____Placeholder_nss_status } nss_status ;
struct TYPE_4__ {int mutex; } ;
typedef TYPE_1__ GetentData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static enum nss_status FUNC_5(GetentData *VAR_3) {
        VAR_2;
        FUNC_0(VAR_0);

        FUNC_1(FUNC_2(&VAR_3->mutex) == 0);
        FUNC_4(VAR_3);
        FUNC_1(FUNC_3(&VAR_3->mutex) == 0);

        return VAR_1;
}
