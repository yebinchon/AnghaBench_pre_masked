
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(Context *VAR_3) {

        FUNC_0(VAR_3);

        if (FUNC_1(VAR_3->data[VAR_1])) {

                if (FUNC_2("/etc/hostname") < 0)
                        return VAR_2 == VAR_0 ? 0 : -VAR_2;

                return 0;
        }
        return FUNC_3("/etc/hostname", VAR_3->data[VAR_1]);
}
