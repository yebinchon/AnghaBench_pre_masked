
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int usb_function_strings; int usb_function_descriptors; } ;
typedef TYPE_1__ Service ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_1, Service *VAR_2) {
        int VAR_3;

        if (!VAR_2->usb_function_descriptors || !VAR_2->usb_function_strings)
                return -VAR_0;

        VAR_3 = FUNC_0(VAR_2->usb_function_descriptors, VAR_1, 0);
        if (VAR_3 < 0)
                return VAR_3;

        return FUNC_0(VAR_2->usb_function_strings, VAR_1, 0);
}
